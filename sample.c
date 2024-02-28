/*
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 * File:        custom_led.c
 * Purpose:     Customer CMICx LED bit pattern composer.
 * License:     See include/LICENSE
 */

#include <shared/cmicfw/cmicx_led_public.h>

/*****************************************
 *  Customer defintion.
 *****************************************/

/*! The time window of activity LED displaying on. */
#define ACT_TICKS        2

/*! Customer defined software flag. */
#define LED_SW_LINK_UP   0x1

/*!
 * \brief Function for LED bit pattern generator.
 *
 * Customer can compose the LED bit pattern to control serial LED
 * according to link/traffic information.
 *
 * \param [in,out] ctrl Data structure indicating the locations of the
 *                      port status and serial LED bit pattern RAM.
 * \param [in] cnt 30Hz counter.
 *
 */
void customer_led_handler(soc_led_custom_handler_ctrl_t *ctrl, uint32 cnt) {
  uint16 led_uc_port;
  uint16 intf;
  uint16 accu_val = 0, pattern = 0;
  uint8 idx;

  /*
   * Assume that board configuration is as follows.
   *  - Front-panel ports are 128x25G.
   *  - led_uc_port 0-63 are connected to LED interface 0.
   *  - led_uc_port 64-127 are connected to LED interface 1.
   *  - Each port has two LEDs to display link status and activity.
   *  - LED1 pattern: b[1-0] - Link status: Green - Up, Off - Down
   *    LED2 pattern: b[3-2] - Rx/Tx Activity: Green/Orange.
   */

  /* Process all fornt ports. */
  for (led_uc_port = 0; led_uc_port < 384; led_uc_port ++) {

    /* Read value from accumulation RAM */
    accu_val = LED_HW_RAM_READ16(ctrl->accu_ram_base, led_uc_port);

    /* Read value from pattern RAM */
    pattern = LED_HW_RAM_READ16(ctrl->pat_ram_base, led_uc_port);

    /* Check software link up flag */
    if (ctrl->led_control_data[led_uc_port] & LED_SW_LINK_UP) {

      /* Set Link Status in bits [1:0] according to board configuration. */
      pattern &= ~(0x3);
      pattern |= (LED_GREEN);

      /* Check software link up flag and port activity */
      if (cnt & ACT_TICKS) {
        if (accu_val & (LED_HW_RX | LED_HW_TX)) {
          /* Clear activity output.*/
          pattern &= ~(0xC);
          if ((ctrl->led_control_data[led_uc_port] & 0x6) == (LED_ORANGE << 1)) {
            /* Set Activity in bits [3:2] to orange. */
            pattern |= (LED_ORANGE << 2);
          } else {
            /* Set Activity in bits [3:2] to green. */
            pattern |= (LED_GREEN << 2);
          }
        }
      } else {
        /* Clear activity output.*/
        pattern &= ~(0xC);
      }
    } else {
      /* Clear Link Status and Activity bits */
      pattern &= ~0xf;
    }

    /* Write value to pattern RAM */
    LED_HW_RAM_WRITE16(ctrl->pat_ram_base, led_uc_port, pattern);
  }

  /* Configure LED HW interfaces based on board configuration */
  for (idx = 0; idx < LED_HW_INTF_MAX_NUM; idx++) {
    soc_led_intf_ctrl_t *lic = &ctrl->intf_ctrl[idx];
    switch (idx) {
    case 0:
      /* Send the pattern over LED interface 0 for ports 0 - 63 */
      lic->valid = 1;
      lic->start_row = 0;
      lic->end_row = 63;
      lic->pat_width = 4;
      break;
    case 1:
      /* Send the pattern over LED interface 1 for ports 64 - 127 */
      lic->valid = 1;
      lic->start_row = 64;
      lic->end_row = 127;
      lic->pat_width = 4;
      break;
    default:
      /* Invalidate rest of the interfaces */
      lic->valid = 0;
      break;
    }
  }
}

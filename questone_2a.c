/*
 * This file is part of SONIXs LED drivers for Broadcom.
 * See https://github.com/sonix-network/broadcom-leds.
 *
 * Copyright (c) 2024 SONIX
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include <shared/cmicfw/cmicx_led_public.h>

/*!
 * \brief Function for LED bit pattern generator.
 *
 * \param [in,out] ctrl Data structure indicating the locations of the
 *                      port status and serial LED bit pattern RAM.
 * \param [in] cntr 30Hz counter.
 *
 */
void led_handler(soc_led_custom_handler_ctrl_t *ctrl, uint32 cntr) {
}

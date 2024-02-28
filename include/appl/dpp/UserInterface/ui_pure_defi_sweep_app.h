/* 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
*/
#ifndef UI_PURE_DEFI_SWEEP_APP_INCLUDED
/* { */
#define UI_PURE_DEFI_SWEEP_APP_INCLUDED
/*
 * Note:
 * the following definitions must range between PARAM_SWEEP_APP_START_RANGE_ID (2100)
 * and PARAM_SWEEP_APP_END_RANGE_ID (2299).
 * See ui_pure_defi.h
 */
/* for the 'subject' "sweep" (fap20v sweep application). */
#define PARAM_SWEEP_APP_SET_QOS_PARAMS_ID            (PARAM_SWEEP_APP_START_RANGE_ID+0)
#define PARAM_SWEEP_APP_GET_QOS_PARAMS_ID            (PARAM_SWEEP_APP_START_RANGE_ID+1)
#define PARAM_SWEEP_APP_POWER_UP_SERDES_ID           (PARAM_SWEEP_APP_START_RANGE_ID+2)
#define PARAM_SWEEP_APP_POWER_DOWN_SERDES_ID         (PARAM_SWEEP_APP_START_RANGE_ID+3)
#define PARAM_SWEEP_APP_GET_CONNECTIVITY_MAP_ID      (PARAM_SWEEP_APP_START_RANGE_ID+4)
#define PARAM_SWEEP_APP_GRACEFUL_SHUTDOWN_FE_ID      (PARAM_SWEEP_APP_START_RANGE_ID+5)
#define PARAM_SWEEP_APP_SOURCE_FAP_DEVICE_ID         (PARAM_SWEEP_APP_START_RANGE_ID+12)
#define PARAM_SWEEP_APP_DESTINATION_FAP_DEVICE_ID    (PARAM_SWEEP_APP_START_RANGE_ID+13)
#define PARAM_SWEEP_APP_DESTINATION_PORT_ID          (PARAM_SWEEP_APP_START_RANGE_ID+14)
#define PARAM_SWEEP_APP_DESTINATION_CLASS_ID         (PARAM_SWEEP_APP_START_RANGE_ID+15)
#define PARAM_SWEEP_APP_SUB_FLOW_1_VALUE_ID          (PARAM_SWEEP_APP_START_RANGE_ID+16)
#define PARAM_SWEEP_APP_SUB_FLOW_1_TYPE_ID           (PARAM_SWEEP_APP_START_RANGE_ID+17)
#define PARAM_SWEEP_APP_SUB_FLOW_0_VALUE_ID          (PARAM_SWEEP_APP_START_RANGE_ID+18)
#define PARAM_SWEEP_APP_SUB_FLOW_0_TYPE_ID           (PARAM_SWEEP_APP_START_RANGE_ID+19)
#define PARAM_SWEEP_APP_SERDES_ID                    (PARAM_SWEEP_APP_START_RANGE_ID+20)
#define PARAM_SWEEP_APP_FE_DEVICE_ID                 (PARAM_SWEEP_APP_START_RANGE_ID+21)
#define PARAM_SWEEP_APP_FAP_DEVICE_ID                (PARAM_SWEEP_APP_START_RANGE_ID+22)
#define PARAM_SWEEP_APP_QUEUE_ON_MSG_INTERVAL_ID     (PARAM_SWEEP_APP_START_RANGE_ID+23)
#define PARAM_SWEEP_APP_AGGR_ON_MSG_INTERVAL_ID      (PARAM_SWEEP_APP_START_RANGE_ID+24)
#define PARAM_SWEEP_APP_SET_INTERVAL_ID              (PARAM_SWEEP_APP_START_RANGE_ID+25)
#define PARAM_SWEEP_APP_GET_INTERVAL_ID              (PARAM_SWEEP_APP_START_RANGE_ID+26)
#define PARAM_SWEEP_APP_REFRESH_ALL_AGGRS            (PARAM_SWEEP_APP_START_RANGE_ID+27)
#define PARAM_SWEEP_QOS_ID                           (PARAM_SWEEP_APP_START_RANGE_ID+28)
#define PARAM_SWEEP_QOS_GET_ID                       (PARAM_SWEEP_APP_START_RANGE_ID+29)
#define PARAM_SWEEP_QOS_SET_ID                       (PARAM_SWEEP_APP_START_RANGE_ID+30)
#define PARAM_SWEEP_QOS_SCH_ID                       (PARAM_SWEEP_APP_START_RANGE_ID+31)
#define PARAM_SWEEP_VERBOSE_ID                       (PARAM_SWEEP_APP_START_RANGE_ID+33)
#define PARAM_SWEEP_APP_GRACEFUL_RESTORE_FE_ID       (PARAM_SWEEP_APP_START_RANGE_ID+34)
#define PARAM_SWEEP_QOS_MIN_RATE_ID                  (PARAM_SWEEP_APP_START_RANGE_ID+35)
#define PARAM_SWEEP_QOS_MAX_RATE_ID                  (PARAM_SWEEP_APP_START_RANGE_ID+36)
#define PARAM_SWEEP_QOS_LOW_LATENCY_ID               (PARAM_SWEEP_APP_START_RANGE_ID+37)


/* } */
#endif

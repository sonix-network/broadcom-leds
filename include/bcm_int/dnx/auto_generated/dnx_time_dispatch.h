/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 * File:        dnx_time_dispatch.h
 * Purpose:     dnx time driver BCM API dispatch table
 * Generator:   modules_dispatch.py
 */

#ifndef _BCM_INT_DNX_TIME_DISPATCH_H
#define _BCM_INT_DNX_TIME_DISPATCH_H

#include <bcm/types.h>
#include <bcm_int/dispatch.h>

#ifdef BCM_DNX_SUPPORT

extern int bcm_dnx_time_bs_log_configure_get(int,bcm_time_bs_log_cfg_t *);
extern int bcm_dnx_time_bs_log_configure_set(int,bcm_time_bs_log_cfg_t);
extern int bcm_dnx_time_bs_time_get(int,bcm_time_spec_t *);
extern int bcm_dnx_time_capture_cb_register(int,bcm_time_if_t,bcm_time_capture_cb_type_t,bcm_time_capture_cb,void *);
extern int bcm_dnx_time_capture_cb_unregister(int,bcm_time_if_t,bcm_time_capture_cb_type_t);
extern int bcm_dnx_time_capture_enable_set(int,bcm_time_if_t,bcm_time_capture_t *,int,int *);
extern int bcm_dnx_time_capture_get(int,bcm_time_if_t,bcm_time_capture_t *);
extern int bcm_dnx_time_deinit(int);
extern int bcm_dnx_time_heartbeat_enable_get(int,bcm_time_if_t,int *);
extern int bcm_dnx_time_heartbeat_enable_set(int,bcm_time_if_t,int);
extern int bcm_dnx_time_heartbeat_register(int,bcm_time_if_t,bcm_time_heartbeat_cb,void *);
extern int bcm_dnx_time_heartbeat_unregister(int,bcm_time_if_t);
extern int bcm_dnx_time_init(int);
extern int bcm_dnx_time_interface_add(int,bcm_time_interface_t *);
extern int bcm_dnx_time_interface_delete(int,bcm_time_if_t);
extern int bcm_dnx_time_interface_delete_all(int);
extern int bcm_dnx_time_interface_get(int,bcm_time_interface_t *);
extern int bcm_dnx_time_interface_traverse(int,bcm_time_interface_traverse_cb,void *);
extern int bcm_dnx_time_tod_get(int,uint32,bcm_time_tod_t *);
extern int bcm_dnx_time_tod_set(int,uint32,bcm_time_tod_t *);
extern int bcm_dnx_time_trigger_enable_get(int,bcm_time_if_t,uint32 *);
extern int bcm_dnx_time_trigger_enable_set(int,bcm_time_if_t,uint32);
extern int bcm_dnx_time_ts_counter_get(int,bcm_time_ts_counter_t *);
extern int bcm_dnx_time_ts_counter_set(int,bcm_time_ts_counter_t *);
extern int bcm_dnx_time_ts_offset_set(int,int64,uint64,int);

#endif /* BCM_DNX_SUPPORT */
#endif /* !_BCM_INT_DNX_TIME_DISPATCH_H */

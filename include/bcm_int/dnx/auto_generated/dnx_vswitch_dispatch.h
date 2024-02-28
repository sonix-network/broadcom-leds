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
 * File:        dnx_vswitch_dispatch.h
 * Purpose:     dnx vswitch driver BCM API dispatch table
 * Generator:   modules_dispatch.py
 */

#ifndef _BCM_INT_DNX_VSWITCH_DISPATCH_H
#define _BCM_INT_DNX_VSWITCH_DISPATCH_H

#include <bcm/types.h>
#include <bcm_int/dispatch.h>

#ifdef BCM_DNX_SUPPORT

extern int bcm_dnx_vswitch_create(int,bcm_vlan_t *);
extern int bcm_dnx_vswitch_create_with_id(int,bcm_vlan_t);
extern int bcm_dnx_vswitch_cross_connect_add(int,bcm_vswitch_cross_connect_t *);
extern int bcm_dnx_vswitch_cross_connect_delete(int,bcm_vswitch_cross_connect_t *);
extern int bcm_dnx_vswitch_cross_connect_delete_all(int);
extern int bcm_dnx_vswitch_cross_connect_get(int,bcm_vswitch_cross_connect_t *);
extern int bcm_dnx_vswitch_cross_connect_traverse(int,bcm_vswitch_cross_connect_traverse_cb,void *);
extern int bcm_dnx_vswitch_destroy(int,bcm_vlan_t);
extern int bcm_dnx_vswitch_flexible_connect_add(int,uint32,bcm_vswitch_flexible_connect_match_t *,bcm_vswitch_flexible_connect_fwd_t *);
extern int bcm_dnx_vswitch_flexible_connect_delete(int,bcm_vswitch_flexible_connect_match_t *);
extern int bcm_dnx_vswitch_flexible_connect_get(int,uint32,bcm_vswitch_flexible_connect_match_t *,bcm_vswitch_flexible_connect_fwd_t *);
extern int bcm_dnx_vswitch_init(int);
extern int bcm_dnx_vswitch_port_add(int,bcm_vlan_t,bcm_gport_t);
extern int bcm_dnx_vswitch_port_delete(int,bcm_vlan_t,bcm_gport_t);
extern int bcm_dnx_vswitch_port_delete_all(int,bcm_vlan_t);
extern int bcm_dnx_vswitch_port_get(int,bcm_gport_t,bcm_vlan_t *);
extern int bcm_dnx_vswitch_port_traverse(int,bcm_vlan_t,bcm_vswitch_port_traverse_cb,void *);

#endif /* BCM_DNX_SUPPORT */
#endif /* !_BCM_INT_DNX_VSWITCH_DISPATCH_H */

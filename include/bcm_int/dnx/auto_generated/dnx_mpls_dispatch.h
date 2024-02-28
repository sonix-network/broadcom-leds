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
 * File:        dnx_mpls_dispatch.h
 * Purpose:     dnx mpls driver BCM API dispatch table
 * Generator:   modules_dispatch.py
 */

#ifndef _BCM_INT_DNX_MPLS_DISPATCH_H
#define _BCM_INT_DNX_MPLS_DISPATCH_H

#include <bcm/types.h>
#include <bcm_int/dispatch.h>

#ifdef BCM_DNX_SUPPORT

extern int bcm_dnx_mpls_esi_encap_add(int,bcm_mpls_esi_info_t *);
extern int bcm_dnx_mpls_esi_encap_delete(int,bcm_mpls_esi_info_t *);
extern int bcm_dnx_mpls_esi_encap_get(int,bcm_mpls_esi_info_t *);
extern int bcm_dnx_mpls_esi_encap_traverse(int,bcm_mpls_esi_encap_traverse_cb,void *);
extern int bcm_dnx_mpls_exp_map_create(int,uint32,int *);
extern int bcm_dnx_mpls_exp_map_destroy(int,int);
extern int bcm_dnx_mpls_exp_map_get(int,int,bcm_mpls_exp_map_t *);
extern int bcm_dnx_mpls_exp_map_set(int,int,bcm_mpls_exp_map_t *);
extern int bcm_dnx_mpls_port_add(int,bcm_vpn_t,bcm_mpls_port_t *);
extern int bcm_dnx_mpls_port_delete(int,bcm_vpn_t,bcm_gport_t);
extern int bcm_dnx_mpls_port_get(int,bcm_vpn_t,bcm_mpls_port_t *);
extern int bcm_dnx_mpls_port_traverse(int,bcm_mpls_port_traverse_info_t,bcm_mpls_port_traverse_cb,void *);
extern int bcm_dnx_mpls_range_action_add(int,bcm_mpls_label_t,bcm_mpls_label_t,bcm_mpls_range_action_t *);
extern int bcm_dnx_mpls_range_action_get(int,bcm_mpls_label_t,bcm_mpls_label_t,bcm_mpls_range_action_t *);
extern int bcm_dnx_mpls_range_action_remove(int,bcm_mpls_label_t,bcm_mpls_label_t);
extern int bcm_dnx_mpls_special_label_identifier_add(int,bcm_mpls_special_label_type_t,bcm_mpls_special_label_t);
extern int bcm_dnx_mpls_special_label_identifier_delete(int,bcm_mpls_special_label_type_t,bcm_mpls_special_label_t);
extern int bcm_dnx_mpls_special_label_identifier_delete_all(int);
extern int bcm_dnx_mpls_special_label_identifier_get(int,bcm_mpls_special_label_type_t,bcm_mpls_special_label_t *);
extern int bcm_dnx_mpls_special_label_identifier_traverse(int,bcm_mpls_special_label_identifier_traverse_cb,void *);
extern int bcm_dnx_mpls_tunnel_initiator_clear(int,bcm_if_t);
extern int bcm_dnx_mpls_tunnel_initiator_clear_all(int);
extern int bcm_dnx_mpls_tunnel_initiator_create(int,bcm_if_t,int,bcm_mpls_egress_label_t *);
extern int bcm_dnx_mpls_tunnel_initiator_get(int,bcm_if_t,int,bcm_mpls_egress_label_t *,int *);
extern int bcm_dnx_mpls_tunnel_initiator_set(int,bcm_if_t,int,bcm_mpls_egress_label_t *);
extern int bcm_dnx_mpls_tunnel_initiator_traverse(int,bcm_mpls_tunnel_initiator_traverse_info_t *,bcm_mpls_tunnel_initiator_traverse_cb,void *);
extern int bcm_dnx_mpls_tunnel_switch_add(int,bcm_mpls_tunnel_switch_t *);
extern int bcm_dnx_mpls_tunnel_switch_create(int,bcm_mpls_tunnel_switch_t *);
extern int bcm_dnx_mpls_tunnel_switch_delete(int,bcm_mpls_tunnel_switch_t *);
extern int bcm_dnx_mpls_tunnel_switch_delete_all(int);
extern int bcm_dnx_mpls_tunnel_switch_get(int,bcm_mpls_tunnel_switch_t *);
extern int bcm_dnx_mpls_tunnel_switch_traverse(int,bcm_mpls_tunnel_switch_traverse_cb,void *);
extern int bcm_dnx_mpls_vpn_id_create(int,bcm_mpls_vpn_config_t *);
extern int bcm_dnx_mpls_vpn_id_destroy(int,bcm_vpn_t);
extern int bcm_dnx_mpls_vpn_id_destroy_all(int);
extern int bcm_dnx_mpls_vpn_id_get(int,bcm_vpn_t,bcm_mpls_vpn_config_t *);
extern int bcm_dnx_mpls_vpn_traverse(int,bcm_mpls_vpn_traverse_cb,void *);

#endif /* BCM_DNX_SUPPORT */
#endif /* !_BCM_INT_DNX_MPLS_DISPATCH_H */

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
 * File:        dnx_xflow_macsec_dispatch.h
 * Purpose:     dnx xflow_macsec driver BCM API dispatch table
 * Generator:   modules_dispatch.py
 */

#ifndef _BCM_INT_DNX_XFLOW_MACSEC_DISPATCH_H
#define _BCM_INT_DNX_XFLOW_MACSEC_DISPATCH_H

#include <bcm/types.h>
#include <bcm_int/dispatch.h>

#ifdef BCM_DNX_SUPPORT

extern int bcm_dnx_xflow_macsec_control_get(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_control_t,uint64 *);
extern int bcm_dnx_xflow_macsec_control_set(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_control_t,uint64);
extern int bcm_dnx_xflow_macsec_decrypt_flow_create(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_decrypt_flow_info_t *,int,bcm_xflow_macsec_flow_id_t *);
extern int bcm_dnx_xflow_macsec_decrypt_flow_default_policy_get(int,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_policy_id_t *);
extern int bcm_dnx_xflow_macsec_decrypt_flow_destroy(int,bcm_xflow_macsec_flow_id_t);
extern int bcm_dnx_xflow_macsec_decrypt_flow_enable_get(int,bcm_xflow_macsec_flow_id_t,int *);
extern int bcm_dnx_xflow_macsec_decrypt_flow_enable_set(int,bcm_xflow_macsec_flow_id_t,int);
extern int bcm_dnx_xflow_macsec_decrypt_flow_get(int,bcm_xflow_macsec_flow_id_t,bcm_xflow_macsec_decrypt_flow_info_t *,int *);
extern int bcm_dnx_xflow_macsec_decrypt_flow_set(int,bcm_xflow_macsec_flow_id_t,bcm_xflow_macsec_decrypt_flow_info_t *,int);
extern int bcm_dnx_xflow_macsec_decrypt_policy_create(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_decrypt_policy_info_t *,bcm_xflow_macsec_policy_id_t *);
extern int bcm_dnx_xflow_macsec_decrypt_policy_destroy(int,bcm_xflow_macsec_policy_id_t);
extern int bcm_dnx_xflow_macsec_decrypt_policy_get(int,bcm_xflow_macsec_policy_id_t,bcm_xflow_macsec_decrypt_policy_info_t *);
extern int bcm_dnx_xflow_macsec_decrypt_policy_set(int,bcm_xflow_macsec_policy_id_t,bcm_xflow_macsec_decrypt_policy_info_t *);
extern int bcm_dnx_xflow_macsec_decrypt_svtag_cpu_flex_map_enable_get(int,bcm_xflow_macsec_instance_id_t,int,int *);
extern int bcm_dnx_xflow_macsec_decrypt_svtag_cpu_flex_map_enable_set(int,bcm_xflow_macsec_instance_id_t,int,int);
extern int bcm_dnx_xflow_macsec_decrypt_svtag_cpu_flex_map_get(int,bcm_xflow_macsec_instance_id_t,int,bcm_xflow_macsec_svtag_cpu_flex_map_info_t *);
extern int bcm_dnx_xflow_macsec_decrypt_svtag_cpu_flex_map_set(int,bcm_xflow_macsec_instance_id_t,int,bcm_xflow_macsec_svtag_cpu_flex_map_info_t *);
extern int bcm_dnx_xflow_macsec_event_deregister(int,bcm_xflow_macsec_event_cb);
extern int bcm_dnx_xflow_macsec_event_register(int,bcm_xflow_macsec_event_cb,void *);
extern int bcm_dnx_xflow_macsec_handle_create(int,bcm_xflow_macsec_handle_info_t *,bcm_xflow_macsec_id_t *);
extern int bcm_dnx_xflow_macsec_handle_info_get(int,bcm_xflow_macsec_id_t,bcm_xflow_macsec_handle_info_t *);
extern int bcm_dnx_xflow_macsec_instance_pbmp_map_get(int,int,bcm_xflow_macsec_instance_pbmp_t *,int *);
extern int bcm_dnx_xflow_macsec_ipsec_secure_assoc_create(int,uint32,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_ipsec_secure_assoc_info_t *,bcm_xflow_macsec_secure_assoc_id_t *);
extern int bcm_dnx_xflow_macsec_ipsec_secure_assoc_destroy(int,bcm_xflow_macsec_secure_assoc_id_t);
extern int bcm_dnx_xflow_macsec_ipsec_secure_assoc_get(int,bcm_xflow_macsec_secure_assoc_id_t,bcm_xflow_macsec_ipsec_secure_assoc_info_t *,bcm_xflow_macsec_secure_chan_id_t *);
extern int bcm_dnx_xflow_macsec_ipsec_secure_assoc_set(int,bcm_xflow_macsec_secure_assoc_id_t,bcm_xflow_macsec_ipsec_secure_assoc_info_t *);
extern int bcm_dnx_xflow_macsec_ipsec_secure_assoc_traverse(int,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_ipsec_secure_assoc_traverse_cb,void *);
extern int bcm_dnx_xflow_macsec_ipsec_secure_chan_create(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_ipsec_secure_chan_info_t *,bcm_xflow_macsec_secure_chan_id_t *);
extern int bcm_dnx_xflow_macsec_ipsec_secure_chan_destroy(int,bcm_xflow_macsec_secure_chan_id_t);
extern int bcm_dnx_xflow_macsec_ipsec_secure_chan_get(int,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_ipsec_secure_chan_info_t *);
extern int bcm_dnx_xflow_macsec_ipsec_secure_chan_info_traverse(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_ipsec_chan_traverse_cb,void *);
extern int bcm_dnx_xflow_macsec_ipsec_secure_chan_set(int,uint32,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_ipsec_secure_chan_info_t *);
extern int bcm_dnx_xflow_macsec_mac_addr_control_get(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_mac_addr_control_t,bcm_xflow_macsec_mac_addr_info_t *);
extern int bcm_dnx_xflow_macsec_mac_addr_control_set(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_mac_addr_control_t,bcm_xflow_macsec_mac_addr_info_t *);
extern int bcm_dnx_xflow_macsec_mtu_get(int,int,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_mtu_t,uint32 *);
extern int bcm_dnx_xflow_macsec_mtu_set(int,int,bcm_xflow_macsec_instance_id_t,uint32,bcm_xflow_macsec_mtu_t *);
extern int bcm_dnx_xflow_macsec_port_control_get(int,uint32,bcm_gport_t,bcm_xflow_macsec_port_control_t,bcm_xflow_macsec_port_info_t *);
extern int bcm_dnx_xflow_macsec_port_control_set(int,uint32,bcm_gport_t,bcm_xflow_macsec_port_control_t,bcm_xflow_macsec_port_info_t *);
extern int bcm_dnx_xflow_macsec_port_info_get(int,bcm_port_t,bcm_xflow_macsec_port_info_t *);
extern int bcm_dnx_xflow_macsec_port_info_set(int,bcm_port_t,bcm_xflow_macsec_port_info_t *);
extern int bcm_dnx_xflow_macsec_port_map_info_get(int,uint32,bcm_gport_t,bcm_xflow_macsec_port_map_info_t *);
extern int bcm_dnx_xflow_macsec_port_rsvd_secure_chan_get(int,uint32,bcm_gport_t,bcm_xflow_macsec_secure_chan_id_t *);
extern int bcm_dnx_xflow_macsec_sectag_etype_get(int,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_sectag_ethertype_t,uint32 *);
extern int bcm_dnx_xflow_macsec_sectag_etype_set(int,int,bcm_xflow_macsec_instance_id_t,uint32,bcm_xflow_macsec_sectag_ethertype_t *);
extern int bcm_dnx_xflow_macsec_secure_assoc_create(int,uint32,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_secure_assoc_info_t *,bcm_xflow_macsec_secure_assoc_id_t *);
extern int bcm_dnx_xflow_macsec_secure_assoc_destroy(int,bcm_xflow_macsec_secure_assoc_id_t);
extern int bcm_dnx_xflow_macsec_secure_assoc_get(int,bcm_xflow_macsec_secure_assoc_id_t,bcm_xflow_macsec_secure_assoc_info_t *,bcm_xflow_macsec_secure_chan_id_t *);
extern int bcm_dnx_xflow_macsec_secure_assoc_set(int,bcm_xflow_macsec_secure_assoc_id_t,bcm_xflow_macsec_secure_assoc_info_t *);
extern int bcm_dnx_xflow_macsec_secure_assoc_traverse(int,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_secure_assoc_traverse_cb,void *);
extern int bcm_dnx_xflow_macsec_secure_chan_create(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_secure_chan_info_t *,int,bcm_xflow_macsec_secure_chan_id_t *);
extern int bcm_dnx_xflow_macsec_secure_chan_destroy(int,bcm_xflow_macsec_secure_chan_id_t);
extern int bcm_dnx_xflow_macsec_secure_chan_enable_get(int,bcm_xflow_macsec_secure_chan_id_t,int *);
extern int bcm_dnx_xflow_macsec_secure_chan_enable_set(int,bcm_xflow_macsec_secure_chan_id_t,int);
extern int bcm_dnx_xflow_macsec_secure_chan_get(int,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_secure_chan_info_t *,int *);
extern int bcm_dnx_xflow_macsec_secure_chan_info_traverse(int,uint32,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_chan_traverse_cb,void *);
extern int bcm_dnx_xflow_macsec_secure_chan_set(int,uint32,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_secure_chan_info_t *,int);
extern int bcm_dnx_xflow_macsec_stat_get(int,uint32,bcm_xflow_macsec_id_t,bcm_xflow_macsec_stat_type_t,uint64 *);
extern int bcm_dnx_xflow_macsec_stat_multi_get(int,uint32,bcm_xflow_macsec_id_t,uint32,bcm_xflow_macsec_stat_type_t *,uint64 *);
extern int bcm_dnx_xflow_macsec_stat_multi_set(int,uint32,bcm_xflow_macsec_id_t,uint32,bcm_xflow_macsec_stat_type_t *,uint64 *);
extern int bcm_dnx_xflow_macsec_stat_set(int,uint32,bcm_xflow_macsec_id_t,bcm_xflow_macsec_stat_type_t,uint64);
extern int bcm_dnx_xflow_macsec_subport_id_get(int,bcm_xflow_macsec_id_t,bcm_xflow_macsec_subport_id_t *);
extern int bcm_dnx_xflow_macsec_svtag_map_get(int,uint32,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_svtag_map_info_t *);
extern int bcm_dnx_xflow_macsec_svtag_map_set(int,uint32,bcm_xflow_macsec_secure_chan_id_t,bcm_xflow_macsec_svtag_map_info_t *);
extern int bcm_dnx_xflow_macsec_vlan_tpid_array_get(int,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_vlan_tpid_t *);
extern int bcm_dnx_xflow_macsec_vlan_tpid_array_index_get(int,bcm_xflow_macsec_instance_id_t,uint32,uint8 *);
extern int bcm_dnx_xflow_macsec_vlan_tpid_array_set(int,bcm_xflow_macsec_instance_id_t,bcm_xflow_macsec_vlan_tpid_t *);

#endif /* BCM_DNX_SUPPORT */
#endif /* !_BCM_INT_DNX_XFLOW_MACSEC_DISPATCH_H */

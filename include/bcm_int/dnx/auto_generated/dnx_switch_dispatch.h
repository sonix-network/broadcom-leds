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
 * File:        dnx_switch_dispatch.h
 * Purpose:     dnx switch driver BCM API dispatch table
 * Generator:   modules_dispatch.py
 */

#ifndef _BCM_INT_DNX_SWITCH_DISPATCH_H
#define _BCM_INT_DNX_SWITCH_DISPATCH_H

#include <bcm/types.h>
#include <bcm_int/dispatch.h>

#ifdef BCM_DNX_SUPPORT

extern int bcm_common_switch_led_control_data_read(int,int,int,uint8 *,int);
extern int bcm_common_switch_led_control_data_write(int,int,int,const uint8 *,int);
extern int bcm_common_switch_led_fw_load(int,int,const uint8 *,int);
extern int bcm_common_switch_led_fw_start_get(int,int,int *);
extern int bcm_common_switch_led_fw_start_set(int,int,int);
extern int bcm_common_switch_led_port_to_uc_port_get(int,int,int *,int *);
extern int bcm_common_switch_led_port_to_uc_port_set(int,int,int,int);
extern int bcm_common_switch_led_uc_num_get(int,int *);
extern int bcm_dnx_switch_control_get(int,bcm_switch_control_t,int *);
extern int bcm_dnx_switch_control_indexed_get(int,bcm_switch_control_key_t,bcm_switch_control_info_t *);
extern int bcm_dnx_switch_control_indexed_port_get(int,bcm_port_t,bcm_switch_control_key_t,bcm_switch_control_info_t *);
extern int bcm_dnx_switch_control_indexed_port_set(int,bcm_port_t,bcm_switch_control_key_t,bcm_switch_control_info_t);
extern int bcm_dnx_switch_control_indexed_set(int,bcm_switch_control_key_t,bcm_switch_control_info_t);
extern int bcm_dnx_switch_control_port_get(int,bcm_port_t,bcm_switch_control_t,int *);
extern int bcm_dnx_switch_control_port_set(int,bcm_port_t,bcm_switch_control_t,int);
extern int bcm_dnx_switch_control_set(int,bcm_switch_control_t,int);
extern int bcm_dnx_switch_dram_init(int,uint32);
extern int bcm_dnx_switch_dram_power_down(int,uint32);
extern int bcm_dnx_switch_dram_power_down_cb_register(int,uint32,bcm_switch_dram_power_down_callback_t,void *);
extern int bcm_dnx_switch_dram_power_down_cb_unregister(int,bcm_switch_dram_power_down_callback_t,void *);
extern int bcm_dnx_switch_dram_traffic_enable_set(int,uint32,uint32);
extern int bcm_dnx_switch_dram_vendor_info_get(int,bcm_switch_dram_vendor_info_t *);
extern int bcm_dnx_switch_encap_create(int,bcm_switch_encap_info_t *,bcm_if_t *);
extern int bcm_dnx_switch_encap_dest_map_add(int,bcm_switch_encap_dest_t *);
extern int bcm_dnx_switch_encap_dest_map_delete(int,bcm_switch_encap_dest_t *);
extern int bcm_dnx_switch_encap_dest_map_get(int,bcm_switch_encap_dest_t *);
extern int bcm_dnx_switch_encap_dest_map_traverse(int,bcm_switch_encap_dest_map_traverse_cb,void *);
extern int bcm_dnx_switch_encap_destroy(int,bcm_if_t);
extern int bcm_dnx_switch_encap_destroy_all(int);
extern int bcm_dnx_switch_encap_get(int,bcm_if_t,bcm_switch_encap_info_t *);
extern int bcm_dnx_switch_encap_set(int,bcm_if_t,bcm_switch_encap_info_t *);
extern int bcm_dnx_switch_encap_traverse(int,bcm_switch_encap_traverse_cb,void *);
extern int bcm_dnx_switch_event_control_get(int,bcm_switch_event_t,bcm_switch_event_control_t,uint32 *);
extern int bcm_dnx_switch_event_control_set(int,bcm_switch_event_t,bcm_switch_event_control_t,uint32);
extern int bcm_dnx_switch_event_register(int,bcm_switch_event_cb_t,void *);
extern int bcm_dnx_switch_event_unregister(int,bcm_switch_event_cb_t,void *);
extern int bcm_dnx_switch_fec_property_get(int,bcm_switch_fec_property_config_t *);
extern int bcm_dnx_switch_gtp_terminator_add(int,bcm_switch_gtp_terminator_t *);
extern int bcm_dnx_switch_gtp_terminator_delete(int,bcm_switch_gtp_terminator_t *);
extern int bcm_dnx_switch_gtp_terminator_get(int,bcm_switch_gtp_terminator_t *);
extern int bcm_dnx_switch_gtp_terminator_traverse(int,bcm_switch_gtp_terminator_additional_info_t *,bcm_switch_gtp_terminator_traverse_cb,void *);
extern int bcm_dnx_switch_hard_reset_cb_register(int,uint32,bcm_switch_hard_reset_callback_t,void *);
extern int bcm_dnx_switch_hard_reset_cb_unregister(int,bcm_switch_hard_reset_callback_t,void *);
extern int bcm_dnx_switch_ipv6_reserved_multicast_addr_get(int,bcm_ip6_t *,bcm_ip6_t *);
extern int bcm_dnx_switch_ipv6_reserved_multicast_addr_set(int,bcm_ip6_t,bcm_ip6_t);
extern int bcm_dnx_switch_kbp_info_get(int,bcm_core_t,bcm_switch_kbp_info_t *);
extern int bcm_dnx_switch_l3_protocol_group_get(int,uint32 *,bcm_l3_protocol_group_id_t *);
extern int bcm_dnx_switch_l3_protocol_group_set(int,uint32,bcm_l3_protocol_group_id_t);
extern int bcm_dnx_switch_lif_hit_get(int,bcm_switch_lif_hit_t *);
extern int bcm_dnx_switch_match_config_add(int,bcm_switch_match_service_t,bcm_switch_match_config_info_t *,int *);
extern int bcm_dnx_switch_match_config_delete(int,bcm_switch_match_service_t,int);
extern int bcm_dnx_switch_match_config_delete_all(int,bcm_switch_match_service_t);
extern int bcm_dnx_switch_match_config_get(int,bcm_switch_match_service_t,int,bcm_switch_match_config_info_t *);
extern int bcm_dnx_switch_match_config_set(int,bcm_switch_match_service_t,int,bcm_switch_match_config_info_t *);
extern int bcm_dnx_switch_match_config_traverse(int,bcm_switch_match_service_t,bcm_switch_match_config_traverse_cb,void *);
extern int bcm_dnx_switch_match_control_get(int,bcm_switch_match_service_t,bcm_switch_match_control_type_t,bcm_gport_t,bcm_switch_match_control_info_t *);
extern int bcm_dnx_switch_match_control_set(int,bcm_switch_match_service_t,bcm_switch_match_control_type_t,bcm_gport_t,bcm_switch_match_control_info_t *);
extern int bcm_dnx_switch_match_control_traverse(int,bcm_switch_match_service_t,bcm_switch_match_control_traverse_cb,void *);
extern int bcm_dnx_switch_network_group_config_get(int,bcm_switch_network_group_t,bcm_switch_network_group_config_t *);
extern int bcm_dnx_switch_network_group_config_set(int,bcm_switch_network_group_t,bcm_switch_network_group_config_t *);
extern int bcm_dnx_switch_obm_classifier_mapping_get(int,bcm_gport_t,bcm_switch_obm_classifier_type_t,bcm_switch_obm_classifier_t *);
extern int bcm_dnx_switch_obm_classifier_mapping_multi_get(int,bcm_gport_t,bcm_switch_obm_classifier_type_t,int,bcm_switch_obm_classifier_t *,int *);
extern int bcm_dnx_switch_obm_classifier_mapping_multi_set(int,bcm_gport_t,bcm_switch_obm_classifier_type_t,int,bcm_switch_obm_classifier_t *);
extern int bcm_dnx_switch_obm_classifier_mapping_set(int,bcm_gport_t,bcm_switch_obm_classifier_type_t,bcm_switch_obm_classifier_t *);
extern int bcm_dnx_switch_olp_l2_addr_add(int,uint32,bcm_switch_olp_l2_addr_t *);
extern int bcm_dnx_switch_olp_l2_addr_delete(int,bcm_switch_olp_l2_addr_t *);
extern int bcm_dnx_switch_olp_l2_addr_delete_all(int);
extern int bcm_dnx_switch_olp_l2_addr_get(int,bcm_switch_olp_l2_addr_t *);
extern int bcm_dnx_switch_olp_l2_addr_traverse(int,bcm_switch_olp_l2_addr_traverse_cb,void *);
extern int bcm_dnx_switch_outlif_profile_group_create(int,uint32,int *,bcm_switch_outlif_profile_group_t *);
extern int bcm_dnx_switch_outlif_profile_group_destroy(int,int);
extern int bcm_dnx_switch_outlif_profile_group_get(int,uint32,int,bcm_switch_outlif_profile_group_t *);
extern int bcm_dnx_switch_reflector_create(int,uint32,bcm_if_t *,bcm_switch_reflector_data_t *);
extern int bcm_dnx_switch_reflector_destroy(int,uint32,bcm_if_t);
extern int bcm_dnx_switch_reflector_get(int,uint32,bcm_if_t,bcm_switch_reflector_data_t *);
extern int bcm_dnx_switch_reflector_traverse(int,uint32,bcm_switch_reflector_traverse_cb,void *);
extern int bcm_dnx_switch_resource_utilization_get(int,bcm_switch_resource_utilization_query_t *,bcm_switch_resource_utilization_t *);
extern int bcm_dnx_switch_rov_get(int,uint32,uint32 *);
extern int bcm_dnx_switch_stable_register(int,bcm_switch_read_func_t,bcm_switch_write_func_t);
extern int bcm_dnx_switch_svtag_egress_entry_add(int,uint32,bcm_gport_t,bcm_switch_svtag_egress_info_t *);
extern int bcm_dnx_switch_svtag_egress_entry_delete(int,uint32,bcm_gport_t);
extern int bcm_dnx_switch_svtag_egress_entry_get(int,uint32,bcm_gport_t,bcm_switch_svtag_egress_info_t *);
extern int bcm_dnx_switch_svtag_egress_entry_traverse(int,uint32,bcm_switch_svtag_egress_traverse_cb,void *);
extern int bcm_dnx_switch_svtag_encapsulation_add(int,bcm_switch_svtag_encapsulation_lookup_info_t *,bcm_switch_svtag_egress_info_t *);
extern int bcm_dnx_switch_svtag_encapsulation_delete(int,bcm_switch_svtag_encapsulation_lookup_info_t *);
extern int bcm_dnx_switch_svtag_encapsulation_get(int,bcm_switch_svtag_encapsulation_lookup_info_t *,bcm_switch_svtag_egress_info_t *);
extern int bcm_dnx_switch_svtag_encapsulation_traverse(int,uint32,bcm_switch_svtag_encapsulation_traverse_cb,void *);
extern int bcm_dnx_switch_temperature_monitor_get(int,int,bcm_switch_temperature_monitor_t *,int *);
extern int bcm_dnx_switch_thermo_sensor_read(int,bcm_switch_thermo_sensor_type_t,int,bcm_switch_thermo_sensor_t *);
extern int bcm_dnx_switch_tpid_add(int,uint32,bcm_switch_tpid_info_t *);
extern int bcm_dnx_switch_tpid_delete(int,bcm_switch_tpid_info_t *);
extern int bcm_dnx_switch_tpid_delete_all(int);
extern int bcm_dnx_switch_tpid_get_all(int,int,bcm_switch_tpid_info_t *,int *);
extern int bcm_dnx_switch_wide_data_extension_add(int,uint32,bcm_switch_wide_data_extension_info_t *);
extern int bcm_dnx_switch_wide_data_extension_delete(int,uint32,bcm_switch_wide_data_extension_info_t *);
extern int bcm_dnx_switch_wide_data_extension_get(int,uint32,bcm_switch_wide_data_extension_info_t *);
extern int bcm_dnx_switch_wide_data_extension_traverse(int,bcm_switch_wide_data_extension_traverse_cb,void *);

#endif /* BCM_DNX_SUPPORT */
#endif /* !_BCM_INT_DNX_SWITCH_DISPATCH_H */

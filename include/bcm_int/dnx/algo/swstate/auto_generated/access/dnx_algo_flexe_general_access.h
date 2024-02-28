/** \file algo/swstate/auto_generated/access/dnx_algo_flexe_general_access.h
 *
 * sw state functions declarations
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_ALGO_FLEXE_GENERAL_ACCESS_H__
#define __DNX_ALGO_FLEXE_GENERAL_ACCESS_H__

#ifdef BCM_DNX_SUPPORT
#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_algo_flexe_general_types.h>
#include <bcm/port.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_nif.h>
#include <soc/dnxc/swstate/types/sw_state_mutex.h>
#include <soc/dnxc/swstate/types/sw_state_pbmp.h>
/*
 * TYPEDEFs
 */

typedef int (*dnx_algo_flexe_general_db_is_init_cb)(
    int unit, uint8 *is_init);

typedef int (*dnx_algo_flexe_general_db_init_cb)(
    int unit);

typedef int (*dnx_algo_flexe_general_db_fifo_link_list_set_cb)(
    int unit, uint32 fifo_link_list_idx_0, uint32 fifo_link_list_idx_1, int fifo_link_list);

typedef int (*dnx_algo_flexe_general_db_fifo_link_list_get_cb)(
    int unit, uint32 fifo_link_list_idx_0, uint32 fifo_link_list_idx_1, int *fifo_link_list);

typedef int (*dnx_algo_flexe_general_db_fifo_link_list_alloc_cb)(
    int unit, uint32 fifo_link_list_idx_0, uint32 nof_instances_to_alloc_1);

typedef int (*dnx_algo_flexe_general_db_group_info_set_cb)(
    int unit, uint32 group_info_idx_0, CONST dnx_algo_flexe_general_group_info_t *group_info);

typedef int (*dnx_algo_flexe_general_db_group_info_get_cb)(
    int unit, uint32 group_info_idx_0, dnx_algo_flexe_general_group_info_t *group_info);

typedef int (*dnx_algo_flexe_general_db_group_info_alloc_cb)(
    int unit);

typedef int (*dnx_algo_flexe_general_db_group_info_valid_set_cb)(
    int unit, uint32 group_info_idx_0, int valid);

typedef int (*dnx_algo_flexe_general_db_group_info_valid_get_cb)(
    int unit, uint32 group_info_idx_0, int *valid);

typedef int (*dnx_algo_flexe_general_db_group_info_group_id_set_cb)(
    int unit, uint32 group_info_idx_0, int group_id);

typedef int (*dnx_algo_flexe_general_db_group_info_group_id_get_cb)(
    int unit, uint32 group_info_idx_0, int *group_id);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_set_cb)(
    int unit, uint32 group_info_idx_0, bcm_pbmp_t phy_ports);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_get_cb)(
    int unit, uint32 group_info_idx_0, bcm_pbmp_t *phy_ports);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_neq_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp, uint8 *result);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_eq_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp, uint8 *result);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_member_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port, uint8 *result);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_not_null_cb)(
    int unit, uint32 group_info_idx_0, uint8 *result);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_is_null_cb)(
    int unit, uint32 group_info_idx_0, uint8 *result);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_count_cb)(
    int unit, uint32 group_info_idx_0, int *result);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_xor_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_remove_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_assign_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_get_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t *output_pbmp);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_and_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_negate_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_or_cb)(
    int unit, uint32 group_info_idx_0, _shr_pbmp_t input_pbmp);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_clear_cb)(
    int unit, uint32 group_info_idx_0);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_add_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_flip_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_remove_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_set_cb)(
    int unit, uint32 group_info_idx_0, uint32 _input_port);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_ports_range_add_cb)(
    int unit, uint32 group_info_idx_0, uint32 _first_port, uint32 _range);

typedef int (*dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_fmt_cb)(
    int unit, uint32 group_info_idx_0, char* _buffer);

typedef int (*dnx_algo_flexe_general_db_group_info_is_bypass_set_cb)(
    int unit, uint32 group_info_idx_0, int is_bypass);

typedef int (*dnx_algo_flexe_general_db_group_info_is_bypass_get_cb)(
    int unit, uint32 group_info_idx_0, int *is_bypass);

typedef int (*dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_set_cb)(
    int unit, uint32 group_info_idx_0, uint8 cal_slots_unaligned);

typedef int (*dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_get_cb)(
    int unit, uint32 group_info_idx_0, uint8 *cal_slots_unaligned);

typedef int (*dnx_algo_flexe_general_db_group_info_slot_mode_set_cb)(
    int unit, uint32 group_info_idx_0, bcm_port_flexe_phy_slot_mode_t slot_mode);

typedef int (*dnx_algo_flexe_general_db_group_info_slot_mode_get_cb)(
    int unit, uint32 group_info_idx_0, bcm_port_flexe_phy_slot_mode_t *slot_mode);

typedef int (*dnx_algo_flexe_general_db_group_info_demux_ghao_action_set_cb)(
    int unit, uint32 group_info_idx_0, bcm_port_flexe_group_ghao_action_t demux_ghao_action);

typedef int (*dnx_algo_flexe_general_db_group_info_demux_ghao_action_get_cb)(
    int unit, uint32 group_info_idx_0, bcm_port_flexe_group_ghao_action_t *demux_ghao_action);

typedef int (*dnx_algo_flexe_general_db_group_info_mux_ghao_action_set_cb)(
    int unit, uint32 group_info_idx_0, bcm_port_flexe_group_ghao_action_t mux_ghao_action);

typedef int (*dnx_algo_flexe_general_db_group_info_mux_ghao_action_get_cb)(
    int unit, uint32 group_info_idx_0, bcm_port_flexe_group_ghao_action_t *mux_ghao_action);

typedef int (*dnx_algo_flexe_general_db_group_info_demux_active_cal_set_cb)(
    int unit, uint32 group_info_idx_0, bcm_port_flexe_group_cal_t demux_active_cal);

typedef int (*dnx_algo_flexe_general_db_group_info_demux_active_cal_get_cb)(
    int unit, uint32 group_info_idx_0, bcm_port_flexe_group_cal_t *demux_active_cal);

typedef int (*dnx_algo_flexe_general_db_demux_slot_info_alloc_cb)(
    int unit);

typedef int (*dnx_algo_flexe_general_db_demux_slot_info_cal_slots_set_cb)(
    int unit, uint32 demux_slot_info_idx_0, uint32 cal_slots_idx_0, uint32 cal_slots_idx_1, uint16 cal_slots);

typedef int (*dnx_algo_flexe_general_db_demux_slot_info_cal_slots_get_cb)(
    int unit, uint32 demux_slot_info_idx_0, uint32 cal_slots_idx_0, uint32 cal_slots_idx_1, uint16 *cal_slots);

typedef int (*dnx_algo_flexe_general_db_demux_slot_info_cal_slots_alloc_cb)(
    int unit, uint32 demux_slot_info_idx_0, uint32 cal_slots_idx_0);

typedef int (*dnx_algo_flexe_general_db_mux_slot_info_alloc_cb)(
    int unit);

typedef int (*dnx_algo_flexe_general_db_mux_slot_info_cal_slots_set_cb)(
    int unit, uint32 mux_slot_info_idx_0, uint32 cal_slots_idx_0, uint32 cal_slots_idx_1, uint16 cal_slots);

typedef int (*dnx_algo_flexe_general_db_mux_slot_info_cal_slots_get_cb)(
    int unit, uint32 mux_slot_info_idx_0, uint32 cal_slots_idx_0, uint32 cal_slots_idx_1, uint16 *cal_slots);

typedef int (*dnx_algo_flexe_general_db_mux_slot_info_cal_slots_alloc_cb)(
    int unit, uint32 mux_slot_info_idx_0, uint32 cal_slots_idx_0);

typedef int (*dnx_algo_flexe_general_db_tiny_mac_access_mutex_create_cb)(
    int unit);

typedef int (*dnx_algo_flexe_general_db_tiny_mac_access_mutex_is_created_cb)(
    int unit, uint8 *is_created);

typedef int (*dnx_algo_flexe_general_db_tiny_mac_access_mutex_take_cb)(
    int unit, int usec);

typedef int (*dnx_algo_flexe_general_db_tiny_mac_access_mutex_give_cb)(
    int unit);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_set_cb)(
    int unit, dnx_algo_res_t client_channel);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_get_cb)(
    int unit, dnx_algo_res_t *client_channel);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_client_channel_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_set_cb)(
    int unit, dnx_algo_res_t virtual_client_channel);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_get_cb)(
    int unit, dnx_algo_res_t *virtual_client_channel);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac1_set_cb)(
    int unit, dnx_algo_res_t mac1);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac1_get_cb)(
    int unit, dnx_algo_res_t *mac1);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac1_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac1_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac1_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac1_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac1_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac2_set_cb)(
    int unit, dnx_algo_res_t mac2);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac2_get_cb)(
    int unit, dnx_algo_res_t *mac2);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac2_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac2_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac2_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac2_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac2_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_set_cb)(
    int unit, dnx_algo_res_t mac_channel);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_get_cb)(
    int unit, dnx_algo_res_t *mac_channel);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_mac_channel_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_set_cb)(
    int unit, dnx_algo_res_t sar_channel);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_get_cb)(
    int unit, dnx_algo_res_t *sar_channel);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_sar_channel_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_set_cb)(
    int unit, dnx_algo_res_t flexe_core_port);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_get_cb)(
    int unit, dnx_algo_res_t *flexe_core_port);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_allocate_several_cb)(
    int unit, uint32 flags, uint32 nof_elements, void *extra_arguments, int *element);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_free_several_cb)(
    int unit, uint32 nof_elements, int element, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_set_cb)(
    int unit, dnx_algo_res_t rmc_id);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_get_cb)(
    int unit, dnx_algo_res_t *rmc_id);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_algo_flexe_general_db_resource_alloc_rmc_id_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_algo_flexe_general_db_flexe_core_is_active_set_cb)(
    int unit, uint8 flexe_core_is_active);

typedef int (*dnx_algo_flexe_general_db_flexe_core_is_active_get_cb)(
    int unit, uint8 *flexe_core_is_active);

typedef int (*dnx_algo_flexe_general_db_mgmt_channel_info_set_cb)(
    int unit, uint32 mgmt_channel_info_idx_0, CONST dnx_algo_flexe_general_mgmt_channel_info_t *mgmt_channel_info);

typedef int (*dnx_algo_flexe_general_db_mgmt_channel_info_get_cb)(
    int unit, uint32 mgmt_channel_info_idx_0, dnx_algo_flexe_general_mgmt_channel_info_t *mgmt_channel_info);

typedef int (*dnx_algo_flexe_general_db_mgmt_channel_info_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

typedef int (*dnx_algo_flexe_general_db_mgmt_channel_info_valid_set_cb)(
    int unit, uint32 mgmt_channel_info_idx_0, int valid);

typedef int (*dnx_algo_flexe_general_db_mgmt_channel_info_valid_get_cb)(
    int unit, uint32 mgmt_channel_info_idx_0, int *valid);

/*
 * STRUCTs
 */

typedef struct {
    dnx_algo_flexe_general_db_fifo_link_list_set_cb set;
    dnx_algo_flexe_general_db_fifo_link_list_get_cb get;
    dnx_algo_flexe_general_db_fifo_link_list_alloc_cb alloc;
} dnx_algo_flexe_general_db_fifo_link_list_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_valid_set_cb set;
    dnx_algo_flexe_general_db_group_info_valid_get_cb get;
} dnx_algo_flexe_general_db_group_info_valid_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_group_id_set_cb set;
    dnx_algo_flexe_general_db_group_info_group_id_get_cb get;
} dnx_algo_flexe_general_db_group_info_group_id_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_phy_ports_set_cb set;
    dnx_algo_flexe_general_db_group_info_phy_ports_get_cb get;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_neq_cb pbmp_neq;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_eq_cb pbmp_eq;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_member_cb pbmp_member;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_not_null_cb pbmp_not_null;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_is_null_cb pbmp_is_null;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_count_cb pbmp_count;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_xor_cb pbmp_xor;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_remove_cb pbmp_remove;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_assign_cb pbmp_assign;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_get_cb pbmp_get;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_and_cb pbmp_and;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_negate_cb pbmp_negate;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_or_cb pbmp_or;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_clear_cb pbmp_clear;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_add_cb pbmp_port_add;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_flip_cb pbmp_port_flip;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_remove_cb pbmp_port_remove;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_port_set_cb pbmp_port_set;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_ports_range_add_cb pbmp_ports_range_add;
    dnx_algo_flexe_general_db_group_info_phy_ports_pbmp_fmt_cb pbmp_fmt;
} dnx_algo_flexe_general_db_group_info_phy_ports_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_is_bypass_set_cb set;
    dnx_algo_flexe_general_db_group_info_is_bypass_get_cb get;
} dnx_algo_flexe_general_db_group_info_is_bypass_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_set_cb set;
    dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_get_cb get;
} dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_slot_mode_set_cb set;
    dnx_algo_flexe_general_db_group_info_slot_mode_get_cb get;
} dnx_algo_flexe_general_db_group_info_slot_mode_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_demux_ghao_action_set_cb set;
    dnx_algo_flexe_general_db_group_info_demux_ghao_action_get_cb get;
} dnx_algo_flexe_general_db_group_info_demux_ghao_action_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_mux_ghao_action_set_cb set;
    dnx_algo_flexe_general_db_group_info_mux_ghao_action_get_cb get;
} dnx_algo_flexe_general_db_group_info_mux_ghao_action_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_demux_active_cal_set_cb set;
    dnx_algo_flexe_general_db_group_info_demux_active_cal_get_cb get;
} dnx_algo_flexe_general_db_group_info_demux_active_cal_cbs;

typedef struct {
    dnx_algo_flexe_general_db_group_info_set_cb set;
    dnx_algo_flexe_general_db_group_info_get_cb get;
    dnx_algo_flexe_general_db_group_info_alloc_cb alloc;
    dnx_algo_flexe_general_db_group_info_valid_cbs valid;
    dnx_algo_flexe_general_db_group_info_group_id_cbs group_id;
    dnx_algo_flexe_general_db_group_info_phy_ports_cbs phy_ports;
    dnx_algo_flexe_general_db_group_info_is_bypass_cbs is_bypass;
    dnx_algo_flexe_general_db_group_info_cal_slots_unaligned_cbs cal_slots_unaligned;
    dnx_algo_flexe_general_db_group_info_slot_mode_cbs slot_mode;
    dnx_algo_flexe_general_db_group_info_demux_ghao_action_cbs demux_ghao_action;
    dnx_algo_flexe_general_db_group_info_mux_ghao_action_cbs mux_ghao_action;
    dnx_algo_flexe_general_db_group_info_demux_active_cal_cbs demux_active_cal;
} dnx_algo_flexe_general_db_group_info_cbs;

typedef struct {
    dnx_algo_flexe_general_db_demux_slot_info_cal_slots_set_cb set;
    dnx_algo_flexe_general_db_demux_slot_info_cal_slots_get_cb get;
    dnx_algo_flexe_general_db_demux_slot_info_cal_slots_alloc_cb alloc;
} dnx_algo_flexe_general_db_demux_slot_info_cal_slots_cbs;

typedef struct {
    dnx_algo_flexe_general_db_demux_slot_info_alloc_cb alloc;
    dnx_algo_flexe_general_db_demux_slot_info_cal_slots_cbs cal_slots;
} dnx_algo_flexe_general_db_demux_slot_info_cbs;

typedef struct {
    dnx_algo_flexe_general_db_mux_slot_info_cal_slots_set_cb set;
    dnx_algo_flexe_general_db_mux_slot_info_cal_slots_get_cb get;
    dnx_algo_flexe_general_db_mux_slot_info_cal_slots_alloc_cb alloc;
} dnx_algo_flexe_general_db_mux_slot_info_cal_slots_cbs;

typedef struct {
    dnx_algo_flexe_general_db_mux_slot_info_alloc_cb alloc;
    dnx_algo_flexe_general_db_mux_slot_info_cal_slots_cbs cal_slots;
} dnx_algo_flexe_general_db_mux_slot_info_cbs;

typedef struct {
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_create_cb create;
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_is_created_cb is_created;
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_take_cb take;
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_give_cb give;
} dnx_algo_flexe_general_db_tiny_mac_access_mutex_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_client_channel_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_client_channel_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_client_channel_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_mac1_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_mac1_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_mac1_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_mac1_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_mac1_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_mac1_is_allocated_cb is_allocated;
    dnx_algo_flexe_general_db_resource_alloc_mac1_nof_free_elements_get_cb nof_free_elements_get;
} dnx_algo_flexe_general_db_resource_alloc_mac1_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_mac2_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_mac2_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_mac2_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_mac2_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_mac2_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_mac2_is_allocated_cb is_allocated;
    dnx_algo_flexe_general_db_resource_alloc_mac2_nof_free_elements_get_cb nof_free_elements_get;
} dnx_algo_flexe_general_db_resource_alloc_mac2_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_mac_channel_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_sar_channel_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_allocate_several_cb allocate_several;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_free_several_cb free_several;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_set_cb set;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_get_cb get;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_create_cb create;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_allocate_single_cb allocate_single;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_free_single_cb free_single;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_is_allocated_cb is_allocated;
} dnx_algo_flexe_general_db_resource_alloc_rmc_id_cbs;

typedef struct {
    dnx_algo_flexe_general_db_resource_alloc_client_channel_cbs client_channel;
    dnx_algo_flexe_general_db_resource_alloc_virtual_client_channel_cbs virtual_client_channel;
    dnx_algo_flexe_general_db_resource_alloc_mac1_cbs mac1;
    dnx_algo_flexe_general_db_resource_alloc_mac2_cbs mac2;
    dnx_algo_flexe_general_db_resource_alloc_mac_channel_cbs mac_channel;
    dnx_algo_flexe_general_db_resource_alloc_sar_channel_cbs sar_channel;
    dnx_algo_flexe_general_db_resource_alloc_flexe_core_port_cbs flexe_core_port;
    dnx_algo_flexe_general_db_resource_alloc_rmc_id_cbs rmc_id;
} dnx_algo_flexe_general_db_resource_alloc_cbs;

typedef struct {
    dnx_algo_flexe_general_db_flexe_core_is_active_set_cb set;
    dnx_algo_flexe_general_db_flexe_core_is_active_get_cb get;
} dnx_algo_flexe_general_db_flexe_core_is_active_cbs;

typedef struct {
    dnx_algo_flexe_general_db_mgmt_channel_info_valid_set_cb set;
    dnx_algo_flexe_general_db_mgmt_channel_info_valid_get_cb get;
} dnx_algo_flexe_general_db_mgmt_channel_info_valid_cbs;

typedef struct {
    dnx_algo_flexe_general_db_mgmt_channel_info_set_cb set;
    dnx_algo_flexe_general_db_mgmt_channel_info_get_cb get;
    dnx_algo_flexe_general_db_mgmt_channel_info_alloc_cb alloc;
    dnx_algo_flexe_general_db_mgmt_channel_info_valid_cbs valid;
} dnx_algo_flexe_general_db_mgmt_channel_info_cbs;

typedef struct {
    dnx_algo_flexe_general_db_is_init_cb is_init;
    dnx_algo_flexe_general_db_init_cb init;
    dnx_algo_flexe_general_db_fifo_link_list_cbs fifo_link_list;
    dnx_algo_flexe_general_db_group_info_cbs group_info;
    dnx_algo_flexe_general_db_demux_slot_info_cbs demux_slot_info;
    dnx_algo_flexe_general_db_mux_slot_info_cbs mux_slot_info;
    dnx_algo_flexe_general_db_tiny_mac_access_mutex_cbs tiny_mac_access_mutex;
    dnx_algo_flexe_general_db_resource_alloc_cbs resource_alloc;
    dnx_algo_flexe_general_db_flexe_core_is_active_cbs flexe_core_is_active;
    dnx_algo_flexe_general_db_mgmt_channel_info_cbs mgmt_channel_info;
} dnx_algo_flexe_general_db_cbs;

/*
 * Global Variables
 */

/*
 * FUNCTIONs
 */

/*
 *
 * get_name function for enum type dnx_algo_flexe_link_list_fifo_type_e
 * AUTO-GENERATED - DO NOT MODIFY
 *
 */
const char *
dnx_algo_flexe_link_list_fifo_type_e_get_name(dnx_algo_flexe_link_list_fifo_type_e value);
/*
 * Global Variables
 */

extern dnx_algo_flexe_general_db_cbs dnx_algo_flexe_general_db;
#endif /* BCM_DNX_SUPPORT*/ 

#endif /* __DNX_ALGO_FLEXE_GENERAL_ACCESS_H__ */

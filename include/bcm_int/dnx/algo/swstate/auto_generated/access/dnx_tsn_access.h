/** \file algo/swstate/auto_generated/access/dnx_tsn_access.h
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

#ifndef __DNX_TSN_ACCESS_H__
#define __DNX_TSN_ACCESS_H__

#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_tsn_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <include/bcm/cosq.h>
#include <include/bcm/tsn.h>
#include <include/shared/shr_thread_manager.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_tsn.h>
#include <soc/dnxc/swstate/callbacks/sw_state_ll_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#include <soc/dnxc/swstate/types/sw_state_linked_list.h>
#include <soc/dnxc/swstate/types/sw_state_mutex.h>
/*
 * TYPEDEFs
 */

typedef int (*dnx_tsn_db_is_init_cb)(
    int unit, uint8 *is_init);

typedef int (*dnx_tsn_db_init_cb)(
    int unit);

typedef int (*dnx_tsn_db_taf_gate_alloc_set_cb)(
    int unit, dnx_algo_res_t gate_alloc);

typedef int (*dnx_tsn_db_taf_gate_alloc_get_cb)(
    int unit, dnx_algo_res_t *gate_alloc);

typedef int (*dnx_tsn_db_taf_gate_alloc_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_tsn_db_taf_gate_alloc_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_tsn_db_taf_gate_alloc_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_tsn_db_taf_gate_alloc_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_tsn_db_taf_gate_alloc_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

typedef int (*dnx_tsn_db_taf_gate_alloc_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

typedef int (*dnx_tsn_db_taf_pid_alloc_set_cb)(
    int unit, dnx_algo_res_t pid_alloc);

typedef int (*dnx_tsn_db_taf_pid_alloc_get_cb)(
    int unit, dnx_algo_res_t *pid_alloc);

typedef int (*dnx_tsn_db_taf_pid_alloc_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_tsn_db_taf_pid_alloc_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_tsn_db_taf_pid_alloc_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*dnx_tsn_db_taf_pid_alloc_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*dnx_tsn_db_taf_pid_alloc_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

typedef int (*dnx_tsn_db_taf_pid_alloc_nof_allocated_elements_in_range_get_cb)(
    int unit, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

typedef int (*dnx_tsn_db_taf_taf_profiles_data_alloc_cb)(
    int unit);

typedef int (*dnx_tsn_db_taf_taf_profiles_data_profile_state_set_cb)(
    int unit, uint32 taf_profiles_data_idx_0, dnx_tsn_profile_state_e profile_state);

typedef int (*dnx_tsn_db_taf_taf_profiles_data_profile_state_get_cb)(
    int unit, uint32 taf_profiles_data_idx_0, dnx_tsn_profile_state_e *profile_state);

typedef int (*dnx_tsn_db_taf_taf_profiles_data_profile_data_set_cb)(
    int unit, uint32 taf_profiles_data_idx_0, CONST bcm_tsn_taf_profile_t *profile_data);

typedef int (*dnx_tsn_db_taf_taf_profiles_data_profile_data_get_cb)(
    int unit, uint32 taf_profiles_data_idx_0, CONST bcm_tsn_taf_profile_t **profile_data);

typedef int (*dnx_tsn_db_taf_taf_profiles_data_config_change_time_set_cb)(
    int unit, uint32 taf_profiles_data_idx_0, bcm_ptp_timestamp_t config_change_time);

typedef int (*dnx_tsn_db_taf_taf_profiles_data_config_change_time_get_cb)(
    int unit, uint32 taf_profiles_data_idx_0, bcm_ptp_timestamp_t *config_change_time);

typedef int (*dnx_tsn_db_tas_gate_alloc_set_cb)(
    int unit, uint32 gate_alloc_idx_0, dnx_algo_res_t gate_alloc);

typedef int (*dnx_tsn_db_tas_gate_alloc_get_cb)(
    int unit, uint32 gate_alloc_idx_0, dnx_algo_res_t *gate_alloc);

typedef int (*dnx_tsn_db_tas_gate_alloc_alloc_cb)(
    int unit);

typedef int (*dnx_tsn_db_tas_gate_alloc_create_cb)(
    int unit, uint32 gate_alloc_idx_0, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_tsn_db_tas_gate_alloc_allocate_single_cb)(
    int unit, uint32 gate_alloc_idx_0, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_tsn_db_tas_gate_alloc_free_single_cb)(
    int unit, uint32 gate_alloc_idx_0, int element, void *extra_arguments);

typedef int (*dnx_tsn_db_tas_gate_alloc_is_allocated_cb)(
    int unit, uint32 gate_alloc_idx_0, int element, uint8 *is_allocated);

typedef int (*dnx_tsn_db_tas_gate_alloc_nof_free_elements_get_cb)(
    int unit, uint32 gate_alloc_idx_0, int *nof_free_elements);

typedef int (*dnx_tsn_db_tas_pid_alloc_set_cb)(
    int unit, uint32 pid_alloc_idx_0, dnx_algo_res_t pid_alloc);

typedef int (*dnx_tsn_db_tas_pid_alloc_get_cb)(
    int unit, uint32 pid_alloc_idx_0, dnx_algo_res_t *pid_alloc);

typedef int (*dnx_tsn_db_tas_pid_alloc_alloc_cb)(
    int unit);

typedef int (*dnx_tsn_db_tas_pid_alloc_create_cb)(
    int unit, uint32 pid_alloc_idx_0, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_tsn_db_tas_pid_alloc_allocate_single_cb)(
    int unit, uint32 pid_alloc_idx_0, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_tsn_db_tas_pid_alloc_free_single_cb)(
    int unit, uint32 pid_alloc_idx_0, int element, void *extra_arguments);

typedef int (*dnx_tsn_db_tas_pid_alloc_is_allocated_cb)(
    int unit, uint32 pid_alloc_idx_0, int element, uint8 *is_allocated);

typedef int (*dnx_tsn_db_tas_pid_alloc_nof_free_elements_get_cb)(
    int unit, uint32 pid_alloc_idx_0, int *nof_free_elements);

typedef int (*dnx_tsn_db_tas_pid_alloc_nof_allocated_elements_in_range_get_cb)(
    int unit, uint32 pid_alloc_idx_0, int range_start, int nof_elements_in_range, int *nof_allocated_elements);

typedef int (*dnx_tsn_db_tas_egq_if_to_gate_mapping_set_cb)(
    int unit, uint32 egq_if_to_gate_mapping_idx_0, uint32 egq_if_to_gate_mapping_idx_1, int egq_if_to_gate_mapping);

typedef int (*dnx_tsn_db_tas_egq_if_to_gate_mapping_get_cb)(
    int unit, uint32 egq_if_to_gate_mapping_idx_0, uint32 egq_if_to_gate_mapping_idx_1, int *egq_if_to_gate_mapping);

typedef int (*dnx_tsn_db_tas_egq_if_to_gate_mapping_alloc_cb)(
    int unit);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_alloc_cb)(
    int unit);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_profile_state_set_cb)(
    int unit, uint32 tas_profiles_data_idx_0, uint32 tas_profiles_data_idx_1, dnx_tsn_profile_state_e profile_state);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_profile_state_get_cb)(
    int unit, uint32 tas_profiles_data_idx_0, uint32 tas_profiles_data_idx_1, dnx_tsn_profile_state_e *profile_state);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_profile_data_set_cb)(
    int unit, uint32 tas_profiles_data_idx_0, uint32 tas_profiles_data_idx_1, CONST bcm_cosq_tas_profile_t *profile_data);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_profile_data_get_cb)(
    int unit, uint32 tas_profiles_data_idx_0, uint32 tas_profiles_data_idx_1, CONST bcm_cosq_tas_profile_t **profile_data);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_config_change_time_set_cb)(
    int unit, uint32 tas_profiles_data_idx_0, uint32 tas_profiles_data_idx_1, bcm_ptp_timestamp_t config_change_time);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_config_change_time_get_cb)(
    int unit, uint32 tas_profiles_data_idx_0, uint32 tas_profiles_data_idx_1, bcm_ptp_timestamp_t *config_change_time);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_port_set_cb)(
    int unit, uint32 tas_profiles_data_idx_0, uint32 tas_profiles_data_idx_1, bcm_port_t port);

typedef int (*dnx_tsn_db_tas_tas_profiles_data_port_get_cb)(
    int unit, uint32 tas_profiles_data_idx_0, uint32 tas_profiles_data_idx_1, bcm_port_t *port);

typedef int (*dnx_tsn_db_cqf_gate_alloc_set_cb)(
    int unit, uint32 gate_alloc_idx_0, dnx_algo_res_t gate_alloc);

typedef int (*dnx_tsn_db_cqf_gate_alloc_get_cb)(
    int unit, uint32 gate_alloc_idx_0, dnx_algo_res_t *gate_alloc);

typedef int (*dnx_tsn_db_cqf_gate_alloc_alloc_cb)(
    int unit);

typedef int (*dnx_tsn_db_cqf_gate_alloc_create_cb)(
    int unit, uint32 gate_alloc_idx_0, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_tsn_db_cqf_gate_alloc_allocate_single_cb)(
    int unit, uint32 gate_alloc_idx_0, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_tsn_db_cqf_gate_alloc_free_single_cb)(
    int unit, uint32 gate_alloc_idx_0, int element, void *extra_arguments);

typedef int (*dnx_tsn_db_cqf_gate_alloc_is_allocated_cb)(
    int unit, uint32 gate_alloc_idx_0, int element, uint8 *is_allocated);

typedef int (*dnx_tsn_db_cqf_gate_alloc_nof_free_elements_get_cb)(
    int unit, uint32 gate_alloc_idx_0, int *nof_free_elements);

typedef int (*dnx_tsn_db_cqf_tsn_egr_if_to_gate_mapping_set_cb)(
    int unit, uint32 tsn_egr_if_to_gate_mapping_idx_0, uint32 tsn_egr_if_to_gate_mapping_idx_1, int tsn_egr_if_to_gate_mapping);

typedef int (*dnx_tsn_db_cqf_tsn_egr_if_to_gate_mapping_get_cb)(
    int unit, uint32 tsn_egr_if_to_gate_mapping_idx_0, uint32 tsn_egr_if_to_gate_mapping_idx_1, int *tsn_egr_if_to_gate_mapping);

typedef int (*dnx_tsn_db_cqf_tsn_egr_if_to_gate_mapping_alloc_cb)(
    int unit);

typedef int (*dnx_tsn_db_cqf_ptp_base_time_set_cb)(
    int unit, uint32 ptp_base_time_idx_0, uint32 ptp_base_time_idx_1, bcm_ptp_timestamp_t ptp_base_time);

typedef int (*dnx_tsn_db_cqf_ptp_base_time_get_cb)(
    int unit, uint32 ptp_base_time_idx_0, uint32 ptp_base_time_idx_1, bcm_ptp_timestamp_t *ptp_base_time);

typedef int (*dnx_tsn_db_cqf_ptp_base_time_alloc_cb)(
    int unit);

typedef int (*dnx_tsn_db_tsn_thread_tsn_thread_handler_set_cb)(
    int unit, shr_thread_manager_handler_t tsn_thread_handler);

typedef int (*dnx_tsn_db_tsn_thread_tsn_thread_handler_get_cb)(
    int unit, shr_thread_manager_handler_t *tsn_thread_handler);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_create_empty_cb)(
    int unit, sw_state_ll_init_info_t *init_info);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_nof_elements_cb)(
    int unit, uint32 *nof_elements);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_node_value_cb)(
    int unit, sw_state_ll_node_t node, dnx_tsn_thread_pending_pid_t *value);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_node_update_cb)(
    int unit, sw_state_ll_node_t node, const dnx_tsn_thread_pending_pid_t *value);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_next_node_cb)(
    int unit, sw_state_ll_node_t node, sw_state_ll_node_t *next_node);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_previous_node_cb)(
    int unit, sw_state_ll_node_t node, sw_state_ll_node_t *prev_node);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_remove_node_cb)(
    int unit, sw_state_ll_node_t node);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_get_last_cb)(
    int unit, sw_state_ll_node_t *node);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_get_first_cb)(
    int unit, sw_state_ll_node_t *node);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_print_cb)(
    int unit);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_add_cb)(
    int unit, const uint64 *key, const dnx_tsn_thread_pending_pid_t *value);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_node_key_cb)(
    int unit, sw_state_ll_node_t node, uint64 *key);

typedef int (*dnx_tsn_db_tsn_thread_pending_list_find_cb)(
    int unit, sw_state_ll_node_t *node, const uint64 *key, uint8 *found);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_get_cb)(
    int unit, CONST SHR_BITDCL **taf_gates_to_reset);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_alloc_bitmap_cb)(
    int unit);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_set_cb)(
    int unit, uint32 _bit_num);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_clear_cb)(
    int unit, uint32 _bit_num);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_get_cb)(
    int unit, uint32 _bit_num, uint8* result);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_read_cb)(
    int unit, uint32 sw_state_bmp_first, uint32 result_first, uint32 _range, SHR_BITDCL *result);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_write_cb)(
    int unit, uint32 sw_state_bmp_first, uint32 input_bmp_first, uint32 _range, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_and_cb)(
    int unit, uint32 _first, uint32 _count, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_or_cb)(
    int unit, uint32 _first, uint32 _count, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_xor_cb)(
    int unit, uint32 _first, uint32 _count, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_remove_cb)(
    int unit, uint32 _first, uint32 _count, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_negate_cb)(
    int unit, uint32 _first, uint32 _count);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_clear_cb)(
    int unit, uint32 _first, uint32 _count);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_set_cb)(
    int unit, uint32 _first, uint32 _count);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_null_cb)(
    int unit, uint32 _first, uint32 _count, uint8 *result);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_test_cb)(
    int unit, uint32 _first, uint32 _count, uint8 *result);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_eq_cb)(
    int unit, SHR_BITDCL *input_bmp, uint32 _first, uint32 _count, uint8 *result);

typedef int (*dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_count_cb)(
    int unit, uint32 _first, uint32 _range, int *result);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_get_cb)(
    int unit, CONST SHR_BITDCL **tas_ports_to_reset);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_alloc_bitmap_cb)(
    int unit);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_set_cb)(
    int unit, uint32 _bit_num);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_clear_cb)(
    int unit, uint32 _bit_num);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_get_cb)(
    int unit, uint32 _bit_num, uint8* result);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_read_cb)(
    int unit, uint32 sw_state_bmp_first, uint32 result_first, uint32 _range, SHR_BITDCL *result);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_write_cb)(
    int unit, uint32 sw_state_bmp_first, uint32 input_bmp_first, uint32 _range, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_and_cb)(
    int unit, uint32 _first, uint32 _count, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_or_cb)(
    int unit, uint32 _first, uint32 _count, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_xor_cb)(
    int unit, uint32 _first, uint32 _count, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_remove_cb)(
    int unit, uint32 _first, uint32 _count, SHR_BITDCL *input_bmp);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_negate_cb)(
    int unit, uint32 _first, uint32 _count);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_clear_cb)(
    int unit, uint32 _first, uint32 _count);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_set_cb)(
    int unit, uint32 _first, uint32 _count);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_null_cb)(
    int unit, uint32 _first, uint32 _count, uint8 *result);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_test_cb)(
    int unit, uint32 _first, uint32 _count, uint8 *result);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_eq_cb)(
    int unit, SHR_BITDCL *input_bmp, uint32 _first, uint32 _count, uint8 *result);

typedef int (*dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_count_cb)(
    int unit, uint32 _first, uint32 _range, int *result);

typedef int (*dnx_tsn_db_tsn_thread_mutex_create_cb)(
    int unit);

typedef int (*dnx_tsn_db_tsn_thread_mutex_is_created_cb)(
    int unit, uint8 *is_created);

typedef int (*dnx_tsn_db_tsn_thread_mutex_destroy_cb)(
    int unit);

typedef int (*dnx_tsn_db_tsn_thread_mutex_take_cb)(
    int unit, int usec);

typedef int (*dnx_tsn_db_tsn_thread_mutex_give_cb)(
    int unit);

typedef int (*dnx_tsn_db_mutex_create_cb)(
    int unit);

typedef int (*dnx_tsn_db_mutex_is_created_cb)(
    int unit, uint8 *is_created);

typedef int (*dnx_tsn_db_mutex_destroy_cb)(
    int unit);

typedef int (*dnx_tsn_db_mutex_take_cb)(
    int unit, int usec);

typedef int (*dnx_tsn_db_mutex_give_cb)(
    int unit);

/*
 * STRUCTs
 */

typedef struct {
    dnx_tsn_db_taf_gate_alloc_set_cb set;
    dnx_tsn_db_taf_gate_alloc_get_cb get;
    dnx_tsn_db_taf_gate_alloc_create_cb create;
    dnx_tsn_db_taf_gate_alloc_allocate_single_cb allocate_single;
    dnx_tsn_db_taf_gate_alloc_free_single_cb free_single;
    dnx_tsn_db_taf_gate_alloc_is_allocated_cb is_allocated;
    dnx_tsn_db_taf_gate_alloc_nof_free_elements_get_cb nof_free_elements_get;
    dnx_tsn_db_taf_gate_alloc_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
} dnx_tsn_db_taf_gate_alloc_cbs;

typedef struct {
    dnx_tsn_db_taf_pid_alloc_set_cb set;
    dnx_tsn_db_taf_pid_alloc_get_cb get;
    dnx_tsn_db_taf_pid_alloc_create_cb create;
    dnx_tsn_db_taf_pid_alloc_allocate_single_cb allocate_single;
    dnx_tsn_db_taf_pid_alloc_free_single_cb free_single;
    dnx_tsn_db_taf_pid_alloc_is_allocated_cb is_allocated;
    dnx_tsn_db_taf_pid_alloc_nof_free_elements_get_cb nof_free_elements_get;
    dnx_tsn_db_taf_pid_alloc_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
} dnx_tsn_db_taf_pid_alloc_cbs;

typedef struct {
    dnx_tsn_db_taf_taf_profiles_data_profile_state_set_cb set;
    dnx_tsn_db_taf_taf_profiles_data_profile_state_get_cb get;
} dnx_tsn_db_taf_taf_profiles_data_profile_state_cbs;

typedef struct {
    dnx_tsn_db_taf_taf_profiles_data_profile_data_set_cb set;
    dnx_tsn_db_taf_taf_profiles_data_profile_data_get_cb get;
} dnx_tsn_db_taf_taf_profiles_data_profile_data_cbs;

typedef struct {
    dnx_tsn_db_taf_taf_profiles_data_config_change_time_set_cb set;
    dnx_tsn_db_taf_taf_profiles_data_config_change_time_get_cb get;
} dnx_tsn_db_taf_taf_profiles_data_config_change_time_cbs;

typedef struct {
    dnx_tsn_db_taf_taf_profiles_data_alloc_cb alloc;
    dnx_tsn_db_taf_taf_profiles_data_profile_state_cbs profile_state;
    dnx_tsn_db_taf_taf_profiles_data_profile_data_cbs profile_data;
    dnx_tsn_db_taf_taf_profiles_data_config_change_time_cbs config_change_time;
} dnx_tsn_db_taf_taf_profiles_data_cbs;

typedef struct {
    dnx_tsn_db_taf_gate_alloc_cbs gate_alloc;
    dnx_tsn_db_taf_pid_alloc_cbs pid_alloc;
    dnx_tsn_db_taf_taf_profiles_data_cbs taf_profiles_data;
} dnx_tsn_db_taf_cbs;

typedef struct {
    dnx_tsn_db_tas_gate_alloc_set_cb set;
    dnx_tsn_db_tas_gate_alloc_get_cb get;
    dnx_tsn_db_tas_gate_alloc_alloc_cb alloc;
    dnx_tsn_db_tas_gate_alloc_create_cb create;
    dnx_tsn_db_tas_gate_alloc_allocate_single_cb allocate_single;
    dnx_tsn_db_tas_gate_alloc_free_single_cb free_single;
    dnx_tsn_db_tas_gate_alloc_is_allocated_cb is_allocated;
    dnx_tsn_db_tas_gate_alloc_nof_free_elements_get_cb nof_free_elements_get;
} dnx_tsn_db_tas_gate_alloc_cbs;

typedef struct {
    dnx_tsn_db_tas_pid_alloc_set_cb set;
    dnx_tsn_db_tas_pid_alloc_get_cb get;
    dnx_tsn_db_tas_pid_alloc_alloc_cb alloc;
    dnx_tsn_db_tas_pid_alloc_create_cb create;
    dnx_tsn_db_tas_pid_alloc_allocate_single_cb allocate_single;
    dnx_tsn_db_tas_pid_alloc_free_single_cb free_single;
    dnx_tsn_db_tas_pid_alloc_is_allocated_cb is_allocated;
    dnx_tsn_db_tas_pid_alloc_nof_free_elements_get_cb nof_free_elements_get;
    dnx_tsn_db_tas_pid_alloc_nof_allocated_elements_in_range_get_cb nof_allocated_elements_in_range_get;
} dnx_tsn_db_tas_pid_alloc_cbs;

typedef struct {
    dnx_tsn_db_tas_egq_if_to_gate_mapping_set_cb set;
    dnx_tsn_db_tas_egq_if_to_gate_mapping_get_cb get;
    dnx_tsn_db_tas_egq_if_to_gate_mapping_alloc_cb alloc;
} dnx_tsn_db_tas_egq_if_to_gate_mapping_cbs;

typedef struct {
    dnx_tsn_db_tas_tas_profiles_data_profile_state_set_cb set;
    dnx_tsn_db_tas_tas_profiles_data_profile_state_get_cb get;
} dnx_tsn_db_tas_tas_profiles_data_profile_state_cbs;

typedef struct {
    dnx_tsn_db_tas_tas_profiles_data_profile_data_set_cb set;
    dnx_tsn_db_tas_tas_profiles_data_profile_data_get_cb get;
} dnx_tsn_db_tas_tas_profiles_data_profile_data_cbs;

typedef struct {
    dnx_tsn_db_tas_tas_profiles_data_config_change_time_set_cb set;
    dnx_tsn_db_tas_tas_profiles_data_config_change_time_get_cb get;
} dnx_tsn_db_tas_tas_profiles_data_config_change_time_cbs;

typedef struct {
    dnx_tsn_db_tas_tas_profiles_data_port_set_cb set;
    dnx_tsn_db_tas_tas_profiles_data_port_get_cb get;
} dnx_tsn_db_tas_tas_profiles_data_port_cbs;

typedef struct {
    dnx_tsn_db_tas_tas_profiles_data_alloc_cb alloc;
    dnx_tsn_db_tas_tas_profiles_data_profile_state_cbs profile_state;
    dnx_tsn_db_tas_tas_profiles_data_profile_data_cbs profile_data;
    dnx_tsn_db_tas_tas_profiles_data_config_change_time_cbs config_change_time;
    dnx_tsn_db_tas_tas_profiles_data_port_cbs port;
} dnx_tsn_db_tas_tas_profiles_data_cbs;

typedef struct {
    dnx_tsn_db_tas_gate_alloc_cbs gate_alloc;
    dnx_tsn_db_tas_pid_alloc_cbs pid_alloc;
    dnx_tsn_db_tas_egq_if_to_gate_mapping_cbs egq_if_to_gate_mapping;
    dnx_tsn_db_tas_tas_profiles_data_cbs tas_profiles_data;
} dnx_tsn_db_tas_cbs;

typedef struct {
    dnx_tsn_db_cqf_gate_alloc_set_cb set;
    dnx_tsn_db_cqf_gate_alloc_get_cb get;
    dnx_tsn_db_cqf_gate_alloc_alloc_cb alloc;
    dnx_tsn_db_cqf_gate_alloc_create_cb create;
    dnx_tsn_db_cqf_gate_alloc_allocate_single_cb allocate_single;
    dnx_tsn_db_cqf_gate_alloc_free_single_cb free_single;
    dnx_tsn_db_cqf_gate_alloc_is_allocated_cb is_allocated;
    dnx_tsn_db_cqf_gate_alloc_nof_free_elements_get_cb nof_free_elements_get;
} dnx_tsn_db_cqf_gate_alloc_cbs;

typedef struct {
    dnx_tsn_db_cqf_tsn_egr_if_to_gate_mapping_set_cb set;
    dnx_tsn_db_cqf_tsn_egr_if_to_gate_mapping_get_cb get;
    dnx_tsn_db_cqf_tsn_egr_if_to_gate_mapping_alloc_cb alloc;
} dnx_tsn_db_cqf_tsn_egr_if_to_gate_mapping_cbs;

typedef struct {
    dnx_tsn_db_cqf_ptp_base_time_set_cb set;
    dnx_tsn_db_cqf_ptp_base_time_get_cb get;
    dnx_tsn_db_cqf_ptp_base_time_alloc_cb alloc;
} dnx_tsn_db_cqf_ptp_base_time_cbs;

typedef struct {
    dnx_tsn_db_cqf_gate_alloc_cbs gate_alloc;
    dnx_tsn_db_cqf_tsn_egr_if_to_gate_mapping_cbs tsn_egr_if_to_gate_mapping;
    dnx_tsn_db_cqf_ptp_base_time_cbs ptp_base_time;
} dnx_tsn_db_cqf_cbs;

typedef struct {
    dnx_tsn_db_tsn_thread_tsn_thread_handler_set_cb set;
    dnx_tsn_db_tsn_thread_tsn_thread_handler_get_cb get;
} dnx_tsn_db_tsn_thread_tsn_thread_handler_cbs;

typedef struct {
    dnx_tsn_db_tsn_thread_pending_list_create_empty_cb create_empty;
    dnx_tsn_db_tsn_thread_pending_list_nof_elements_cb nof_elements;
    dnx_tsn_db_tsn_thread_pending_list_node_value_cb node_value;
    dnx_tsn_db_tsn_thread_pending_list_node_update_cb node_update;
    dnx_tsn_db_tsn_thread_pending_list_next_node_cb next_node;
    dnx_tsn_db_tsn_thread_pending_list_previous_node_cb previous_node;
    dnx_tsn_db_tsn_thread_pending_list_remove_node_cb remove_node;
    dnx_tsn_db_tsn_thread_pending_list_get_last_cb get_last;
    dnx_tsn_db_tsn_thread_pending_list_get_first_cb get_first;
    dnx_tsn_db_tsn_thread_pending_list_print_cb print;
    dnx_tsn_db_tsn_thread_pending_list_add_cb add;
    dnx_tsn_db_tsn_thread_pending_list_node_key_cb node_key;
    dnx_tsn_db_tsn_thread_pending_list_find_cb find;
} dnx_tsn_db_tsn_thread_pending_list_cbs;

typedef struct {
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_get_cb get;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_alloc_bitmap_cb alloc_bitmap;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_set_cb bit_set;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_clear_cb bit_clear;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_get_cb bit_get;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_read_cb bit_range_read;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_write_cb bit_range_write;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_and_cb bit_range_and;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_or_cb bit_range_or;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_xor_cb bit_range_xor;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_remove_cb bit_range_remove;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_negate_cb bit_range_negate;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_clear_cb bit_range_clear;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_set_cb bit_range_set;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_null_cb bit_range_null;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_test_cb bit_range_test;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_eq_cb bit_range_eq;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_bit_range_count_cb bit_range_count;
} dnx_tsn_db_tsn_thread_taf_gates_to_reset_cbs;

typedef struct {
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_get_cb get;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_alloc_bitmap_cb alloc_bitmap;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_set_cb bit_set;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_clear_cb bit_clear;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_get_cb bit_get;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_read_cb bit_range_read;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_write_cb bit_range_write;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_and_cb bit_range_and;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_or_cb bit_range_or;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_xor_cb bit_range_xor;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_remove_cb bit_range_remove;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_negate_cb bit_range_negate;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_clear_cb bit_range_clear;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_set_cb bit_range_set;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_null_cb bit_range_null;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_test_cb bit_range_test;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_eq_cb bit_range_eq;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_bit_range_count_cb bit_range_count;
} dnx_tsn_db_tsn_thread_tas_ports_to_reset_cbs;

typedef struct {
    dnx_tsn_db_tsn_thread_mutex_create_cb create;
    dnx_tsn_db_tsn_thread_mutex_is_created_cb is_created;
    dnx_tsn_db_tsn_thread_mutex_destroy_cb destroy;
    dnx_tsn_db_tsn_thread_mutex_take_cb take;
    dnx_tsn_db_tsn_thread_mutex_give_cb give;
} dnx_tsn_db_tsn_thread_mutex_cbs;

typedef struct {
    dnx_tsn_db_tsn_thread_tsn_thread_handler_cbs tsn_thread_handler;
    dnx_tsn_db_tsn_thread_pending_list_cbs pending_list;
    dnx_tsn_db_tsn_thread_taf_gates_to_reset_cbs taf_gates_to_reset;
    dnx_tsn_db_tsn_thread_tas_ports_to_reset_cbs tas_ports_to_reset;
    dnx_tsn_db_tsn_thread_mutex_cbs mutex;
} dnx_tsn_db_tsn_thread_cbs;

typedef struct {
    dnx_tsn_db_mutex_create_cb create;
    dnx_tsn_db_mutex_is_created_cb is_created;
    dnx_tsn_db_mutex_destroy_cb destroy;
    dnx_tsn_db_mutex_take_cb take;
    dnx_tsn_db_mutex_give_cb give;
} dnx_tsn_db_mutex_cbs;

typedef struct {
    dnx_tsn_db_is_init_cb is_init;
    dnx_tsn_db_init_cb init;
    dnx_tsn_db_taf_cbs taf;
    dnx_tsn_db_tas_cbs tas;
    dnx_tsn_db_cqf_cbs cqf;
    dnx_tsn_db_tsn_thread_cbs tsn_thread;
    dnx_tsn_db_mutex_cbs mutex;
} dnx_tsn_db_cbs;

/*
 * Global Variables
 */

/*
 * FUNCTIONs
 */

/*
 *
 * get_name function for enum type dnx_tsn_gate_type_e
 * AUTO-GENERATED - DO NOT MODIFY
 *
 */
const char *
dnx_tsn_gate_type_e_get_name(dnx_tsn_gate_type_e value);
/*
 *
 * get_name function for enum type dnx_tsn_profile_state_e
 * AUTO-GENERATED - DO NOT MODIFY
 *
 */
const char *
dnx_tsn_profile_state_e_get_name(dnx_tsn_profile_state_e value);
/*
 * Global Variables
 */

extern dnx_tsn_db_cbs dnx_tsn_db;

#endif /* __DNX_TSN_ACCESS_H__ */

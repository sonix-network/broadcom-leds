/** \file algo/swstate/auto_generated/diagnostic/crps_diagnostic.h
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

#ifndef __DNX_CRPS_DIAGNOSTIC_H__
#define __DNX_CRPS_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/crps_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <include/bcm/stat.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_max_crps.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    DNX_CRPS_DB_INFO,
    DNX_CRPS_DB_PROC_INFO,
    DNX_CRPS_DB_PROC_USED_FOR_METER_INFO,
    DNX_CRPS_DB_PROC_CONFIG_STARTED_INFO,
    DNX_CRPS_DB_PROC_CONFIG_DONE_INFO,
    DNX_CRPS_DB_PROC_ENABLERS_INFO,
    DNX_CRPS_DB_PROC_ENABLERS_COUNTING_ENABLE_INFO,
    DNX_CRPS_DB_PROC_ENABLERS_EVICTION_ENABLE_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_NEXT_ENGINE_ID_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_PREV_ENGINE_ID_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_DATABASE_ID_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_SRC_TYPE_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_COMMAND_ID_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_FORMAT_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_COUNTER_SIZE_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_MODE_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_COUNTER_SET_SIZE_INFO,
    DNX_CRPS_DB_PROC_INTERFACE_TYPE_HW_VALID_INFO,
    DNX_CRPS_DB_PROC_EVICTION_INFO,
    DNX_CRPS_DB_PROC_EVICTION_EVICTION_TYPE_INFO,
    DNX_CRPS_DB_PROC_EVICTION_RECORD_FORMAT_INFO,
    DNX_CRPS_DB_PROC_EVICTION_EVICTION_EVENT_ID_INFO,
    DNX_CRPS_DB_PROC_EVICTION_SEQUENTIAL_TIMER_VALUE_INFO,
    DNX_CRPS_DB_PROC_EVICTION_DMA_FIFO_INFO,
    DNX_CRPS_DB_PROC_EVICTION_EVICTION_ALGORITHMIC_DISABLE_INFO,
    DNX_CRPS_DB_PROC_EVICTION_CONDITIONAL_INFO,
    DNX_CRPS_DB_PROC_EVICTION_CONDITIONAL_CONDITION_USER_DATA_INFO,
    DNX_CRPS_DB_PROC_EVICTION_CONDITIONAL_ACTION_FLAGS_INFO,
    DNX_CRPS_DB_PROC_EVICTION_CONDITIONAL_ENABLE_INFO,
    DNX_CRPS_DB_PROC_EVICTION_CONDITIONAL_CONDITION_SOURCE_SELECT_INFO,
    DNX_CRPS_DB_PROC_EVICTION_CONDITIONAL_QUALIFIER_INFO,
    DNX_CRPS_DB_PROC_EVICTION_EVICTION_RANGE_INFO,
    DNX_CRPS_DB_PROC_EVICTION_EVICTION_RANGE_START_INFO,
    DNX_CRPS_DB_PROC_EVICTION_EVICTION_RANGE_END_INFO,
    DNX_CRPS_DB_PROC_LOG_OBJ_ID_RANGE_INFO,
    DNX_CRPS_DB_PROC_LOG_OBJ_ID_RANGE_LOGICAL_OBJECT_ID_FIRST_INFO,
    DNX_CRPS_DB_PROC_LOG_OBJ_ID_RANGE_LOGICAL_OBJECT_ID_LAST_INFO,
    DNX_CRPS_DB_PROC_RATE_INFO,
    DNX_CRPS_DB_PROC_RATE_RATE_CALCULATION_ENABLE_INFO,
    DNX_CRPS_DB_PROC_RATE_NEXT_SEQ_COUNTER_IDX_INFO,
    DNX_CRPS_DB_PROC_RATE_SEQUENCE_NUM_INFO,
    DNX_CRPS_DB_PROC_RATE_SEQ_PERIOD_SHADOW_INFO,
    DNX_CRPS_DB_PROC_RATE_ALGO_SHADOW_INFO,
    DNX_CRPS_DB_PROC_COUNTER_INFO,
    DNX_CRPS_DB_DATABASE_INFO,
    DNX_CRPS_DB_DATABASE_BASE_ENGINE_INFO,
    DNX_CRPS_DB_DATABASE_TYPE_INFO,
    DNX_CRPS_DB_DATABASE_TYPE_VALID_INFO,
    DNX_CRPS_DB_DATABASE_TYPE_OFFSET_INFO,
    DNX_CRPS_DB_DATABASE_TYPE_START_INFO,
    DNX_CRPS_DB_DATABASE_TYPE_END_INFO,
    DNX_CRPS_DB_DATABASE_SET_INFO,
    DNX_CRPS_DB_DATABASE_SET_SIZE_INFO,
    DNX_CRPS_DB_DATABASE_SET_START_INFO,
    DNX_CRPS_DB_DATABASE_SET_END_INFO,
    DNX_CRPS_DB_DATABASE_RES_INFO,
    DNX_CRPS_DB_INFO_NOF_ENTRIES
} sw_state_dnx_crps_db_layout_e;


extern dnx_sw_state_diagnostic_info_t dnx_crps_db_info[SOC_MAX_NUM_DEVICES][DNX_CRPS_DB_INFO_NOF_ENTRIES];

extern const char* dnx_crps_db_layout_str[DNX_CRPS_DB_INFO_NOF_ENTRIES];
int dnx_crps_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_used_for_meter_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_config_started_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_config_done_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_enablers_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_enablers_counting_enable_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_enablers_eviction_enable_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_next_engine_id_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_prev_engine_id_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_database_id_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_src_type_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_command_id_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_format_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_counter_size_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_mode_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_counter_set_size_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_interface_type_hw_valid_dump(
    int unit, int proc_idx_0, int proc_idx_1, int type_hw_valid_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_eviction_type_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_record_format_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_eviction_event_id_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_sequential_timer_value_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_dma_fifo_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_eviction_algorithmic_disable_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_conditional_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_conditional_condition_user_data_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_conditional_action_flags_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_conditional_enable_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_conditional_condition_source_select_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_conditional_qualifier_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_eviction_range_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_eviction_range_start_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_eviction_eviction_range_end_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_log_obj_id_range_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_log_obj_id_range_logical_object_id_first_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_log_obj_id_range_logical_object_id_last_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_rate_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_rate_rate_calculation_enable_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_rate_next_seq_counter_idx_dump(
    int unit, int proc_idx_0, int proc_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_rate_sequence_num_dump(
    int unit, int proc_idx_0, int proc_idx_1, int sequence_num_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_rate_seq_period_shadow_dump(
    int unit, int proc_idx_0, int proc_idx_1, int seq_period_shadow_idx_0, int seq_period_shadow_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_rate_algo_shadow_dump(
    int unit, int proc_idx_0, int proc_idx_1, int algo_shadow_idx_0, int algo_shadow_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_proc_counter_dump(
    int unit, int proc_idx_0, int proc_idx_1, int counter_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_dump(
    int unit, int database_idx_0, int database_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_base_engine_dump(
    int unit, int database_idx_0, int database_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_type_dump(
    int unit, int database_idx_0, int database_idx_1, int type_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_type_valid_dump(
    int unit, int database_idx_0, int database_idx_1, int type_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_type_offset_dump(
    int unit, int database_idx_0, int database_idx_1, int type_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_type_start_dump(
    int unit, int database_idx_0, int database_idx_1, int type_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_type_end_dump(
    int unit, int database_idx_0, int database_idx_1, int type_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_set_dump(
    int unit, int database_idx_0, int database_idx_1, int set_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_set_size_dump(
    int unit, int database_idx_0, int database_idx_1, int set_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_set_start_dump(
    int unit, int database_idx_0, int database_idx_1, int set_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_set_end_dump(
    int unit, int database_idx_0, int database_idx_1, int set_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_db_database_res_dump(
    int unit, int database_res_idx_0, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_CRPS_DIAGNOSTIC_H__ */

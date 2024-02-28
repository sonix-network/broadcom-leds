/** \file algo/swstate/auto_generated/diagnostic/crps_eviction_diagnostic.h
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

#ifndef __DNX_CRPS_EVICTION_DIAGNOSTIC_H__
#define __DNX_CRPS_EVICTION_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/crps_eviction_types.h>
#include <include/bcm/stat.h>
#include <include/bcm/types.h>
#include <include/shared/shr_thread_manager.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_crps.h>
#include <include/soc/dnx/dnx_data/auto_generated/dnx_data_max_crps.h>
#include <soc/dnxc/swstate/types/sw_state_mutex.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    DNX_CRPS_EVICTION_DB_INFO,
    DNX_CRPS_EVICTION_DB_CACHE_LOCK_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_LOCK_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_CHANNELS_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_NOF_COUNTERS_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_CNT_RESULT_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_CNT_RESULT_CNT1_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_CNT_RESULT_CNT2_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_CNT_RESULT_COUNTER_ENTRY_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_CNT_RESULT_ENGINE_ID_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_CNT_RESULT_CORE_ID_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_CNT_RESULT_FORMAT_INFO,
    DNX_CRPS_EVICTION_DB_FIFO_RESULTS_CNT_RESULT_IS_SEQ_RECORD_INFO,
    DNX_CRPS_EVICTION_DB_BG_THREAD_DATA_INFO,
    DNX_CRPS_EVICTION_DB_BG_THREAD_DATA_CRPS_EVICTION_THREAD_HANDLER_INFO,
    DNX_CRPS_EVICTION_DB_INFO_NOF_ENTRIES
} sw_state_dnx_crps_eviction_db_layout_e;


extern dnx_sw_state_diagnostic_info_t dnx_crps_eviction_db_info[SOC_MAX_NUM_DEVICES][DNX_CRPS_EVICTION_DB_INFO_NOF_ENTRIES];

extern const char* dnx_crps_eviction_db_layout_str[DNX_CRPS_EVICTION_DB_INFO_NOF_ENTRIES];
int dnx_crps_eviction_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_cache_lock_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_lock_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_channels_dump(
    int unit, int fifo_channels_idx_0, int fifo_channels_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_nof_counters_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_cnt_result_dump(
    int unit, int cnt_result_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_cnt_result_cnt1_dump(
    int unit, int cnt_result_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_cnt_result_cnt2_dump(
    int unit, int cnt_result_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_cnt_result_counter_entry_dump(
    int unit, int cnt_result_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_cnt_result_engine_id_dump(
    int unit, int cnt_result_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_cnt_result_core_id_dump(
    int unit, int cnt_result_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_cnt_result_format_dump(
    int unit, int cnt_result_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_fifo_results_cnt_result_is_seq_record_dump(
    int unit, int cnt_result_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_bg_thread_data_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_crps_eviction_db_bg_thread_data_crps_eviction_thread_handler_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_CRPS_EVICTION_DIAGNOSTIC_H__ */

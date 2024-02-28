/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_diagnostic_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_DPP_SOC_ARAD_PP_FWD_MACT_DIAGNOSTIC_H_
#define _SHR_SW_STATE_DPP_SOC_ARAD_PP_FWD_MACT_DIAGNOSTIC_H_

#ifdef BCM_WARM_BOOT_SUPPORT
/********************************* diagnostic calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the diagnostic calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the diagnostic struct by 'sw_state_diagnostic_cb_init'.                  */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_dump_cb)(
    int unit, int pp_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_learning_mode_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_learning_mode_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_is_petra_a_compatible_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_is_petra_a_compatible_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_flush_db_data_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_flush_db_data_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0, int flush_db_data_arr_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_flush_entry_use_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_flush_entry_use_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_traverse_mode_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_traverse_mode_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_num_entries_in_dma_host_memory_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_num_entries_in_dma_host_memory_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_size_of_learn_event_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_size_of_learn_event_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_arad_pp_fwd_mact_host_memory_allocated_bytes_dump */
typedef int (*sw_state_dpp_soc_arad_pp_fwd_mact_host_memory_allocated_bytes_dump_cb)(
    int unit, int pp_idx_0, int fwd_mact_idx_0);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

/*********************************** diagnostic calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the diagnostic layer for the entire SW state.*/
/* use this tree to dump fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_learning_mode_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_learning_mode_dump_cb dump;
} sw_state_dpp_soc_arad_pp_fwd_mact_learning_mode_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_is_petra_a_compatible_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_is_petra_a_compatible_dump_cb dump;
} sw_state_dpp_soc_arad_pp_fwd_mact_is_petra_a_compatible_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_flush_db_data_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_flush_db_data_dump_cb dump;
} sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_flush_db_data_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_dump_cb dump;
    sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_flush_db_data_diagnostic_cbs_t flush_db_data;
} sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_flush_entry_use_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_flush_entry_use_dump_cb dump;
} sw_state_dpp_soc_arad_pp_fwd_mact_flush_entry_use_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_traverse_mode_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_traverse_mode_dump_cb dump;
} sw_state_dpp_soc_arad_pp_fwd_mact_traverse_mode_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_num_entries_in_dma_host_memory_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_num_entries_in_dma_host_memory_dump_cb dump;
} sw_state_dpp_soc_arad_pp_fwd_mact_num_entries_in_dma_host_memory_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_size_of_learn_event_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_size_of_learn_event_dump_cb dump;
} sw_state_dpp_soc_arad_pp_fwd_mact_size_of_learn_event_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_host_memory_allocated_bytes_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_host_memory_allocated_bytes_dump_cb dump;
} sw_state_dpp_soc_arad_pp_fwd_mact_host_memory_allocated_bytes_diagnostic_cbs_t;
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
typedef struct sw_state_dpp_soc_arad_pp_fwd_mact_diagnostic_cbs_s {
    sw_state_dpp_soc_arad_pp_fwd_mact_dump_cb dump;
    sw_state_dpp_soc_arad_pp_fwd_mact_learning_mode_diagnostic_cbs_t learning_mode;
    sw_state_dpp_soc_arad_pp_fwd_mact_is_petra_a_compatible_diagnostic_cbs_t is_petra_a_compatible;
    sw_state_dpp_soc_arad_pp_fwd_mact_flush_db_data_arr_diagnostic_cbs_t flush_db_data_arr;
    sw_state_dpp_soc_arad_pp_fwd_mact_flush_entry_use_diagnostic_cbs_t flush_entry_use;
    sw_state_dpp_soc_arad_pp_fwd_mact_traverse_mode_diagnostic_cbs_t traverse_mode;
    sw_state_dpp_soc_arad_pp_fwd_mact_num_entries_in_dma_host_memory_diagnostic_cbs_t num_entries_in_dma_host_memory;
    sw_state_dpp_soc_arad_pp_fwd_mact_size_of_learn_event_diagnostic_cbs_t size_of_learn_event;
    sw_state_dpp_soc_arad_pp_fwd_mact_host_memory_allocated_bytes_diagnostic_cbs_t host_memory_allocated_bytes;
} sw_state_dpp_soc_arad_pp_fwd_mact_diagnostic_cbs_t;

#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

int sw_state_dpp_soc_arad_pp_fwd_mact_diagnostic_cb_init(int unit);

#endif /* BCM_WARM_BOOT_SUPPORT */

#endif /* _SHR_SW_STATE_DPP_SOC_ARAD_PP_FWD_MACT_DIAGNOSTIC_H_ */

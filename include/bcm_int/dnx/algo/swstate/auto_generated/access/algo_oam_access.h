/** \file algo/swstate/auto_generated/access/algo_oam_access.h
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

#ifndef __ALGO_OAM_ACCESS_H__
#define __ALGO_OAM_ACCESS_H__

#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_oam_types.h>
#include <bcm_int/dnx/algo/oam/algo_oam.h>
#include <bcm_int/dnx/algo/oamp/algo_oamp.h>
#include <bcm_int/dnx/algo/oamp/algo_oamp_v1.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <src/bcm/dnx/oam/oam_oamp.h>
/*
 * TYPEDEFs
 */

typedef int (*algo_oam_db_is_init_cb)(
    int unit, uint8 *is_init);

typedef int (*algo_oam_db_init_cb)(
    int unit);

typedef int (*algo_oam_db_oam_group_id_set_cb)(
    int unit, dnx_algo_res_t oam_group_id);

typedef int (*algo_oam_db_oam_group_id_get_cb)(
    int unit, dnx_algo_res_t *oam_group_id);

typedef int (*algo_oam_db_oam_group_id_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_group_id_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oam_group_id_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oam_group_id_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_oam_db_oam_profile_id_ing_set_cb)(
    int unit, dnx_algo_res_t oam_profile_id_ing);

typedef int (*algo_oam_db_oam_profile_id_ing_get_cb)(
    int unit, dnx_algo_res_t *oam_profile_id_ing);

typedef int (*algo_oam_db_oam_profile_id_ing_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_profile_id_ing_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oam_profile_id_ing_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oam_profile_id_ing_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_oam_db_oam_profile_id_eg_set_cb)(
    int unit, dnx_algo_res_t oam_profile_id_eg);

typedef int (*algo_oam_db_oam_profile_id_eg_get_cb)(
    int unit, dnx_algo_res_t *oam_profile_id_eg);

typedef int (*algo_oam_db_oam_profile_id_eg_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_profile_id_eg_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oam_profile_id_eg_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oam_profile_id_eg_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_oam_db_oam_profile_id_ing_acc_set_cb)(
    int unit, dnx_algo_res_t oam_profile_id_ing_acc);

typedef int (*algo_oam_db_oam_profile_id_ing_acc_get_cb)(
    int unit, dnx_algo_res_t *oam_profile_id_ing_acc);

typedef int (*algo_oam_db_oam_profile_id_ing_acc_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_profile_id_ing_acc_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oam_profile_id_ing_acc_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oam_profile_id_ing_acc_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_oam_db_oam_profile_id_eg_acc_set_cb)(
    int unit, dnx_algo_res_t oam_profile_id_eg_acc);

typedef int (*algo_oam_db_oam_profile_id_eg_acc_get_cb)(
    int unit, dnx_algo_res_t *oam_profile_id_eg_acc);

typedef int (*algo_oam_db_oam_profile_id_eg_acc_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_profile_id_eg_acc_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oam_profile_id_eg_acc_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oam_profile_id_eg_acc_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_oam_db_oamp_v1_rmep_id_below_threshold_set_cb)(
    int unit, dnx_algo_res_t oamp_v1_rmep_id_below_threshold);

typedef int (*algo_oam_db_oamp_v1_rmep_id_below_threshold_get_cb)(
    int unit, dnx_algo_res_t *oamp_v1_rmep_id_below_threshold);

typedef int (*algo_oam_db_oamp_v1_rmep_id_below_threshold_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oamp_v1_rmep_id_below_threshold_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oamp_v1_rmep_id_below_threshold_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oamp_v1_rmep_id_below_threshold_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_oam_db_oamp_v1_rmep_id_below_threshold_get_next_cb)(
    int unit, int *element);

typedef int (*algo_oam_db_oamp_v1_rmep_id_above_threshold_set_cb)(
    int unit, dnx_algo_res_t oamp_v1_rmep_id_above_threshold);

typedef int (*algo_oam_db_oamp_v1_rmep_id_above_threshold_get_cb)(
    int unit, dnx_algo_res_t *oamp_v1_rmep_id_above_threshold);

typedef int (*algo_oam_db_oamp_v1_rmep_id_above_threshold_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oamp_v1_rmep_id_above_threshold_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oamp_v1_rmep_id_above_threshold_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oamp_v1_rmep_id_above_threshold_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_oam_db_oamp_v1_rmep_id_above_threshold_get_next_cb)(
    int unit, int *element);

typedef int (*algo_oam_db_oamp_itmh_pph_priority_profile_set_cb)(
    int unit, dnx_algo_template_t oamp_itmh_pph_priority_profile);

typedef int (*algo_oam_db_oamp_itmh_pph_priority_profile_get_cb)(
    int unit, dnx_algo_template_t *oamp_itmh_pph_priority_profile);

typedef int (*algo_oam_db_oamp_itmh_pph_priority_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oamp_itmh_pph_priority_profile_allocate_single_cb)(
    int unit, uint32 flags, dnx_oam_itmh_priority_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oamp_itmh_pph_priority_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_itmh_pph_priority_profile_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_oam_itmh_priority_t *profile_data);

typedef int (*algo_oam_db_oam_mpls_pwe_exp_ttl_profile_set_cb)(
    int unit, dnx_algo_template_t oam_mpls_pwe_exp_ttl_profile);

typedef int (*algo_oam_db_oam_mpls_pwe_exp_ttl_profile_get_cb)(
    int unit, dnx_algo_template_t *oam_mpls_pwe_exp_ttl_profile);

typedef int (*algo_oam_db_oam_mpls_pwe_exp_ttl_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_mpls_pwe_exp_ttl_profile_allocate_single_cb)(
    int unit, uint32 flags, dnx_oam_ttl_exp_profile_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oam_mpls_pwe_exp_ttl_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oam_mpls_pwe_exp_ttl_profile_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_oam_ttl_exp_profile_t *profile_data);

typedef int (*algo_oam_db_oamp_punt_event_prof_template_set_cb)(
    int unit, dnx_algo_template_t oamp_punt_event_prof_template);

typedef int (*algo_oam_db_oamp_punt_event_prof_template_get_cb)(
    int unit, dnx_algo_template_t *oamp_punt_event_prof_template);

typedef int (*algo_oam_db_oamp_punt_event_prof_template_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oamp_punt_event_prof_template_allocate_single_cb)(
    int unit, uint32 flags, dnx_oam_oamp_punt_event_profile_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oamp_punt_event_prof_template_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_punt_event_prof_template_exchange_cb)(
    int unit, uint32 flags, int nof_references, const dnx_oam_oamp_punt_event_profile_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_punt_event_prof_template_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_oam_oamp_punt_event_profile_t *profile_data);

typedef int (*algo_oam_db_oam_sa_mac_msb_profile_template_set_cb)(
    int unit, dnx_algo_template_t oam_sa_mac_msb_profile_template);

typedef int (*algo_oam_db_oam_sa_mac_msb_profile_template_get_cb)(
    int unit, dnx_algo_template_t *oam_sa_mac_msb_profile_template);

typedef int (*algo_oam_db_oam_sa_mac_msb_profile_template_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_sa_mac_msb_profile_template_allocate_single_cb)(
    int unit, uint32 flags, uint8 *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oam_sa_mac_msb_profile_template_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_eth_oam_tpid_profile_set_cb)(
    int unit, dnx_algo_template_t eth_oam_tpid_profile);

typedef int (*algo_oam_db_eth_oam_tpid_profile_get_cb)(
    int unit, dnx_algo_template_t *eth_oam_tpid_profile);

typedef int (*algo_oam_db_eth_oam_tpid_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_eth_oam_tpid_profile_allocate_single_cb)(
    int unit, uint32 flags, uint16 *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_eth_oam_tpid_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oam_group_icc_profile_set_cb)(
    int unit, dnx_algo_template_t oam_group_icc_profile);

typedef int (*algo_oam_db_oam_group_icc_profile_get_cb)(
    int unit, dnx_algo_template_t *oam_group_icc_profile);

typedef int (*algo_oam_db_oam_group_icc_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_group_icc_profile_allocate_single_cb)(
    int unit, uint32 flags, uint8 *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oam_group_icc_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oam_group_icc_profile_profile_get_cb)(
    int unit, const uint8 *profile_data, int *profile);

typedef int (*algo_oam_db_oam_mep_profile_set_cb)(
    int unit, dnx_algo_template_t oam_mep_profile);

typedef int (*algo_oam_db_oam_mep_profile_get_cb)(
    int unit, dnx_algo_template_t *oam_mep_profile);

typedef int (*algo_oam_db_oam_mep_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_mep_profile_allocate_single_cb)(
    int unit, uint32 flags, dnx_oam_mep_profile_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oam_mep_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oam_mep_profile_exchange_cb)(
    int unit, uint32 flags, int nof_references, const dnx_oam_mep_profile_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_oam_db_oam_mep_profile_replace_data_cb)(
    int unit, int profile,  const dnx_oam_mep_profile_t *new_profile_data);

typedef int (*algo_oam_db_oam_mep_profile_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_oam_mep_profile_t *profile_data);

typedef int (*algo_oam_db_oam_da_mac_msb_profile_template_set_cb)(
    int unit, dnx_algo_template_t oam_da_mac_msb_profile_template);

typedef int (*algo_oam_db_oam_da_mac_msb_profile_template_get_cb)(
    int unit, dnx_algo_template_t *oam_da_mac_msb_profile_template);

typedef int (*algo_oam_db_oam_da_mac_msb_profile_template_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_da_mac_msb_profile_template_allocate_single_cb)(
    int unit, uint32 flags, void *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oam_da_mac_msb_profile_template_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oam_da_mac_msb_profile_template_exchange_cb)(
    int unit, uint32 flags, int nof_references, const void *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_oam_db_oam_da_mac_msb_profile_template_profile_data_get_cb)(
    int unit, int profile, int *ref_count, void *profile_data);

typedef int (*algo_oam_db_oam_da_mac_lsb_profile_template_set_cb)(
    int unit, dnx_algo_template_t oam_da_mac_lsb_profile_template);

typedef int (*algo_oam_db_oam_da_mac_lsb_profile_template_get_cb)(
    int unit, dnx_algo_template_t *oam_da_mac_lsb_profile_template);

typedef int (*algo_oam_db_oam_da_mac_lsb_profile_template_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_da_mac_lsb_profile_template_allocate_single_cb)(
    int unit, uint32 flags, void *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oam_da_mac_lsb_profile_template_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oam_da_mac_lsb_profile_template_exchange_cb)(
    int unit, uint32 flags, int nof_references, const void *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_oam_db_oam_da_mac_lsb_profile_template_profile_data_get_cb)(
    int unit, int profile, int *ref_count, void *profile_data);

typedef int (*algo_oam_db_oam_default_mep_profiles_set_cb)(
    int unit, dnx_algo_res_t oam_default_mep_profiles);

typedef int (*algo_oam_db_oam_default_mep_profiles_get_cb)(
    int unit, dnx_algo_res_t *oam_default_mep_profiles);

typedef int (*algo_oam_db_oam_default_mep_profiles_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_default_mep_profiles_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oam_default_mep_profiles_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oam_default_mep_profiles_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_oam_db_oam_default_mep_profiles_get_next_cb)(
    int unit, int *element);

typedef int (*algo_oam_db_oam_trap_tcam_index_set_cb)(
    int unit, dnx_algo_template_t oam_trap_tcam_index);

typedef int (*algo_oam_db_oam_trap_tcam_index_get_cb)(
    int unit, dnx_algo_template_t *oam_trap_tcam_index);

typedef int (*algo_oam_db_oam_trap_tcam_index_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_trap_tcam_index_allocate_single_cb)(
    int unit, uint32 flags, dnx_oam_oamp_trap_tcam_entry_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oam_trap_tcam_index_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oam_trap_tcam_index_exchange_cb)(
    int unit, uint32 flags, int nof_references, const dnx_oam_oamp_trap_tcam_entry_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_oam_db_oam_trap_tcam_index_replace_data_cb)(
    int unit, int profile,  const dnx_oam_oamp_trap_tcam_entry_t *new_profile_data);

typedef int (*algo_oam_db_oam_trap_tcam_index_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_oam_oamp_trap_tcam_entry_t *profile_data);

typedef int (*algo_oam_db_slm_oamp_measurement_period_set_cb)(
    int unit, dnx_algo_template_t slm_oamp_measurement_period);

typedef int (*algo_oam_db_slm_oamp_measurement_period_get_cb)(
    int unit, dnx_algo_template_t *slm_oamp_measurement_period);

typedef int (*algo_oam_db_slm_oamp_measurement_period_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_slm_oamp_measurement_period_allocate_single_cb)(
    int unit, uint32 flags, int *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_slm_oamp_measurement_period_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_slm_oamp_measurement_period_profile_data_get_cb)(
    int unit, int profile, int *ref_count, int *profile_data);

typedef int (*algo_oam_db_slm_oamp_measurement_period_profile_get_cb)(
    int unit, const int *profile_data, int *profile);

typedef int (*algo_oam_db_mpls_tp_mdl_ignore_set_cb)(
    int unit, uint32 mpls_tp_mdl_ignore);

typedef int (*algo_oam_db_mpls_tp_mdl_ignore_get_cb)(
    int unit, uint32 *mpls_tp_mdl_ignore);

typedef int (*algo_oam_db_eth_dmac_mdl_match_check_set_cb)(
    int unit, uint32 eth_dmac_mdl_match_check);

typedef int (*algo_oam_db_eth_dmac_mdl_match_check_get_cb)(
    int unit, uint32 *eth_dmac_mdl_match_check);

typedef int (*algo_oam_db_oamp_v2_stamp_tlv_profile_set_cb)(
    int unit, dnx_algo_template_t oamp_v2_stamp_tlv_profile);

typedef int (*algo_oam_db_oamp_v2_stamp_tlv_profile_get_cb)(
    int unit, dnx_algo_template_t *oamp_v2_stamp_tlv_profile);

typedef int (*algo_oam_db_oamp_v2_stamp_tlv_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oamp_v2_stamp_tlv_profile_allocate_single_cb)(
    int unit, uint32 flags, dnx_oam_oamp_v2_stamp_tlv_profile_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oamp_v2_stamp_tlv_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_v2_stamp_tlv_profile_exchange_cb)(
    int unit, uint32 flags, int nof_references, const dnx_oam_oamp_v2_stamp_tlv_profile_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_v2_stamp_tlv_profile_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_oam_oamp_v2_stamp_tlv_profile_t *profile_data);

typedef int (*algo_oam_db_oamp_v2_stamp_tlv_profile_profile_get_cb)(
    int unit, const dnx_oam_oamp_v2_stamp_tlv_profile_t *profile_data, int *profile);

typedef int (*algo_oam_db_oamp_v2_tlv_profile_set_cb)(
    int unit, dnx_algo_template_t oamp_v2_tlv_profile);

typedef int (*algo_oam_db_oamp_v2_tlv_profile_get_cb)(
    int unit, dnx_algo_template_t *oamp_v2_tlv_profile);

typedef int (*algo_oam_db_oamp_v2_tlv_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oamp_v2_tlv_profile_allocate_single_cb)(
    int unit, uint32 flags, dnx_oam_oamp_v2_tlv_profile_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oamp_v2_tlv_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_v2_tlv_profile_exchange_cb)(
    int unit, uint32 flags, int nof_references, const dnx_oam_oamp_v2_tlv_profile_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_v2_tlv_profile_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_oam_oamp_v2_tlv_profile_t *profile_data);

typedef int (*algo_oam_db_oamp_v2_tlv_profile_profile_get_cb)(
    int unit, const dnx_oam_oamp_v2_tlv_profile_t *profile_data, int *profile);

typedef int (*algo_oam_db_oamp_v2_oam_ch_2_small_profile_set_cb)(
    int unit, dnx_algo_template_t oamp_v2_oam_ch_2_small_profile);

typedef int (*algo_oam_db_oamp_v2_oam_ch_2_small_profile_get_cb)(
    int unit, dnx_algo_template_t *oamp_v2_oam_ch_2_small_profile);

typedef int (*algo_oam_db_oamp_v2_oam_ch_2_small_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oamp_v2_oam_ch_2_small_profile_allocate_single_cb)(
    int unit, uint32 flags, algo_oamp_v2_oam_ch_2_small_profile_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oamp_v2_oam_ch_2_small_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_v2_oam_ch_2_small_profile_exchange_cb)(
    int unit, uint32 flags, int nof_references, const algo_oamp_v2_oam_ch_2_small_profile_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_oam_db_oamp_v2_oam_ch_2_small_profile_profile_data_get_cb)(
    int unit, int profile, int *ref_count, algo_oamp_v2_oam_ch_2_small_profile_t *profile_data);

typedef int (*algo_oam_db_oamp_v2_oam_ch_2_small_profile_profile_get_cb)(
    int unit, const algo_oamp_v2_oam_ch_2_small_profile_t *profile_data, int *profile);

typedef int (*algo_oam_db_oam_server_device_index_set_cb)(
    int unit, dnx_algo_template_t oam_server_device_index);

typedef int (*algo_oam_db_oam_server_device_index_get_cb)(
    int unit, dnx_algo_template_t *oam_server_device_index);

typedef int (*algo_oam_db_oam_server_device_index_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_server_device_index_allocate_single_cb)(
    int unit, uint32 flags, uint8 *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_oam_db_oam_server_device_index_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_oam_db_oam_server_device_index_profile_get_cb)(
    int unit, const uint8 *profile_data, int *profile);

typedef int (*algo_oam_db_mpls_oam_native_eth_over_pwe_classify_set_cb)(
    int unit, uint32 mpls_oam_native_eth_over_pwe_classify);

typedef int (*algo_oam_db_mpls_oam_native_eth_over_pwe_classify_get_cb)(
    int unit, uint32 *mpls_oam_native_eth_over_pwe_classify);

typedef int (*algo_oam_db_oam_primary_vlan_oam_lif_set_cb)(
    int unit, dnx_algo_res_t oam_primary_vlan_oam_lif);

typedef int (*algo_oam_db_oam_primary_vlan_oam_lif_get_cb)(
    int unit, dnx_algo_res_t *oam_primary_vlan_oam_lif);

typedef int (*algo_oam_db_oam_primary_vlan_oam_lif_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_oam_db_oam_primary_vlan_oam_lif_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_oam_db_oam_primary_vlan_oam_lif_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_oam_db_oam_primary_vlan_oam_lif_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

/*
 * STRUCTs
 */

typedef struct {
    algo_oam_db_oam_group_id_set_cb set;
    algo_oam_db_oam_group_id_get_cb get;
    algo_oam_db_oam_group_id_create_cb create;
    algo_oam_db_oam_group_id_allocate_single_cb allocate_single;
    algo_oam_db_oam_group_id_free_single_cb free_single;
    algo_oam_db_oam_group_id_is_allocated_cb is_allocated;
} algo_oam_db_oam_group_id_cbs;

typedef struct {
    algo_oam_db_oam_profile_id_ing_set_cb set;
    algo_oam_db_oam_profile_id_ing_get_cb get;
    algo_oam_db_oam_profile_id_ing_create_cb create;
    algo_oam_db_oam_profile_id_ing_allocate_single_cb allocate_single;
    algo_oam_db_oam_profile_id_ing_free_single_cb free_single;
    algo_oam_db_oam_profile_id_ing_is_allocated_cb is_allocated;
} algo_oam_db_oam_profile_id_ing_cbs;

typedef struct {
    algo_oam_db_oam_profile_id_eg_set_cb set;
    algo_oam_db_oam_profile_id_eg_get_cb get;
    algo_oam_db_oam_profile_id_eg_create_cb create;
    algo_oam_db_oam_profile_id_eg_allocate_single_cb allocate_single;
    algo_oam_db_oam_profile_id_eg_free_single_cb free_single;
    algo_oam_db_oam_profile_id_eg_is_allocated_cb is_allocated;
} algo_oam_db_oam_profile_id_eg_cbs;

typedef struct {
    algo_oam_db_oam_profile_id_ing_acc_set_cb set;
    algo_oam_db_oam_profile_id_ing_acc_get_cb get;
    algo_oam_db_oam_profile_id_ing_acc_create_cb create;
    algo_oam_db_oam_profile_id_ing_acc_allocate_single_cb allocate_single;
    algo_oam_db_oam_profile_id_ing_acc_free_single_cb free_single;
    algo_oam_db_oam_profile_id_ing_acc_is_allocated_cb is_allocated;
} algo_oam_db_oam_profile_id_ing_acc_cbs;

typedef struct {
    algo_oam_db_oam_profile_id_eg_acc_set_cb set;
    algo_oam_db_oam_profile_id_eg_acc_get_cb get;
    algo_oam_db_oam_profile_id_eg_acc_create_cb create;
    algo_oam_db_oam_profile_id_eg_acc_allocate_single_cb allocate_single;
    algo_oam_db_oam_profile_id_eg_acc_free_single_cb free_single;
    algo_oam_db_oam_profile_id_eg_acc_is_allocated_cb is_allocated;
} algo_oam_db_oam_profile_id_eg_acc_cbs;

typedef struct {
    algo_oam_db_oamp_v1_rmep_id_below_threshold_set_cb set;
    algo_oam_db_oamp_v1_rmep_id_below_threshold_get_cb get;
    algo_oam_db_oamp_v1_rmep_id_below_threshold_create_cb create;
    algo_oam_db_oamp_v1_rmep_id_below_threshold_allocate_single_cb allocate_single;
    algo_oam_db_oamp_v1_rmep_id_below_threshold_free_single_cb free_single;
    algo_oam_db_oamp_v1_rmep_id_below_threshold_is_allocated_cb is_allocated;
    algo_oam_db_oamp_v1_rmep_id_below_threshold_get_next_cb get_next;
} algo_oam_db_oamp_v1_rmep_id_below_threshold_cbs;

typedef struct {
    algo_oam_db_oamp_v1_rmep_id_above_threshold_set_cb set;
    algo_oam_db_oamp_v1_rmep_id_above_threshold_get_cb get;
    algo_oam_db_oamp_v1_rmep_id_above_threshold_create_cb create;
    algo_oam_db_oamp_v1_rmep_id_above_threshold_allocate_single_cb allocate_single;
    algo_oam_db_oamp_v1_rmep_id_above_threshold_free_single_cb free_single;
    algo_oam_db_oamp_v1_rmep_id_above_threshold_is_allocated_cb is_allocated;
    algo_oam_db_oamp_v1_rmep_id_above_threshold_get_next_cb get_next;
} algo_oam_db_oamp_v1_rmep_id_above_threshold_cbs;

typedef struct {
    algo_oam_db_oamp_itmh_pph_priority_profile_set_cb set;
    algo_oam_db_oamp_itmh_pph_priority_profile_get_cb get;
    algo_oam_db_oamp_itmh_pph_priority_profile_create_cb create;
    algo_oam_db_oamp_itmh_pph_priority_profile_allocate_single_cb allocate_single;
    algo_oam_db_oamp_itmh_pph_priority_profile_free_single_cb free_single;
    algo_oam_db_oamp_itmh_pph_priority_profile_profile_data_get_cb profile_data_get;
} algo_oam_db_oamp_itmh_pph_priority_profile_cbs;

typedef struct {
    algo_oam_db_oam_mpls_pwe_exp_ttl_profile_set_cb set;
    algo_oam_db_oam_mpls_pwe_exp_ttl_profile_get_cb get;
    algo_oam_db_oam_mpls_pwe_exp_ttl_profile_create_cb create;
    algo_oam_db_oam_mpls_pwe_exp_ttl_profile_allocate_single_cb allocate_single;
    algo_oam_db_oam_mpls_pwe_exp_ttl_profile_free_single_cb free_single;
    algo_oam_db_oam_mpls_pwe_exp_ttl_profile_profile_data_get_cb profile_data_get;
} algo_oam_db_oam_mpls_pwe_exp_ttl_profile_cbs;

typedef struct {
    algo_oam_db_oamp_punt_event_prof_template_set_cb set;
    algo_oam_db_oamp_punt_event_prof_template_get_cb get;
    algo_oam_db_oamp_punt_event_prof_template_create_cb create;
    algo_oam_db_oamp_punt_event_prof_template_allocate_single_cb allocate_single;
    algo_oam_db_oamp_punt_event_prof_template_free_single_cb free_single;
    algo_oam_db_oamp_punt_event_prof_template_exchange_cb exchange;
    algo_oam_db_oamp_punt_event_prof_template_profile_data_get_cb profile_data_get;
} algo_oam_db_oamp_punt_event_prof_template_cbs;

typedef struct {
    algo_oam_db_oam_sa_mac_msb_profile_template_set_cb set;
    algo_oam_db_oam_sa_mac_msb_profile_template_get_cb get;
    algo_oam_db_oam_sa_mac_msb_profile_template_create_cb create;
    algo_oam_db_oam_sa_mac_msb_profile_template_allocate_single_cb allocate_single;
    algo_oam_db_oam_sa_mac_msb_profile_template_free_single_cb free_single;
} algo_oam_db_oam_sa_mac_msb_profile_template_cbs;

typedef struct {
    algo_oam_db_eth_oam_tpid_profile_set_cb set;
    algo_oam_db_eth_oam_tpid_profile_get_cb get;
    algo_oam_db_eth_oam_tpid_profile_create_cb create;
    algo_oam_db_eth_oam_tpid_profile_allocate_single_cb allocate_single;
    algo_oam_db_eth_oam_tpid_profile_free_single_cb free_single;
} algo_oam_db_eth_oam_tpid_profile_cbs;

typedef struct {
    algo_oam_db_oam_group_icc_profile_set_cb set;
    algo_oam_db_oam_group_icc_profile_get_cb get;
    algo_oam_db_oam_group_icc_profile_create_cb create;
    algo_oam_db_oam_group_icc_profile_allocate_single_cb allocate_single;
    algo_oam_db_oam_group_icc_profile_free_single_cb free_single;
    algo_oam_db_oam_group_icc_profile_profile_get_cb profile_get;
} algo_oam_db_oam_group_icc_profile_cbs;

typedef struct {
    algo_oam_db_oam_mep_profile_set_cb set;
    algo_oam_db_oam_mep_profile_get_cb get;
    algo_oam_db_oam_mep_profile_create_cb create;
    algo_oam_db_oam_mep_profile_allocate_single_cb allocate_single;
    algo_oam_db_oam_mep_profile_free_single_cb free_single;
    algo_oam_db_oam_mep_profile_exchange_cb exchange;
    algo_oam_db_oam_mep_profile_replace_data_cb replace_data;
    algo_oam_db_oam_mep_profile_profile_data_get_cb profile_data_get;
} algo_oam_db_oam_mep_profile_cbs;

typedef struct {
    algo_oam_db_oam_da_mac_msb_profile_template_set_cb set;
    algo_oam_db_oam_da_mac_msb_profile_template_get_cb get;
    algo_oam_db_oam_da_mac_msb_profile_template_create_cb create;
    algo_oam_db_oam_da_mac_msb_profile_template_allocate_single_cb allocate_single;
    algo_oam_db_oam_da_mac_msb_profile_template_free_single_cb free_single;
    algo_oam_db_oam_da_mac_msb_profile_template_exchange_cb exchange;
    algo_oam_db_oam_da_mac_msb_profile_template_profile_data_get_cb profile_data_get;
} algo_oam_db_oam_da_mac_msb_profile_template_cbs;

typedef struct {
    algo_oam_db_oam_da_mac_lsb_profile_template_set_cb set;
    algo_oam_db_oam_da_mac_lsb_profile_template_get_cb get;
    algo_oam_db_oam_da_mac_lsb_profile_template_create_cb create;
    algo_oam_db_oam_da_mac_lsb_profile_template_allocate_single_cb allocate_single;
    algo_oam_db_oam_da_mac_lsb_profile_template_free_single_cb free_single;
    algo_oam_db_oam_da_mac_lsb_profile_template_exchange_cb exchange;
    algo_oam_db_oam_da_mac_lsb_profile_template_profile_data_get_cb profile_data_get;
} algo_oam_db_oam_da_mac_lsb_profile_template_cbs;

typedef struct {
    algo_oam_db_oam_default_mep_profiles_set_cb set;
    algo_oam_db_oam_default_mep_profiles_get_cb get;
    algo_oam_db_oam_default_mep_profiles_create_cb create;
    algo_oam_db_oam_default_mep_profiles_allocate_single_cb allocate_single;
    algo_oam_db_oam_default_mep_profiles_free_single_cb free_single;
    algo_oam_db_oam_default_mep_profiles_is_allocated_cb is_allocated;
    algo_oam_db_oam_default_mep_profiles_get_next_cb get_next;
} algo_oam_db_oam_default_mep_profiles_cbs;

typedef struct {
    algo_oam_db_oam_trap_tcam_index_set_cb set;
    algo_oam_db_oam_trap_tcam_index_get_cb get;
    algo_oam_db_oam_trap_tcam_index_create_cb create;
    algo_oam_db_oam_trap_tcam_index_allocate_single_cb allocate_single;
    algo_oam_db_oam_trap_tcam_index_free_single_cb free_single;
    algo_oam_db_oam_trap_tcam_index_exchange_cb exchange;
    algo_oam_db_oam_trap_tcam_index_replace_data_cb replace_data;
    algo_oam_db_oam_trap_tcam_index_profile_data_get_cb profile_data_get;
} algo_oam_db_oam_trap_tcam_index_cbs;

typedef struct {
    algo_oam_db_slm_oamp_measurement_period_set_cb set;
    algo_oam_db_slm_oamp_measurement_period_get_cb get;
    algo_oam_db_slm_oamp_measurement_period_create_cb create;
    algo_oam_db_slm_oamp_measurement_period_allocate_single_cb allocate_single;
    algo_oam_db_slm_oamp_measurement_period_free_single_cb free_single;
    algo_oam_db_slm_oamp_measurement_period_profile_data_get_cb profile_data_get;
    algo_oam_db_slm_oamp_measurement_period_profile_get_cb profile_get;
} algo_oam_db_slm_oamp_measurement_period_cbs;

typedef struct {
    algo_oam_db_mpls_tp_mdl_ignore_set_cb set;
    algo_oam_db_mpls_tp_mdl_ignore_get_cb get;
} algo_oam_db_mpls_tp_mdl_ignore_cbs;

typedef struct {
    algo_oam_db_eth_dmac_mdl_match_check_set_cb set;
    algo_oam_db_eth_dmac_mdl_match_check_get_cb get;
} algo_oam_db_eth_dmac_mdl_match_check_cbs;

typedef struct {
    algo_oam_db_oamp_v2_stamp_tlv_profile_set_cb set;
    algo_oam_db_oamp_v2_stamp_tlv_profile_get_cb get;
    algo_oam_db_oamp_v2_stamp_tlv_profile_create_cb create;
    algo_oam_db_oamp_v2_stamp_tlv_profile_allocate_single_cb allocate_single;
    algo_oam_db_oamp_v2_stamp_tlv_profile_free_single_cb free_single;
    algo_oam_db_oamp_v2_stamp_tlv_profile_exchange_cb exchange;
    algo_oam_db_oamp_v2_stamp_tlv_profile_profile_data_get_cb profile_data_get;
    algo_oam_db_oamp_v2_stamp_tlv_profile_profile_get_cb profile_get;
} algo_oam_db_oamp_v2_stamp_tlv_profile_cbs;

typedef struct {
    algo_oam_db_oamp_v2_tlv_profile_set_cb set;
    algo_oam_db_oamp_v2_tlv_profile_get_cb get;
    algo_oam_db_oamp_v2_tlv_profile_create_cb create;
    algo_oam_db_oamp_v2_tlv_profile_allocate_single_cb allocate_single;
    algo_oam_db_oamp_v2_tlv_profile_free_single_cb free_single;
    algo_oam_db_oamp_v2_tlv_profile_exchange_cb exchange;
    algo_oam_db_oamp_v2_tlv_profile_profile_data_get_cb profile_data_get;
    algo_oam_db_oamp_v2_tlv_profile_profile_get_cb profile_get;
} algo_oam_db_oamp_v2_tlv_profile_cbs;

typedef struct {
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_set_cb set;
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_get_cb get;
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_create_cb create;
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_allocate_single_cb allocate_single;
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_free_single_cb free_single;
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_exchange_cb exchange;
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_profile_data_get_cb profile_data_get;
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_profile_get_cb profile_get;
} algo_oam_db_oamp_v2_oam_ch_2_small_profile_cbs;

typedef struct {
    algo_oam_db_oam_server_device_index_set_cb set;
    algo_oam_db_oam_server_device_index_get_cb get;
    algo_oam_db_oam_server_device_index_create_cb create;
    algo_oam_db_oam_server_device_index_allocate_single_cb allocate_single;
    algo_oam_db_oam_server_device_index_free_single_cb free_single;
    algo_oam_db_oam_server_device_index_profile_get_cb profile_get;
} algo_oam_db_oam_server_device_index_cbs;

typedef struct {
    algo_oam_db_mpls_oam_native_eth_over_pwe_classify_set_cb set;
    algo_oam_db_mpls_oam_native_eth_over_pwe_classify_get_cb get;
} algo_oam_db_mpls_oam_native_eth_over_pwe_classify_cbs;

typedef struct {
    algo_oam_db_oam_primary_vlan_oam_lif_set_cb set;
    algo_oam_db_oam_primary_vlan_oam_lif_get_cb get;
    algo_oam_db_oam_primary_vlan_oam_lif_create_cb create;
    algo_oam_db_oam_primary_vlan_oam_lif_allocate_single_cb allocate_single;
    algo_oam_db_oam_primary_vlan_oam_lif_free_single_cb free_single;
    algo_oam_db_oam_primary_vlan_oam_lif_is_allocated_cb is_allocated;
} algo_oam_db_oam_primary_vlan_oam_lif_cbs;

typedef struct {
    algo_oam_db_is_init_cb is_init;
    algo_oam_db_init_cb init;
    algo_oam_db_oam_group_id_cbs oam_group_id;
    algo_oam_db_oam_profile_id_ing_cbs oam_profile_id_ing;
    algo_oam_db_oam_profile_id_eg_cbs oam_profile_id_eg;
    algo_oam_db_oam_profile_id_ing_acc_cbs oam_profile_id_ing_acc;
    algo_oam_db_oam_profile_id_eg_acc_cbs oam_profile_id_eg_acc;
    algo_oam_db_oamp_v1_rmep_id_below_threshold_cbs oamp_v1_rmep_id_below_threshold;
    algo_oam_db_oamp_v1_rmep_id_above_threshold_cbs oamp_v1_rmep_id_above_threshold;
    algo_oam_db_oamp_itmh_pph_priority_profile_cbs oamp_itmh_pph_priority_profile;
    algo_oam_db_oam_mpls_pwe_exp_ttl_profile_cbs oam_mpls_pwe_exp_ttl_profile;
    algo_oam_db_oamp_punt_event_prof_template_cbs oamp_punt_event_prof_template;
    algo_oam_db_oam_sa_mac_msb_profile_template_cbs oam_sa_mac_msb_profile_template;
    algo_oam_db_eth_oam_tpid_profile_cbs eth_oam_tpid_profile;
    algo_oam_db_oam_group_icc_profile_cbs oam_group_icc_profile;
    algo_oam_db_oam_mep_profile_cbs oam_mep_profile;
    algo_oam_db_oam_da_mac_msb_profile_template_cbs oam_da_mac_msb_profile_template;
    algo_oam_db_oam_da_mac_lsb_profile_template_cbs oam_da_mac_lsb_profile_template;
    algo_oam_db_oam_default_mep_profiles_cbs oam_default_mep_profiles;
    algo_oam_db_oam_trap_tcam_index_cbs oam_trap_tcam_index;
    algo_oam_db_slm_oamp_measurement_period_cbs slm_oamp_measurement_period;
    algo_oam_db_mpls_tp_mdl_ignore_cbs mpls_tp_mdl_ignore;
    algo_oam_db_eth_dmac_mdl_match_check_cbs eth_dmac_mdl_match_check;
    algo_oam_db_oamp_v2_stamp_tlv_profile_cbs oamp_v2_stamp_tlv_profile;
    algo_oam_db_oamp_v2_tlv_profile_cbs oamp_v2_tlv_profile;
    algo_oam_db_oamp_v2_oam_ch_2_small_profile_cbs oamp_v2_oam_ch_2_small_profile;
    algo_oam_db_oam_server_device_index_cbs oam_server_device_index;
    algo_oam_db_mpls_oam_native_eth_over_pwe_classify_cbs mpls_oam_native_eth_over_pwe_classify;
    algo_oam_db_oam_primary_vlan_oam_lif_cbs oam_primary_vlan_oam_lif;
} algo_oam_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern algo_oam_db_cbs algo_oam_db;

#endif /* __ALGO_OAM_ACCESS_H__ */

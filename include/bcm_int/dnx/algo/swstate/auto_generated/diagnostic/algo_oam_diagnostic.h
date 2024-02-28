/** \file algo/swstate/auto_generated/diagnostic/algo_oam_diagnostic.h
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

#ifndef __DNX_ALGO_OAM_DIAGNOSTIC_H__
#define __DNX_ALGO_OAM_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_oam_types.h>
#include <bcm_int/dnx/algo/oam/algo_oam.h>
#include <bcm_int/dnx/algo/oamp/algo_oamp.h>
#include <bcm_int/dnx/algo/oamp/algo_oamp_v1.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <src/bcm/dnx/oam/oam_oamp.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    ALGO_OAM_DB_INFO,
    ALGO_OAM_DB_OAM_GROUP_ID_INFO,
    ALGO_OAM_DB_OAM_PROFILE_ID_ING_INFO,
    ALGO_OAM_DB_OAM_PROFILE_ID_EG_INFO,
    ALGO_OAM_DB_OAM_PROFILE_ID_ING_ACC_INFO,
    ALGO_OAM_DB_OAM_PROFILE_ID_EG_ACC_INFO,
    ALGO_OAM_DB_OAMP_V1_RMEP_ID_BELOW_THRESHOLD_INFO,
    ALGO_OAM_DB_OAMP_V1_RMEP_ID_ABOVE_THRESHOLD_INFO,
    ALGO_OAM_DB_OAMP_ITMH_PPH_PRIORITY_PROFILE_INFO,
    ALGO_OAM_DB_OAM_MPLS_PWE_EXP_TTL_PROFILE_INFO,
    ALGO_OAM_DB_OAMP_PUNT_EVENT_PROF_TEMPLATE_INFO,
    ALGO_OAM_DB_OAM_SA_MAC_MSB_PROFILE_TEMPLATE_INFO,
    ALGO_OAM_DB_ETH_OAM_TPID_PROFILE_INFO,
    ALGO_OAM_DB_OAM_GROUP_ICC_PROFILE_INFO,
    ALGO_OAM_DB_OAM_MEP_PROFILE_INFO,
    ALGO_OAM_DB_OAM_DA_MAC_MSB_PROFILE_TEMPLATE_INFO,
    ALGO_OAM_DB_OAM_DA_MAC_LSB_PROFILE_TEMPLATE_INFO,
    ALGO_OAM_DB_OAM_DEFAULT_MEP_PROFILES_INFO,
    ALGO_OAM_DB_OAM_TRAP_TCAM_INDEX_INFO,
    ALGO_OAM_DB_SLM_OAMP_MEASUREMENT_PERIOD_INFO,
    ALGO_OAM_DB_MPLS_TP_MDL_IGNORE_INFO,
    ALGO_OAM_DB_ETH_DMAC_MDL_MATCH_CHECK_INFO,
    ALGO_OAM_DB_OAMP_V2_STAMP_TLV_PROFILE_INFO,
    ALGO_OAM_DB_OAMP_V2_TLV_PROFILE_INFO,
    ALGO_OAM_DB_OAMP_V2_OAM_CH_2_SMALL_PROFILE_INFO,
    ALGO_OAM_DB_OAM_SERVER_DEVICE_INDEX_INFO,
    ALGO_OAM_DB_MPLS_OAM_NATIVE_ETH_OVER_PWE_CLASSIFY_INFO,
    ALGO_OAM_DB_OAM_PRIMARY_VLAN_OAM_LIF_INFO,
    ALGO_OAM_DB_INFO_NOF_ENTRIES
} sw_state_algo_oam_db_layout_e;


extern dnx_sw_state_diagnostic_info_t algo_oam_db_info[SOC_MAX_NUM_DEVICES][ALGO_OAM_DB_INFO_NOF_ENTRIES];

extern const char* algo_oam_db_layout_str[ALGO_OAM_DB_INFO_NOF_ENTRIES];
int algo_oam_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_group_id_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_profile_id_ing_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_profile_id_eg_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_profile_id_ing_acc_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_profile_id_eg_acc_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oamp_v1_rmep_id_below_threshold_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oamp_v1_rmep_id_above_threshold_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oamp_itmh_pph_priority_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_mpls_pwe_exp_ttl_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oamp_punt_event_prof_template_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_sa_mac_msb_profile_template_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_eth_oam_tpid_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_group_icc_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_mep_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_da_mac_msb_profile_template_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_da_mac_lsb_profile_template_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_default_mep_profiles_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_trap_tcam_index_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_slm_oamp_measurement_period_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_mpls_tp_mdl_ignore_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_eth_dmac_mdl_match_check_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oamp_v2_stamp_tlv_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oamp_v2_tlv_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oamp_v2_oam_ch_2_small_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_server_device_index_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_mpls_oam_native_eth_over_pwe_classify_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_oam_db_oam_primary_vlan_oam_lif_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_ALGO_OAM_DIAGNOSTIC_H__ */

/** \file algo/swstate/auto_generated/diagnostic/algo_lif_profile_diagnostic.h
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

#ifndef __DNX_ALGO_LIF_PROFILE_DIAGNOSTIC_H__
#define __DNX_ALGO_LIF_PROFILE_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_lif_profile_types.h>
#include <bcm/switch.h>
#include <bcm_int/dnx/algo/lif_mngr/algo_in_lif_profile.h>
#include <bcm_int/dnx/algo/lif_mngr/algo_out_lif_profile.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    ALGO_LIF_PROFILE_DB_INFO,
    ALGO_LIF_PROFILE_DB_IN_LIF_PROFILE_L3_ENABLERS_INFO,
    ALGO_LIF_PROFILE_DB_IN_LIF_LB_PROFILE_DISABLERS_FLAGS_INFO,
    ALGO_LIF_PROFILE_DB_IN_LIF_PROFILE_INFO,
    ALGO_LIF_PROFILE_DB_ETH_RIF_PROFILE_INFO,
    ALGO_LIF_PROFILE_DB_IN_LIF_DA_NOT_FOUND_DESTINATION_INFO,
    ALGO_LIF_PROFILE_DB_ETPP_OUT_LIF_PROFILE_INFO,
    ALGO_LIF_PROFILE_DB_ERPP_OUT_LIF_PROFILE_INFO,
    ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES
} sw_state_algo_lif_profile_db_layout_e;


extern dnx_sw_state_diagnostic_info_t algo_lif_profile_db_info[SOC_MAX_NUM_DEVICES][ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES];

extern const char* algo_lif_profile_db_layout_str[ALGO_LIF_PROFILE_DB_INFO_NOF_ENTRIES];
int algo_lif_profile_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_lif_profile_db_in_lif_profile_l3_enablers_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_lif_profile_db_in_lif_lb_profile_disablers_flags_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_lif_profile_db_in_lif_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_lif_profile_db_eth_rif_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_lif_profile_db_in_lif_da_not_found_destination_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_lif_profile_db_etpp_out_lif_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_lif_profile_db_erpp_out_lif_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_ALGO_LIF_PROFILE_DIAGNOSTIC_H__ */

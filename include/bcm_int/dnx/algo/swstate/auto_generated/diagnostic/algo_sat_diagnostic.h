/** \file algo/swstate/auto_generated/diagnostic/algo_sat_diagnostic.h
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

#ifndef __DNX_ALGO_SAT_DIAGNOSTIC_H__
#define __DNX_ALGO_SAT_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_sat_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/sat/sat.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    ALGO_SAT_DB_INFO,
    ALGO_SAT_DB_SAT_RES_ALLOC_GTF_ID_INFO,
    ALGO_SAT_DB_SAT_RES_ALLOC_CTF_ID_INFO,
    ALGO_SAT_DB_SAT_RES_ALLOC_TRAP_ID_INFO,
    ALGO_SAT_DB_SAT_RES_ALLOC_TRAP_DATA_INFO,
    ALGO_SAT_DB_SAT_PKT_HEADER_INFO,
    ALGO_SAT_DB_SAT_RES_ALLOC_PKT_HEADER_MEM_INFO,
    ALGO_SAT_DB_INFO_NOF_ENTRIES
} sw_state_algo_sat_db_layout_e;


extern dnx_sw_state_diagnostic_info_t algo_sat_db_info[SOC_MAX_NUM_DEVICES][ALGO_SAT_DB_INFO_NOF_ENTRIES];

extern const char* algo_sat_db_layout_str[ALGO_SAT_DB_INFO_NOF_ENTRIES];
int algo_sat_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_sat_db_sat_res_alloc_gtf_id_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_sat_db_sat_res_alloc_ctf_id_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_sat_db_sat_res_alloc_trap_id_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_sat_db_sat_res_alloc_trap_data_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_sat_db_sat_pkt_header_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_sat_db_sat_res_alloc_pkt_header_mem_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_ALGO_SAT_DIAGNOSTIC_H__ */

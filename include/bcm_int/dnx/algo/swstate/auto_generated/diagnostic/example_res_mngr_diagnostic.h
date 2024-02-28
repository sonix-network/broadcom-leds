/** \file algo/swstate/auto_generated/diagnostic/example_res_mngr_diagnostic.h
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

#ifndef __DNX_EXAMPLE_RES_MNGR_DIAGNOSTIC_H__
#define __DNX_EXAMPLE_RES_MNGR_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/example_res_mngr_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    ALGO_RES_MNGR_DB_INFO,
    ALGO_RES_MNGR_DB_RESOURCE_INFO,
    ALGO_RES_MNGR_DB_INFO_NOF_ENTRIES
} sw_state_algo_res_mngr_db_layout_e;


extern dnx_sw_state_diagnostic_info_t algo_res_mngr_db_info[SOC_MAX_NUM_DEVICES][ALGO_RES_MNGR_DB_INFO_NOF_ENTRIES];

extern const char* algo_res_mngr_db_layout_str[ALGO_RES_MNGR_DB_INFO_NOF_ENTRIES];
int algo_res_mngr_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_res_mngr_db_resource_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_EXAMPLE_RES_MNGR_DIAGNOSTIC_H__ */

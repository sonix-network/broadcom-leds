/** \file algo/swstate/auto_generated/layout/dnx_algo_field_layout.h
 *
 * sw state layout enum
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

#ifndef __DNX_ALGO_FIELD_LAYOUT_H__
#define __DNX_ALGO_FIELD_LAYOUT_H__

#include <include/soc/dnxc/swstate/dnxc_sw_state_layout.h>
#include <include/soc/dnxc/swstate/auto_generated/types/dnxc_module_ids_types.h>


int dnx_algo_field_init_layout_structure(int unit);

typedef enum
{
    DNX_SW_STATE_ALGO_FIELD_INFO_SW = DNXC_SW_STATE_LAYOUT_NODE_ID_GET(DNX_ALGO_FIELD_MODULE_ID, 0),
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__FIRST,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__FIRST_SUB = DNX_SW_STATE_ALGO_FIELD_INFO_SW__FIRST - 1,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_ALGO,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF_1_FFC,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF_2_FFC,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF_3_FFC,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__EPMF_FFC,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IFWD2_FFC,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_INITIAL_KEY_OCC_BMP,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_KEY_OCC_BMP,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF2_KEY_OCC_BMP,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF3_KEY_OCC_BMP,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__EPMF_KEY_OCC_BMP,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_LOOKUP_OCC_BMP,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF_A_FES_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF_B_FES_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__EPMF_FES_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF_A_FEM_PGM_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF_A_FEM_MAP_INDEX,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXT_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF2_CONTEXT_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF3_CONTEXT_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__EPMF_CONTEXT_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__USER_QUAL_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__USER_ACTION_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__FIELD_GROUP_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__SEXEM_APP_DB_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__LEXEM_APP_DB_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__ACE_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__ACE_KEY,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__ENTRY_TCAM_ACCESS_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__LINK_PROFILES,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__EXTERNAL_TCAM_OPCODE_CS_PROFILE_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__USER_APPTYPE_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__FLUSH_PROFILE_ID,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__LAST,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__LAST_SUB = DNX_SW_STATE_ALGO_FIELD_INFO_SW__LAST - 1,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_ALGO__FIRST,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_ALGO__FIRST_SUB = DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_ALGO__FIRST - 1,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_ALGO__DUMMY,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_ALGO__LAST,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_ALGO__LAST_SUB = DNX_SW_STATE_ALGO_FIELD_INFO_SW__KEY_ALGO__LAST - 1,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK__FIRST,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK__FIRST_SUB = DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK__FIRST - 1,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK__PROFILE_NUM,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK__NOF_LINKED,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK__LAST,
    DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK__LAST_SUB = DNX_SW_STATE_ALGO_FIELD_INFO_SW__IPMF1_CONTEXTS_LINK__LAST - 1,
    /*
     * Use DNXC_SW_STATE_LAYOUT_GET_PARAM_IDX macro to get the number of parameters
     */
    DNX_SW_STATE_ALGO_FIELD_INFO_SW_NOF_PARAMS,
} dnxc_sw_state_layout_dnx_algo_field_node_id_e;

#endif /* __DNX_ALGO_FIELD_LAYOUT_H__ */

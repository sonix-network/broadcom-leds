/** \file algo/swstate/auto_generated/diagnostic/dnx_algo_field_key_alloc_diagnostic.h
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

#ifndef __DNX_ALGO_FIELD_KEY_ALLOC_DIAGNOSTIC_H__
#define __DNX_ALGO_FIELD_KEY_ALLOC_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_algo_field_key_alloc_types.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_types.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_key_types.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_KEYS_AVAILABILITY_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_KEYS_AVAILABILITY_KEYS_AVAILABILITY_STAGE_INFO_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_KEYS_AVAILABILITY_KEYS_AVAILABILITY_STAGE_INFO_KEYS_AVAILABILITY_GROUP_INFO_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_KEYS_AVAILABILITY_KEYS_AVAILABILITY_STAGE_INFO_KEYS_AVAILABILITY_GROUP_INFO_STRUCTURE_IS_VALID_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_KEYS_AVAILABILITY_KEYS_AVAILABILITY_STAGE_INFO_KEYS_AVAILABILITY_GROUP_INFO_NOF_AVAILABLE_KEYS_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_KEYS_AVAILABILITY_KEYS_AVAILABILITY_STAGE_INFO_KEYS_AVAILABILITY_GROUP_INFO_FIRST_AVAILABLE_KEY_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_KEYS_AVAILABILITY_KEYS_AVAILABILITY_STAGE_INFO_NOF_AVAILABLE_KEYS_ON_STAGE_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_KEYS_AVAILABILITY_KEYS_AVAILABILITY_STAGE_INFO_FIRST_AVAILABLE_KEY_ON_STAGE_INFO,
    DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_INFO_NOF_ENTRIES
} sw_state_dnx_field_keys_per_stage_allocation_sw_layout_e;


extern dnx_sw_state_diagnostic_info_t dnx_field_keys_per_stage_allocation_sw_info[SOC_MAX_NUM_DEVICES][DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_INFO_NOF_ENTRIES];

extern const char* dnx_field_keys_per_stage_allocation_sw_layout_str[DNX_FIELD_KEYS_PER_STAGE_ALLOCATION_SW_INFO_NOF_ENTRIES];
int dnx_field_keys_per_stage_allocation_sw_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_field_keys_per_stage_allocation_sw_keys_availability_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_dump(
    int unit, int keys_availability_stage_info_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_dump(
    int unit, int keys_availability_stage_info_idx_0, int keys_availability_group_info_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_structure_is_valid_dump(
    int unit, int keys_availability_stage_info_idx_0, int keys_availability_group_info_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_nof_available_keys_dump(
    int unit, int keys_availability_stage_info_idx_0, int keys_availability_group_info_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_first_available_key_dump(
    int unit, int keys_availability_stage_info_idx_0, int keys_availability_group_info_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_nof_available_keys_on_stage_dump(
    int unit, int keys_availability_stage_info_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_first_available_key_on_stage_dump(
    int unit, int keys_availability_stage_info_idx_0, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __DNX_ALGO_FIELD_KEY_ALLOC_DIAGNOSTIC_H__ */
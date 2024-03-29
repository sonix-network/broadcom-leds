
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_FIELD_TCAM_HIT_INDICATION_DIAGNOSTIC_H__
#define __DNX_FIELD_TCAM_HIT_INDICATION_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_tcam_hit_indication_types.h>
#include <soc/dnxc/swstate/types/sw_state_bitmap.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    DNX_FIELD_TCAM_HIT_INDICATION_INFO,
    DNX_FIELD_TCAM_HIT_INDICATION_TCAM_ACTION_HIT_INDICATION_INFO,
    DNX_FIELD_TCAM_HIT_INDICATION_TCAM_ACTION_HIT_INDICATION_BMP_INFO,
    DNX_FIELD_TCAM_HIT_INDICATION_INFO_NOF_ENTRIES
} sw_state_dnx_field_tcam_hit_indication_layout_e;


extern dnx_sw_state_diagnostic_info_t dnx_field_tcam_hit_indication_info[SOC_MAX_NUM_DEVICES][DNX_FIELD_TCAM_HIT_INDICATION_INFO_NOF_ENTRIES];

extern const char* dnx_field_tcam_hit_indication_layout_str[DNX_FIELD_TCAM_HIT_INDICATION_INFO_NOF_ENTRIES];
int dnx_field_tcam_hit_indication_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_field_tcam_hit_indication_tcam_action_hit_indication_dump(
    int unit, int tcam_action_hit_indication_idx_0, int tcam_action_hit_indication_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_field_tcam_hit_indication_tcam_action_hit_indication_bmp_dump(
    int unit, int tcam_action_hit_indication_idx_0, int tcam_action_hit_indication_idx_1, int bmp_idx_0, dnx_sw_state_dump_filters_t filters);

#endif 

#endif 

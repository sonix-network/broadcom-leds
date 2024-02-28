
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */

#ifndef __DNX_FIELD_TCAM_HIT_INDICATION_LAYOUT_H__
#define __DNX_FIELD_TCAM_HIT_INDICATION_LAYOUT_H__

#include <include/soc/dnxc/swstate/dnxc_sw_state_layout.h>
#include <include/soc/dnxc/swstate/auto_generated/types/dnxc_module_ids_types.h>


int dnx_field_tcam_hit_indication_init_layout_structure(int unit);

typedef enum
{
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION = DNXC_SW_STATE_LAYOUT_NODE_ID_GET(DNX_FIELD_TCAM_HIT_INDICATION_MODULE_ID, 0),
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__FIRST,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__FIRST_SUB = DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__FIRST - 1,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__TCAM_ACTION_HIT_INDICATION,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__LAST,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__LAST_SUB = DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__LAST - 1,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__TCAM_ACTION_HIT_INDICATION__FIRST,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__TCAM_ACTION_HIT_INDICATION__FIRST_SUB = DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__TCAM_ACTION_HIT_INDICATION__FIRST - 1,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__TCAM_ACTION_HIT_INDICATION__BMP,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__TCAM_ACTION_HIT_INDICATION__LAST,
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__TCAM_ACTION_HIT_INDICATION__LAST_SUB = DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION__TCAM_ACTION_HIT_INDICATION__LAST - 1,
    
    DNX_SW_STATE_DNX_FIELD_TCAM_HIT_INDICATION_NOF_PARAMS,
} dnxc_sw_state_layout_dnx_field_tcam_hit_indication_node_id_e;

#endif 

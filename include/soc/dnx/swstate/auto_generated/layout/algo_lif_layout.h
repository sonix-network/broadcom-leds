
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */

#ifndef __ALGO_LIF_LAYOUT_H__
#define __ALGO_LIF_LAYOUT_H__

#include <include/soc/dnxc/swstate/dnxc_sw_state_layout.h>
#include <include/soc/dnxc/swstate/auto_generated/types/dnxc_module_ids_types.h>


int algo_lif_init_layout_structure(int unit);

typedef enum
{
    DNX_SW_STATE_LOCAL_OUTLIF_INFO = DNXC_SW_STATE_LAYOUT_NODE_ID_GET(ALGO_LIF_MODULE_ID, 0),
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__FIRST,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__FIRST_SUB = DNX_SW_STATE_LOCAL_OUTLIF_INFO__FIRST - 1,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__DISABLE_MDB_CLUSTERS,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__DISABLE_EEDB_DATA_BANKS,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__PHYSICAL_PHASE_TO_LOGICAL_PHASE_MAP,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__DYNAMIC_ALGO,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LAST,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LAST_SUB = DNX_SW_STATE_LOCAL_OUTLIF_INFO__LAST - 1,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__FIRST,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__FIRST_SUB = DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__FIRST - 1,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__ASSIGNED,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__IN_USE,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__USED_LOGICAL_PHASE,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__LL_IN_USE,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__LL_INDEX,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__EEDB_DATA_BANKS,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__LAST,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__LAST_SUB = DNX_SW_STATE_LOCAL_OUTLIF_INFO__OUTLIF_BANK_INFO__LAST - 1,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__FIRST,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__FIRST_SUB = DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__FIRST - 1,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__PHYSICAL_PHASE,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__ADDRESS_GRANULARITY,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__FIRST_BANK,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__LAST_BANK,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__FIRST_NO_LL_BANK,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__LAST_NO_LL_BANK,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__FIRST_LL_BANK,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__LAST_LL_BANK,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__DBAL_VALID_COMBINATIONS,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__LAST,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__LAST_SUB = DNX_SW_STATE_LOCAL_OUTLIF_INFO__LOGICAL_PHASE_INFO__LAST - 1,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__FIRST,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__FIRST_SUB = DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__FIRST - 1,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__BANK_OCCUPATION_BITMAP,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__OUTLIF_PREFIX_OCCUPATION_BITMAP,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__USED_DATA_BANK_PER_LOGICAL_PHASE,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__LAST,
    DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__LAST_SUB = DNX_SW_STATE_LOCAL_OUTLIF_INFO__EEDB_BANKS_INFO__LAST - 1,
    
    DNX_SW_STATE_LOCAL_OUTLIF_INFO_NOF_PARAMS,
} dnxc_sw_state_layout_algo_lif_node_id_e;

#endif 

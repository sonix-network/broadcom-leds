/** \file algo/swstate/auto_generated/layout/dnx_algo_flexe_core_layout.h
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

#ifndef __DNX_ALGO_FLEXE_CORE_LAYOUT_H__
#define __DNX_ALGO_FLEXE_CORE_LAYOUT_H__

#include <include/soc/dnxc/swstate/dnxc_sw_state_layout.h>
#include <include/soc/dnxc/swstate/auto_generated/types/dnxc_module_ids_types.h>


int dnx_algo_flexe_core_init_layout_structure(int unit);

typedef enum
{
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB = DNXC_SW_STATE_LAYOUT_NODE_ID_GET(DNX_ALGO_FLEXE_CORE_MODULE_ID, 0),
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FIRST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FIRST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FIRST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__DRV_TYPE,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__MAC_CLIENT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__LAST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__LAST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__LAST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__FIRST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__FIRST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__FIRST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__MUX_LPHY,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__DEMUX_LPHY,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__MAC_TIMESLOT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__SAR_RX_TIMESLOT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__SAR_TX_TIMESLOT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__RATEADPT_TIMESLOT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__INSTANCE,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__LAST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__LAST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__RESOURCE_ALLOC__LAST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__FIRST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__FIRST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__FIRST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__FLEXE_PORTS,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__CLIENTS_RX,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__CLIENTS_TX,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__LAST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__LAST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__GROUP__LAST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__FIRST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__FIRST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__FIRST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__GROUP,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__LOGICAL_PHY_ID,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__PHY_SPEED,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__SERDES_RATE,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__INSTANCE,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__NOF_INSTANCES,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__MUX_LPHY_BITMAP,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__DEMUX_LPHY_BITMAP,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__IS_100G,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__IS_BYPASS,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__IS_AM_TRANSPARENT,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__LAST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__LAST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__PORT__LAST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__MAC_CLIENT__FIRST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__MAC_CLIENT__FIRST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__MAC_CLIENT__FIRST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__MAC_CLIENT__TIMESLOT_BITMAP,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__MAC_CLIENT__LAST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__MAC_CLIENT__LAST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__MAC_CLIENT__LAST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__FIRST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__FIRST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__FIRST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__RX_TIMESLOT_BITMAP,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__TX_TIMESLOT_BITMAP,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__RX_CELL_MODE,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__TX_CELL_MODE,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__LAST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__LAST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__SAR_CLIENT__LAST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__FIRST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__FIRST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__FIRST - 1,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__TIMESLOT_BITMAP,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__RX_SLOT_MODE,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__TX_SLOT_MODE,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__LAST,
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__LAST_SUB = DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB__FLEXE_CLIENT__LAST - 1,
    /*
     * Use DNXC_SW_STATE_LAYOUT_GET_PARAM_IDX macro to get the number of parameters
     */
    DNX_SW_STATE_DNX_ALGO_FLEXE_CORE_DB_NOF_PARAMS,
} dnxc_sw_state_layout_dnx_algo_flexe_core_node_id_e;

#endif /* __DNX_ALGO_FLEXE_CORE_LAYOUT_H__ */

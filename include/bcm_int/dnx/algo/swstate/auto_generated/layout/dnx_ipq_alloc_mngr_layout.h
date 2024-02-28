/** \file algo/swstate/auto_generated/layout/dnx_ipq_alloc_mngr_layout.h
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

#ifndef __DNX_IPQ_ALLOC_MNGR_LAYOUT_H__
#define __DNX_IPQ_ALLOC_MNGR_LAYOUT_H__

#include <include/soc/dnxc/swstate/dnxc_sw_state_layout.h>
#include <include/soc/dnxc/swstate/auto_generated/types/dnxc_module_ids_types.h>


int dnx_ipq_alloc_mngr_init_layout_structure(int unit);

typedef enum
{
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB = DNXC_SW_STATE_LAYOUT_NODE_ID_GET(DNX_IPQ_ALLOC_MNGR_MODULE_ID, 0),
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FIRST,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FIRST_SUB = DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FIRST - 1,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__IPQ_ALLOC_MNGR,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__TC_VOQ_FLOW_MAP,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__TC_SYSPORT_MAP,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__LAST,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__LAST_SUB = DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__LAST - 1,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS__FIRST,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS__FIRST_SUB = DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS__FIRST - 1,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS__TYPE,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS__NOF_ALLOCATED_QUEUE_QUARTETS,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS__LAST,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS__LAST_SUB = DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__REGIONS__LAST - 1,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ__FIRST,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ__FIRST_SUB = DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ__FIRST - 1,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ__IS_ENHANCE_SCHEDULER_MODE,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ__MAX_MULTICAST_QUEUE,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ__LAST,
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ__LAST_SUB = DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB__FMQ__LAST - 1,
    /*
     * Use DNXC_SW_STATE_LAYOUT_GET_PARAM_IDX macro to get the number of parameters
     */
    DNX_SW_STATE_DNX_IPQ_ALLOC_MNGR_DB_NOF_PARAMS,
} dnxc_sw_state_layout_dnx_ipq_alloc_mngr_node_id_e;

#endif /* __DNX_IPQ_ALLOC_MNGR_LAYOUT_H__ */

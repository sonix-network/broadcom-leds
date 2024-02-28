/** \file algo/swstate/auto_generated/layout/algo_tunnel_layout.h
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

#ifndef __ALGO_TUNNEL_LAYOUT_H__
#define __ALGO_TUNNEL_LAYOUT_H__

#include <include/soc/dnxc/swstate/dnxc_sw_state_layout.h>
#include <include/soc/dnxc/swstate/auto_generated/types/dnxc_module_ids_types.h>


int algo_tunnel_init_layout_structure(int unit);

typedef enum
{
    DNX_SW_STATE_ALGO_TUNNEL_DB = DNXC_SW_STATE_LAYOUT_NODE_ID_GET(ALGO_TUNNEL_MODULE_ID, 0),
    DNX_SW_STATE_ALGO_TUNNEL_DB__FIRST,
    DNX_SW_STATE_ALGO_TUNNEL_DB__FIRST_SUB = DNX_SW_STATE_ALGO_TUNNEL_DB__FIRST - 1,
    DNX_SW_STATE_ALGO_TUNNEL_DB__TUNNEL_IPV6_SIP_PROFILE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__UDP_PORTS_PROFILE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__FLOW_GPORT_TO_TUNNEL_TYPE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROFILE_MAP,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROFILE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES,
    DNX_SW_STATE_ALGO_TUNNEL_DB__LAST,
    DNX_SW_STATE_ALGO_TUNNEL_DB__LAST_SUB = DNX_SW_STATE_ALGO_TUNNEL_DB__LAST - 1,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__FIRST,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__FIRST_SUB = DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__FIRST - 1,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADERS_PROFILE_IDENTIFIER,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__MAIN_HEADER_START_CURRENT_NEXT_PROTOCOL_ENABLE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__MAIN_HEADER_START_CURRENT_NEXT_PROTOCOL,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__MAIN_HEADER_ADDITIONAL_HEADERS_PACKET_SIZE_ENABLE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__MAIN_HEADER_ADDITIONAL_HEADERS_PACKET_SIZE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_0_START_CURRENT_NEXT_PROTOCOL_ENABLE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_0_START_CURRENT_NEXT_PROTOCOL,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_0_PACKET_SIZE_ENABLE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_0_PACKET_SIZE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_0_PROTOCOL_SPECIFIC_DATA,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_0_TYPE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_1_START_CURRENT_NEXT_PROTOCOL_ENABLE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_1_START_CURRENT_NEXT_PROTOCOL,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_1_PACKET_SIZE_ENABLE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_1_PACKET_SIZE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_1_PROTOCOL_SPECIFIC_DATA,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_1_TYPE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_2_START_CURRENT_NEXT_PROTOCOL_ENABLE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_2_START_CURRENT_NEXT_PROTOCOL,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_2_PACKET_SIZE_ENABLE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_2_PACKET_SIZE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_2_PROTOCOL_SPECIFIC_DATA,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__ADDITIONAL_HEADER_2_TYPE,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__LAST,
    DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__LAST_SUB = DNX_SW_STATE_ALGO_TUNNEL_DB__ADDITIONAL_HEADERS_PROPERTIES__LAST - 1,
    /*
     * Use DNXC_SW_STATE_LAYOUT_GET_PARAM_IDX macro to get the number of parameters
     */
    DNX_SW_STATE_ALGO_TUNNEL_DB_NOF_PARAMS,
} dnxc_sw_state_layout_algo_tunnel_node_id_e;

#endif /* __ALGO_TUNNEL_LAYOUT_H__ */

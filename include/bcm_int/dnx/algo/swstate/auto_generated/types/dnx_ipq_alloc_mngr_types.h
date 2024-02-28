/** \file algo/swstate/auto_generated/types/dnx_ipq_alloc_mngr_types.h
 *
 * sw state types (structs/enums/typedefs)
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

#ifndef __DNX_IPQ_ALLOC_MNGR_TYPES_H__
#define __DNX_IPQ_ALLOC_MNGR_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/ipq/ipq_alloc_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/cosq/cosq.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
/*
 * ENUMs
 */

typedef enum {
    DNX_IPQ_REGION_TYPE_NONE = 0,
    DNX_IPQ_REGION_TYPE_NORMAL = 1,
    DNX_IPQ_REGION_TYPE_INTERDIG = 2,
    /**
     * dummy enum field, must be the last
     */
    DNX_IPQ_REGION_TYPE_E_DUMMY
} dnx_ipq_region_type_e;

typedef enum {
    DNX_ALGO_IPQ_QUEUE_TYPE_INVALID = -1,
    DNX_ALGO_IPQ_QUEUE_TYPE_UNICAST = 0,
    DNX_ALGO_IPQ_QUEUE_TYPE_MULTICAST = 1,
    DNX_ALGO_IPQ_QUEUE_TYPE_UNICAST_INTERDIGITATED = 2,
    NUM_DNX_ALGO_IPQ_QUEUE_TYPE = 3,
    /**
     * dummy enum field, must be the last
     */
    DNX_IPQ_QUEUE_TYPE_E_DUMMY
} dnx_ipq_queue_type_e;

/*
 * STRUCTs
 */

typedef struct {
    bcm_core_t core;
    dnx_ipq_queue_type_e queue_type;
    uint32 nof_queue_bundles_to_alloc;
    uint32 start_element;
    uint32 end_element;
} dnx_ipq_alloc_info_t;

typedef struct {
    dnx_ipq_region_type_e type;
    uint32 nof_allocated_queue_quartets;
} dnx_ipq_region_t;

typedef struct {
    int is_enhance_scheduler_mode;
    int max_multicast_queue;
} dnx_ipq_fmq_info_t;

typedef struct {
    uint32 offset[DNX_COSQ_NOF_TC][DNX_COSQ_NOF_DP];
} dnx_ipq_tc_map_t;

typedef struct {
    dnx_ipq_region_t* regions;
    dnx_ipq_fmq_info_t fmq;
    dnx_algo_res_t ipq_alloc_mngr;
    dnx_algo_template_t* tc_voq_flow_map;
    dnx_algo_template_t tc_sysport_map;
} dnx_ipq_alloc_mngr_db_t;


#endif /* __DNX_IPQ_ALLOC_MNGR_TYPES_H__ */
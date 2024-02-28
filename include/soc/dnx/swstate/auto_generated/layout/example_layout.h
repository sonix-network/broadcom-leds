
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */

#ifndef __EXAMPLE_LAYOUT_H__
#define __EXAMPLE_LAYOUT_H__

#if defined(INCLUDE_CTEST)
#include <include/soc/dnxc/swstate/dnxc_sw_state_layout.h>
#include <include/soc/dnxc/swstate/auto_generated/types/dnxc_module_ids_types.h>


int example_init_layout_structure(int unit);

typedef enum
{
    DNX_SW_STATE_EXAMPLE = DNXC_SW_STATE_LAYOUT_NODE_ID_GET(EXAMPLE_MODULE_ID, 0),
    DNX_SW_STATE_EXAMPLE__FIRST,
    DNX_SW_STATE_EXAMPLE__FIRST_SUB = DNX_SW_STATE_EXAMPLE__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__MY_VARIABLE,
    DNX_SW_STATE_EXAMPLE__ROLLBACK_COMPARISON_EXCLUDED,
    DNX_SW_STATE_EXAMPLE__MY_ARRAY,
    DNX_SW_STATE_EXAMPLE__TWO_DIMENTIONAL_ARRAY,
    DNX_SW_STATE_EXAMPLE__DYNAMIC_ARRAY,
    DNX_SW_STATE_EXAMPLE__DYNAMIC_ARRAY_ZERO_SIZE,
    DNX_SW_STATE_EXAMPLE__DYNAMIC_DYNAMIC_ARRAY,
    DNX_SW_STATE_EXAMPLE__DYNAMIC_ARRAY_STATIC,
    DNX_SW_STATE_EXAMPLE__COUNTER_TEST,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY_ALLOC_EXCEPTION,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY_DYN_DNXDATA,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY_DNXDATA_DYN,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY_DNXDATA_DNXDATA,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY_STATIC_DNXDATA_DYN,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY_STATIC_DYN_DNXDATA,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY_STATIC_DNXDATA_DNXDATA,
    DNX_SW_STATE_EXAMPLE__DNXDATA_ARRAY_TABLE_DATA,
    DNX_SW_STATE_EXAMPLE__ARRAY_RANGE_EXAMPLE,
    DNX_SW_STATE_EXAMPLE__VALUE_RANGE_TEST,
    DNX_SW_STATE_EXAMPLE__BITMAP_VARIABLE,
    DNX_SW_STATE_EXAMPLE__BITMAP_FIXED,
    DNX_SW_STATE_EXAMPLE__BITMAP_DNX_DATA,
    DNX_SW_STATE_EXAMPLE__BITMAP_EXCLUDE_EXAMPLE,
    DNX_SW_STATE_EXAMPLE__BITMAP_INCLUDE_ONLY_EXAMPLE,
    DNX_SW_STATE_EXAMPLE__BITMAP_ARRAY,
    DNX_SW_STATE_EXAMPLE__BITMAP_VARIABLE_ACCESS,
    DNX_SW_STATE_EXAMPLE__BUFFER_ARRAY,
    DNX_SW_STATE_EXAMPLE__BUFFER,
    DNX_SW_STATE_EXAMPLE__BUFFER_FIXED,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE,
    DNX_SW_STATE_EXAMPLE__LL,
    DNX_SW_STATE_EXAMPLE__MULTIHEAD_LL,
    DNX_SW_STATE_EXAMPLE__SORTED_MULTIHEAD_LL,
    DNX_SW_STATE_EXAMPLE__SORTED_LL,
    DNX_SW_STATE_EXAMPLE__BT,
    DNX_SW_STATE_EXAMPLE__HTB,
    DNX_SW_STATE_EXAMPLE__HTB_RH,
    DNX_SW_STATE_EXAMPLE__MULTIHEAD_HTB_RH,
    DNX_SW_STATE_EXAMPLE__INDEX_HTB_RH,
    DNX_SW_STATE_EXAMPLE__HTB_ARR,
    DNX_SW_STATE_EXAMPLE__INDEX_HTB,
    DNX_SW_STATE_EXAMPLE__OCC,
    DNX_SW_STATE_EXAMPLE__OCC2,
    DNX_SW_STATE_EXAMPLE__CB,
    DNX_SW_STATE_EXAMPLE__LEAF_STRUCT,
    DNX_SW_STATE_EXAMPLE__DEFRAGMENTED_CHUNK_EXAMPLE,
    DNX_SW_STATE_EXAMPLE__PACKED,
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS,
    DNX_SW_STATE_EXAMPLE__MY_UNION,
    DNX_SW_STATE_EXAMPLE__STRING,
    DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK,
    DNX_SW_STATE_EXAMPLE__PBMP_VARIABLE,
    DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES,
    DNX_SW_STATE_EXAMPLE__PRETTY_PRINT_EXAMPLE,
    DNX_SW_STATE_EXAMPLE__MUTEX_TEST,
    DNX_SW_STATE_EXAMPLE__SEM_TEST,
    DNX_SW_STATE_EXAMPLE__WRITE_DURING_WB_EXAMPLE,
    DNX_SW_STATE_EXAMPLE__ALLOC_AFTER_INIT_VARIABLE,
    DNX_SW_STATE_EXAMPLE__ALLOC_AFTER_INIT_TEST,
    DNX_SW_STATE_EXAMPLE__LAST,
    DNX_SW_STATE_EXAMPLE__LAST_SUB = DNX_SW_STATE_EXAMPLE__LAST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__FIRST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__FIRST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__DEFAULT_VALUE_L1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__LAST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__LAST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__LAST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__FIRST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__FIRST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__DEFAULT_VALUE_L2,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__LAST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__LAST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__LAST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__FIRST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__FIRST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_STATIC_STATIC,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__DEFAULT_VALUE_L3,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_DYNAMIC_DYNAMIC,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__LAST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__LAST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__LAST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_STATIC_STATIC__FIRST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_STATIC_STATIC__FIRST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_STATIC_STATIC__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_STATIC_STATIC__MY_VARIABLE,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_STATIC_STATIC__LAST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_STATIC_STATIC__LAST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_STATIC_STATIC__LAST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__DEFAULT_VALUE_L3__FIRST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__DEFAULT_VALUE_L3__FIRST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__DEFAULT_VALUE_L3__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__DEFAULT_VALUE_L3__MY_VARIABLE,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__DEFAULT_VALUE_L3__LAST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__DEFAULT_VALUE_L3__LAST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__DEFAULT_VALUE_L3__LAST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_DYNAMIC_DYNAMIC__FIRST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_DYNAMIC_DYNAMIC__FIRST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_DYNAMIC_DYNAMIC__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_DYNAMIC_DYNAMIC__MY_VARIABLE,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_DYNAMIC_DYNAMIC__LAST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_DYNAMIC_DYNAMIC__LAST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__ARRAY_DYNAMIC__ARRAY_DYNAMIC_DYNAMIC__LAST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__DEFAULT_VALUE_L2__FIRST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__DEFAULT_VALUE_L2__FIRST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__DEFAULT_VALUE_L2__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__DEFAULT_VALUE_L2__MY_VARIABLE,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__DEFAULT_VALUE_L2__LAST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__DEFAULT_VALUE_L2__LAST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__ARRAY_DNXDATA__DEFAULT_VALUE_L2__LAST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__DEFAULT_VALUE_L1__FIRST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__DEFAULT_VALUE_L1__FIRST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__DEFAULT_VALUE_L1__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__DEFAULT_VALUE_L1__MY_VARIABLE,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__DEFAULT_VALUE_L1__LAST,
    DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__DEFAULT_VALUE_L1__LAST_SUB = DNX_SW_STATE_EXAMPLE__DEFAULT_VALUE_TREE__DEFAULT_VALUE_L1__LAST - 1,
    DNX_SW_STATE_EXAMPLE__LEAF_STRUCT__FIRST,
    DNX_SW_STATE_EXAMPLE__LEAF_STRUCT__FIRST_SUB = DNX_SW_STATE_EXAMPLE__LEAF_STRUCT__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__LEAF_STRUCT__VAR,
    DNX_SW_STATE_EXAMPLE__LEAF_STRUCT__BUFF_VARIABLE,
    DNX_SW_STATE_EXAMPLE__LEAF_STRUCT__LAST,
    DNX_SW_STATE_EXAMPLE__LEAF_STRUCT__LAST_SUB = DNX_SW_STATE_EXAMPLE__LEAF_STRUCT__LAST - 1,
    DNX_SW_STATE_EXAMPLE__PACKED__FIRST,
    DNX_SW_STATE_EXAMPLE__PACKED__FIRST_SUB = DNX_SW_STATE_EXAMPLE__PACKED__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__PACKED__EXPECTO_PATRONUM,
    DNX_SW_STATE_EXAMPLE__PACKED__MY_INTEGER,
    DNX_SW_STATE_EXAMPLE__PACKED__LAST,
    DNX_SW_STATE_EXAMPLE__PACKED__LAST_SUB = DNX_SW_STATE_EXAMPLE__PACKED__LAST - 1,
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__FIRST,
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__FIRST_SUB = DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__FIRST - 1,
#ifdef BCM_WARM_BOOT_SUPPORT
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__VAR_WARM_BOOT_IFDEF,
#endif  
#ifndef BCM_WARM_BOOT_SUPPORT
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__VAR_WARM_BOOT_IFNDEF,
#endif  
#if defined(BCM_WARM_BOOT_SUPPORT)
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__VAR_WARM_BOOT_IF,
#endif  
#if defined(BCM_WARM_BOOT_SUPPORT) && defined(BCM_DNX_SUPPORT) 
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__INTEGER_MULTIPLE_FLAGS,
#endif  
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__BUFF_VARIABLE,
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__LAST,
    DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__LAST_SUB = DNX_SW_STATE_EXAMPLE__PARAMS_FLAGS__LAST - 1,
    DNX_SW_STATE_EXAMPLE__MY_UNION__FIRST,
    DNX_SW_STATE_EXAMPLE__MY_UNION__FIRST_SUB = DNX_SW_STATE_EXAMPLE__MY_UNION__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__MY_UNION__MY_INTEGER,
    DNX_SW_STATE_EXAMPLE__MY_UNION__MY_CHAR,
    DNX_SW_STATE_EXAMPLE__MY_UNION__LAST,
    DNX_SW_STATE_EXAMPLE__MY_UNION__LAST_SUB = DNX_SW_STATE_EXAMPLE__MY_UNION__LAST - 1,
    DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__FIRST,
    DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__FIRST_SUB = DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__STATIC_ARRAY_OF_P,
    DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__STATIC_ARRAY,
    DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__INTEGER_VARIABLE,
    DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__LAST,
    DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__LAST_SUB = DNX_SW_STATE_EXAMPLE__ALLOC_CHILD_CHECK__LAST - 1,
    DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES__FIRST,
    DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES__FIRST_SUB = DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES__FIRST - 1,
    DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES__LARGE_HTB,
    DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES__LARGE_INDEX_HTB,
    DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES__LAST,
    DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES__LAST_SUB = DNX_SW_STATE_EXAMPLE__LARGE_DS_EXAMPLES__LAST - 1,
    
    DNX_SW_STATE_EXAMPLE_NOF_PARAMS,
} dnxc_sw_state_layout_example_node_id_e;
#endif  

#endif 
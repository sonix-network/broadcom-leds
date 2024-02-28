/** \file algo/swstate/auto_generated/access/dnx_algo_field_key_alloc_access.h
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

#ifndef __DNX_ALGO_FIELD_KEY_ALLOC_ACCESS_H__
#define __DNX_ALGO_FIELD_KEY_ALLOC_ACCESS_H__

#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_algo_field_key_alloc_types.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_types.h>
#include <soc/dnx/swstate/auto_generated/types/dnx_field_key_types.h>
/*
 * TYPEDEFs
 */

typedef int (*dnx_field_keys_per_stage_allocation_sw_is_init_cb)(
    int unit, uint8 *is_init);

typedef int (*dnx_field_keys_per_stage_allocation_sw_init_cb)(
    int unit);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_range_read_cb)(
    int unit, uint32 from_idx, uint32 nof_elements, dnx_field_key_alloc_group_instruction_t *dest);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_range_write_cb)(
    int unit, uint32 from_idx, uint32 nof_elements, const dnx_field_key_alloc_group_instruction_t *source);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_range_fill_cb)(
    int unit, uint32 from_idx, uint32 nof_elements, dnx_field_key_alloc_group_instruction_t value);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_set_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 keys_availability_group_info_idx_0, CONST dnx_field_key_alloc_instruction_t *keys_availability_group_info);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_get_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 keys_availability_group_info_idx_0, dnx_field_key_alloc_instruction_t *keys_availability_group_info);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_range_read_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 from_idx, uint32 nof_elements, dnx_field_key_alloc_instruction_t *dest);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_range_write_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 from_idx, uint32 nof_elements, const dnx_field_key_alloc_instruction_t *source);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_range_fill_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 from_idx, uint32 nof_elements, dnx_field_key_alloc_instruction_t value);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_structure_is_valid_set_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 keys_availability_group_info_idx_0, uint8 structure_is_valid);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_structure_is_valid_get_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 keys_availability_group_info_idx_0, uint8 *structure_is_valid);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_nof_available_keys_set_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 keys_availability_group_info_idx_0, uint8 nof_available_keys);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_nof_available_keys_get_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 keys_availability_group_info_idx_0, uint8 *nof_available_keys);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_first_available_key_set_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 keys_availability_group_info_idx_0, uint8 first_available_key);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_first_available_key_get_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint32 keys_availability_group_info_idx_0, uint8 *first_available_key);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_nof_available_keys_on_stage_set_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint8 nof_available_keys_on_stage);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_nof_available_keys_on_stage_get_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint8 *nof_available_keys_on_stage);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_first_available_key_on_stage_set_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint8 first_available_key_on_stage);

typedef int (*dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_first_available_key_on_stage_get_cb)(
    int unit, uint32 keys_availability_stage_info_idx_0, uint8 *first_available_key_on_stage);

/*
 * STRUCTs
 */

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_structure_is_valid_set_cb set;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_structure_is_valid_get_cb get;
} dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_structure_is_valid_cbs;

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_nof_available_keys_set_cb set;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_nof_available_keys_get_cb get;
} dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_nof_available_keys_cbs;

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_first_available_key_set_cb set;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_first_available_key_get_cb get;
} dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_first_available_key_cbs;

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_set_cb set;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_get_cb get;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_range_read_cb range_read;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_range_write_cb range_write;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_range_fill_cb range_fill;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_structure_is_valid_cbs structure_is_valid;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_nof_available_keys_cbs nof_available_keys;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_first_available_key_cbs first_available_key;
} dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_cbs;

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_nof_available_keys_on_stage_set_cb set;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_nof_available_keys_on_stage_get_cb get;
} dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_nof_available_keys_on_stage_cbs;

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_first_available_key_on_stage_set_cb set;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_first_available_key_on_stage_get_cb get;
} dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_first_available_key_on_stage_cbs;

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_range_read_cb range_read;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_range_write_cb range_write;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_range_fill_cb range_fill;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_keys_availability_group_info_cbs keys_availability_group_info;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_nof_available_keys_on_stage_cbs nof_available_keys_on_stage;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_first_available_key_on_stage_cbs first_available_key_on_stage;
} dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_cbs;

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_keys_availability_keys_availability_stage_info_cbs keys_availability_stage_info;
} dnx_field_keys_per_stage_allocation_sw_keys_availability_cbs;

typedef struct {
    dnx_field_keys_per_stage_allocation_sw_is_init_cb is_init;
    dnx_field_keys_per_stage_allocation_sw_init_cb init;
    dnx_field_keys_per_stage_allocation_sw_keys_availability_cbs keys_availability;
} dnx_field_keys_per_stage_allocation_sw_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern dnx_field_keys_per_stage_allocation_sw_cbs dnx_field_keys_per_stage_allocation_sw;

#endif /* __DNX_ALGO_FIELD_KEY_ALLOC_ACCESS_H__ */

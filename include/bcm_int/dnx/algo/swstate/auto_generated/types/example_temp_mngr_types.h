/** \file algo/swstate/auto_generated/types/example_temp_mngr_types.h
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

#ifndef __EXAMPLE_TEMP_MNGR_TYPES_H__
#define __EXAMPLE_TEMP_MNGR_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
/*
 * STRUCTs
 */

typedef struct {
    uint8 element_8;
    uint16 element_16;
    uint32 element_32;
    int element_int;
} template_mngr_example_data_t;

typedef struct {
    dnx_algo_template_t template_test_bad_values;
    dnx_algo_template_t template;
} example_temp_mngr_sw_state_t;


#endif /* __EXAMPLE_TEMP_MNGR_TYPES_H__ */

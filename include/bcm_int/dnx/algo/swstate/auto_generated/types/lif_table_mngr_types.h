/** \file algo/swstate/auto_generated/types/lif_table_mngr_types.h
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

#ifndef __LIF_TABLE_MNGR_TYPES_H__
#define __LIF_TABLE_MNGR_TYPES_H__

#include <soc/dnxc/swstate/dnxc_sw_state_h_includes.h>
#include <soc/dnxc/swstate/callbacks/sw_state_htb_callbacks.h>
#include <soc/dnxc/swstate/types/sw_state_hash_table.h>
/*
 * MACROs
 */

#define MAX_NOF_RESULT_TYPES 32

/*
 * STRUCTs
 */

typedef struct {
    int valid_fields;
} local_lif_info_t;

typedef struct {
    int8 result_type[MAX_NOF_RESULT_TYPES];
    int forbidden_fields_lo;
    int forbidden_fields_hi;
} lif_table_mngr_table_info_t;

typedef struct {
    sw_state_htbl_t valid_fields_per_egress_lif_htb;
    local_lif_info_t* valid_fields_per_ingress_lif1;
    local_lif_info_t* valid_fields_per_ingress_lif2;
    sw_state_htbl_t lif_table_info_htb;
} lif_table_mngr_sw_state_t;


#endif /* __LIF_TABLE_MNGR_TYPES_H__ */

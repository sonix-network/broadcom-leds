/** \file algo/swstate/auto_generated/access/dnx_ingress_reassembly_access.h
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

#ifndef __DNX_INGRESS_REASSEMBLY_ACCESS_H__
#define __DNX_INGRESS_REASSEMBLY_ACCESS_H__

#include <bcm_int/dnx/algo/swstate/auto_generated/types/dnx_ingress_reassembly_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/port/port_ingr_reassembly.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_egr_queuing.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_ingr_reassembly.h>
/*
 * TYPEDEFs
 */

typedef int (*dnx_ingress_reassembly_db_is_init_cb)(
    int unit, uint8 *is_init);

typedef int (*dnx_ingress_reassembly_db_init_cb)(
    int unit);

typedef int (*dnx_ingress_reassembly_db_alloc_set_cb)(
    int unit, uint32 alloc_idx_0, dnx_algo_res_t alloc);

typedef int (*dnx_ingress_reassembly_db_alloc_get_cb)(
    int unit, uint32 alloc_idx_0, dnx_algo_res_t *alloc);

typedef int (*dnx_ingress_reassembly_db_alloc_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

typedef int (*dnx_ingress_reassembly_db_alloc_create_cb)(
    int unit, uint32 alloc_idx_0, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_ingress_reassembly_db_alloc_allocate_single_cb)(
    int unit, uint32 alloc_idx_0, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_ingress_reassembly_db_alloc_free_single_cb)(
    int unit, uint32 alloc_idx_0, int element, void *extra_arguments);

typedef int (*dnx_ingress_reassembly_db_mapped_ports_set_cb)(
    int unit, uint32 mapped_ports_idx_0, dnx_algo_res_t mapped_ports);

typedef int (*dnx_ingress_reassembly_db_mapped_ports_get_cb)(
    int unit, uint32 mapped_ports_idx_0, dnx_algo_res_t *mapped_ports);

typedef int (*dnx_ingress_reassembly_db_mapped_ports_alloc_cb)(
    int unit, uint32 nof_instances_to_alloc_0);

typedef int (*dnx_ingress_reassembly_db_mapped_ports_create_cb)(
    int unit, uint32 mapped_ports_idx_0, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*dnx_ingress_reassembly_db_mapped_ports_allocate_single_cb)(
    int unit, uint32 mapped_ports_idx_0, uint32 flags, void *extra_arguments, int *element);

typedef int (*dnx_ingress_reassembly_db_mapped_ports_free_single_cb)(
    int unit, uint32 mapped_ports_idx_0, int element, void *extra_arguments);

typedef int (*dnx_ingress_reassembly_db_rcy_reassembly_context_set_cb)(
    int unit, uint32 reassembly_context_idx_0, uint32 reassembly_context_idx_1, uint32 reassembly_context_idx_2, uint32 reassembly_context);

typedef int (*dnx_ingress_reassembly_db_rcy_reassembly_context_get_cb)(
    int unit, uint32 reassembly_context_idx_0, uint32 reassembly_context_idx_1, uint32 reassembly_context_idx_2, uint32 *reassembly_context);

typedef int (*dnx_ingress_reassembly_db_mirror_info_reassembly_context_set_cb)(
    int unit, uint32 info_idx_0, uint32 info_idx_1, uint32 info_idx_2, uint32 reassembly_context);

typedef int (*dnx_ingress_reassembly_db_mirror_info_reassembly_context_get_cb)(
    int unit, uint32 info_idx_0, uint32 info_idx_1, uint32 info_idx_2, uint32 *reassembly_context);

typedef int (*dnx_ingress_reassembly_db_mirror_info_ref_count_set_cb)(
    int unit, uint32 info_idx_0, uint32 info_idx_1, uint32 info_idx_2, uint32 ref_count);

typedef int (*dnx_ingress_reassembly_db_mirror_info_ref_count_get_cb)(
    int unit, uint32 info_idx_0, uint32 info_idx_1, uint32 info_idx_2, uint32 *ref_count);

typedef int (*dnx_ingress_reassembly_db_disabled_context_set_cb)(
    int unit, uint32 disabled_context_idx_0, uint32 disabled_context);

typedef int (*dnx_ingress_reassembly_db_disabled_context_get_cb)(
    int unit, uint32 disabled_context_idx_0, uint32 *disabled_context);

/*
 * STRUCTs
 */

typedef struct {
    dnx_ingress_reassembly_db_alloc_set_cb set;
    dnx_ingress_reassembly_db_alloc_get_cb get;
    dnx_ingress_reassembly_db_alloc_alloc_cb alloc;
    dnx_ingress_reassembly_db_alloc_create_cb create;
    dnx_ingress_reassembly_db_alloc_allocate_single_cb allocate_single;
    dnx_ingress_reassembly_db_alloc_free_single_cb free_single;
} dnx_ingress_reassembly_db_alloc_cbs;

typedef struct {
    dnx_ingress_reassembly_db_mapped_ports_set_cb set;
    dnx_ingress_reassembly_db_mapped_ports_get_cb get;
    dnx_ingress_reassembly_db_mapped_ports_alloc_cb alloc;
    dnx_ingress_reassembly_db_mapped_ports_create_cb create;
    dnx_ingress_reassembly_db_mapped_ports_allocate_single_cb allocate_single;
    dnx_ingress_reassembly_db_mapped_ports_free_single_cb free_single;
} dnx_ingress_reassembly_db_mapped_ports_cbs;

typedef struct {
    dnx_ingress_reassembly_db_rcy_reassembly_context_set_cb set;
    dnx_ingress_reassembly_db_rcy_reassembly_context_get_cb get;
} dnx_ingress_reassembly_db_rcy_reassembly_context_cbs;

typedef struct {
    dnx_ingress_reassembly_db_rcy_reassembly_context_cbs reassembly_context;
} dnx_ingress_reassembly_db_rcy_cbs;

typedef struct {
    dnx_ingress_reassembly_db_mirror_info_reassembly_context_set_cb set;
    dnx_ingress_reassembly_db_mirror_info_reassembly_context_get_cb get;
} dnx_ingress_reassembly_db_mirror_info_reassembly_context_cbs;

typedef struct {
    dnx_ingress_reassembly_db_mirror_info_ref_count_set_cb set;
    dnx_ingress_reassembly_db_mirror_info_ref_count_get_cb get;
} dnx_ingress_reassembly_db_mirror_info_ref_count_cbs;

typedef struct {
    dnx_ingress_reassembly_db_mirror_info_reassembly_context_cbs reassembly_context;
    dnx_ingress_reassembly_db_mirror_info_ref_count_cbs ref_count;
} dnx_ingress_reassembly_db_mirror_info_cbs;

typedef struct {
    dnx_ingress_reassembly_db_mirror_info_cbs info;
} dnx_ingress_reassembly_db_mirror_cbs;

typedef struct {
    dnx_ingress_reassembly_db_disabled_context_set_cb set;
    dnx_ingress_reassembly_db_disabled_context_get_cb get;
} dnx_ingress_reassembly_db_disabled_context_cbs;

typedef struct {
    dnx_ingress_reassembly_db_is_init_cb is_init;
    dnx_ingress_reassembly_db_init_cb init;
    dnx_ingress_reassembly_db_alloc_cbs alloc;
    dnx_ingress_reassembly_db_mapped_ports_cbs mapped_ports;
    dnx_ingress_reassembly_db_rcy_cbs rcy;
    dnx_ingress_reassembly_db_mirror_cbs mirror;
    dnx_ingress_reassembly_db_disabled_context_cbs disabled_context;
} dnx_ingress_reassembly_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern dnx_ingress_reassembly_db_cbs dnx_ingress_reassembly_db;

#endif /* __DNX_INGRESS_REASSEMBLY_ACCESS_H__ */

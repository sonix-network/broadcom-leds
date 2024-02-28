/** \file algo/swstate/auto_generated/access/algo_mpls_access.h
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

#ifndef __ALGO_MPLS_ACCESS_H__
#define __ALGO_MPLS_ACCESS_H__

#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_mpls_types.h>
#include <bcm_int/dnx/algo/mpls/algo_mpls.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#include <bcm_int/dnx/mpls/mpls_tunnel_term.h>
/*
 * TYPEDEFs
 */

typedef int (*algo_mpls_db_is_init_cb)(
    int unit, uint8 *is_init);

typedef int (*algo_mpls_db_init_cb)(
    int unit);

typedef int (*algo_mpls_db_termination_profile_set_cb)(
    int unit, dnx_algo_template_t termination_profile);

typedef int (*algo_mpls_db_termination_profile_get_cb)(
    int unit, dnx_algo_template_t *termination_profile);

typedef int (*algo_mpls_db_termination_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_mpls_db_termination_profile_allocate_single_cb)(
    int unit, uint32 flags, dnx_mpls_termination_profile_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_mpls_db_termination_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_mpls_db_termination_profile_exchange_cb)(
    int unit, uint32 flags, int nof_references, const dnx_mpls_termination_profile_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_mpls_db_termination_profile_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_mpls_termination_profile_t *profile_data);

typedef int (*algo_mpls_db_push_profile_set_cb)(
    int unit, dnx_algo_template_t push_profile);

typedef int (*algo_mpls_db_push_profile_get_cb)(
    int unit, dnx_algo_template_t *push_profile);

typedef int (*algo_mpls_db_push_profile_create_cb)(
    int unit, dnx_algo_template_create_data_t * data, void *extra_arguments);

typedef int (*algo_mpls_db_push_profile_allocate_single_cb)(
    int unit, uint32 flags, dnx_jr_mode_mpls_push_profile_t *profile_data, void *extra_arguments, int *profile, uint8 *first_reference);

typedef int (*algo_mpls_db_push_profile_free_single_cb)(
    int unit, int profile, uint8 *last_reference);

typedef int (*algo_mpls_db_push_profile_exchange_cb)(
    int unit, uint32 flags, int nof_references, const dnx_jr_mode_mpls_push_profile_t *profile_data, int old_profile, const void *extra_arguments, int *new_profile, uint8 *first_reference, uint8 *last_reference);

typedef int (*algo_mpls_db_push_profile_profile_data_get_cb)(
    int unit, int profile, int *ref_count, dnx_jr_mode_mpls_push_profile_t *profile_data);

typedef int (*algo_mpls_db_label_range_profile_set_cb)(
    int unit, dnx_algo_res_t label_range_profile);

typedef int (*algo_mpls_db_label_range_profile_get_cb)(
    int unit, dnx_algo_res_t *label_range_profile);

typedef int (*algo_mpls_db_label_range_profile_create_cb)(
    int unit, dnx_algo_res_create_data_t * data, void *extra_arguments);

typedef int (*algo_mpls_db_label_range_profile_allocate_single_cb)(
    int unit, uint32 flags, void *extra_arguments, int *element);

typedef int (*algo_mpls_db_label_range_profile_free_single_cb)(
    int unit, int element, void *extra_arguments);

typedef int (*algo_mpls_db_label_range_profile_is_allocated_cb)(
    int unit, int element, uint8 *is_allocated);

typedef int (*algo_mpls_db_label_range_profile_nof_free_elements_get_cb)(
    int unit, int *nof_free_elements);

/*
 * STRUCTs
 */

typedef struct {
    algo_mpls_db_termination_profile_set_cb set;
    algo_mpls_db_termination_profile_get_cb get;
    algo_mpls_db_termination_profile_create_cb create;
    algo_mpls_db_termination_profile_allocate_single_cb allocate_single;
    algo_mpls_db_termination_profile_free_single_cb free_single;
    algo_mpls_db_termination_profile_exchange_cb exchange;
    algo_mpls_db_termination_profile_profile_data_get_cb profile_data_get;
} algo_mpls_db_termination_profile_cbs;

typedef struct {
    algo_mpls_db_push_profile_set_cb set;
    algo_mpls_db_push_profile_get_cb get;
    algo_mpls_db_push_profile_create_cb create;
    algo_mpls_db_push_profile_allocate_single_cb allocate_single;
    algo_mpls_db_push_profile_free_single_cb free_single;
    algo_mpls_db_push_profile_exchange_cb exchange;
    algo_mpls_db_push_profile_profile_data_get_cb profile_data_get;
} algo_mpls_db_push_profile_cbs;

typedef struct {
    algo_mpls_db_label_range_profile_set_cb set;
    algo_mpls_db_label_range_profile_get_cb get;
    algo_mpls_db_label_range_profile_create_cb create;
    algo_mpls_db_label_range_profile_allocate_single_cb allocate_single;
    algo_mpls_db_label_range_profile_free_single_cb free_single;
    algo_mpls_db_label_range_profile_is_allocated_cb is_allocated;
    algo_mpls_db_label_range_profile_nof_free_elements_get_cb nof_free_elements_get;
} algo_mpls_db_label_range_profile_cbs;

typedef struct {
    algo_mpls_db_is_init_cb is_init;
    algo_mpls_db_init_cb init;
    algo_mpls_db_termination_profile_cbs termination_profile;
    algo_mpls_db_push_profile_cbs push_profile;
    algo_mpls_db_label_range_profile_cbs label_range_profile;
} algo_mpls_db_cbs;

/*
 * Global Variables
 */

/*
 * Global Variables
 */

extern algo_mpls_db_cbs algo_mpls_db;

#endif /* __ALGO_MPLS_ACCESS_H__ */
/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 * File:        dnx_tsn_dispatch.h
 * Purpose:     dnx tsn driver BCM API dispatch table
 * Generator:   modules_dispatch.py
 */

#ifndef _BCM_INT_DNX_TSN_DISPATCH_H
#define _BCM_INT_DNX_TSN_DISPATCH_H

#include <bcm/types.h>
#include <bcm_int/dispatch.h>

#ifdef BCM_DNX_SUPPORT

extern int bcm_dnx_tsn_cqf_config_get(int,uint32,bcm_gport_t,bcm_tsn_cqf_config_t *);
extern int bcm_dnx_tsn_cqf_config_set(int,uint32,bcm_gport_t,bcm_tsn_cqf_config_t *);
extern int bcm_dnx_tsn_taf_control_get(int,int,bcm_tsn_taf_control_t,uint32 *);
extern int bcm_dnx_tsn_taf_control_set(int,int,bcm_tsn_taf_control_t,uint32);
extern int bcm_dnx_tsn_taf_gate_create(int,int,int *);
extern int bcm_dnx_tsn_taf_gate_destroy(int,int);
extern int bcm_dnx_tsn_taf_profile_commit(int,int,bcm_tsn_taf_profile_id_t);
extern int bcm_dnx_tsn_taf_profile_create(int,int,bcm_tsn_taf_profile_t *,bcm_tsn_taf_profile_id_t *);
extern int bcm_dnx_tsn_taf_profile_destroy(int,int,bcm_tsn_taf_profile_id_t);
extern int bcm_dnx_tsn_taf_profile_get(int,int,bcm_tsn_taf_profile_id_t,bcm_tsn_taf_profile_t *);
extern int bcm_dnx_tsn_taf_profile_set(int,int,bcm_tsn_taf_profile_id_t,bcm_tsn_taf_profile_t *);
extern int bcm_dnx_tsn_taf_profile_status_get(int,int,bcm_tsn_taf_profile_id_t,bcm_tsn_taf_profile_status_t *);

#endif /* BCM_DNX_SUPPORT */
#endif /* !_BCM_INT_DNX_TSN_DISPATCH_H */

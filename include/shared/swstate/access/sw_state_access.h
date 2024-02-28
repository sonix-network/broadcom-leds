/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_ACCESS_H_
#define _SHR_SW_STATE_ACCESS_H_

#include <shared/swstate/sw_state_defs.h>

#include <shared/swstate/access/sw_state_dpp_access.h>
#include <shared/swstate/access/sw_state_exm_access.h>
#include <shared/swstate/access/sw_state_exmMixStatDyn_access.h>
#include <shared/swstate/access/sw_state_issu_example_access.h>
#include <shared/swstate/access/sw_state_issu_test_access.h>
#include <shared/swstate/access/sw_state_miniExm_access.h>
/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

typedef struct sw_state_cbs_s {
#ifdef BCM_PETRA_SUPPORT
    sw_state_dpp_cbs_t dpp;
#endif /* BCM_PETRA_SUPPORT*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_exm_cbs_t exm;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_exmMixStatDyn_cbs_t exmMixStatDyn;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_miniExm_cbs_t miniExm;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_issu_example_cbs_t issu_example;
#endif /* _SHR_SW_STATE_EXM*/ 
    sw_state_issu_test_cbs_t issu_test;
} sw_state_cbs_t;


extern sw_state_cbs_t sw_state_access[SOC_MAX_NUM_DEVICES];


int sw_state_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_ACCESS_H_ */

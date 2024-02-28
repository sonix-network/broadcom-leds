/* 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 * 
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 * search for 'sw_state_diagnostic_cbs_t' for the root of the struct
 */

#ifndef _SHR_SW_STATE_EXM_DIAGNOSTIC_H_
#define _SHR_SW_STATE_EXM_DIAGNOSTIC_H_

#ifdef BCM_WARM_BOOT_SUPPORT
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsArr_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsArrArr_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsArrPtr_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsPtr_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsRegular_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsRegularAllowWbAccess_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsSinglePtr_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsStaticArrArr_diagnostic.h>
#include <shared/swstate/diagnostic/sw_state_exm_twoLevelsStaticArrInt_diagnostic.h>
/********************************* diagnostic calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the diagnostic calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the diagnostic struct by 'sw_state_diagnostic_cb_init'.                  */
/***************************************************************************************************/

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exm_dump */
typedef int (*sw_state_exm_dump_cb)(
    int unit);
#endif /* _SHR_SW_STATE_EXM*/ 

/*********************************** diagnostic calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the diagnostic layer for the entire SW state.*/
/* use this tree to dump fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef _SHR_SW_STATE_EXM
typedef struct sw_state_exm_diagnostic_cbs_s {
#ifdef _SHR_SW_STATE_EXM
    sw_state_exm_dump_cb dump;
#endif /* _SHR_SW_STATE_EXM*/ 
    sw_state_exm_twoLevelsRegular_diagnostic_cbs_t twoLevelsRegular;
    sw_state_exm_twoLevelsSinglePtr_diagnostic_cbs_t twoLevelsSinglePtr;
    sw_state_exm_twoLevelsStaticArrInt_diagnostic_cbs_t twoLevelsStaticArrInt;
    sw_state_exm_twoLevelsStaticArrArr_diagnostic_cbs_t twoLevelsStaticArrArr;
    sw_state_exm_twoLevelsPtr_diagnostic_cbs_t twoLevelsPtr;
    sw_state_exm_twoLevelsArr_diagnostic_cbs_t twoLevelsArr;
    sw_state_exm_twoLevelsArrArr_diagnostic_cbs_t twoLevelsArrArr;
    sw_state_exm_twoLevelsArrPtr_diagnostic_cbs_t twoLevelsArrPtr;
    sw_state_exm_twoLevelsRegularAllowWbAccess_diagnostic_cbs_t twoLevelsRegularAllowWbAccess;
} sw_state_exm_diagnostic_cbs_t;

#endif /* _SHR_SW_STATE_EXM*/ 

int sw_state_exm_diagnostic_cb_init(int unit);

#endif /* BCM_WARM_BOOT_SUPPORT */

#endif /* _SHR_SW_STATE_EXM_DIAGNOSTIC_H_ */

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

#ifndef _SHR_SW_STATE_DPP_SOC_JERICHO_TM_IS_TDM_QUEUING_ON_DIAGNOSTIC_H_
#define _SHR_SW_STATE_DPP_SOC_JERICHO_TM_IS_TDM_QUEUING_ON_DIAGNOSTIC_H_

#ifdef BCM_WARM_BOOT_SUPPORT
/********************************* diagnostic calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the diagnostic calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the diagnostic struct by 'sw_state_diagnostic_cb_init'.                  */
/***************************************************************************************************/

#ifdef BCM_PETRA_SUPPORT
#if defined(BCM_PETRA_SUPPORT)
/* implemented by: sw_state_dpp_soc_jericho_tm_is_tdm_queuing_on_dump */
typedef int (*sw_state_dpp_soc_jericho_tm_is_tdm_queuing_on_dump_cb)(
    int unit);
#endif /* defined(BCM_PETRA_SUPPORT)*/ 
#endif /* BCM_PETRA_SUPPORT*/ 

/*********************************** diagnostic calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the diagnostic layer for the entire SW state.*/
/* use this tree to dump fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/


int sw_state_dpp_soc_jericho_tm_is_tdm_queuing_on_diagnostic_cb_init(int unit);

#endif /* BCM_WARM_BOOT_SUPPORT */

#endif /* _SHR_SW_STATE_DPP_SOC_JERICHO_TM_IS_TDM_QUEUING_ON_DIAGNOSTIC_H_ */

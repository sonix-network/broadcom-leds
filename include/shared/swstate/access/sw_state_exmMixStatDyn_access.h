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

#ifndef _SHR_SW_STATE_EXMMIXSTATDYN_ACCESS_H_
#define _SHR_SW_STATE_EXMMIXSTATDYN_ACCESS_H_

/********************************* access calbacks definitions *************************************/
/* this set of callbacks, are the callbacks used in the access calbacks struct 'sw_state_cbs_t' to */
/* access the data in 'sw_state_t'.                                                                */
/* the calbacks are inserted into the access struct by 'sw_state_access_cb_init'.                  */
/***************************************************************************************************/

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_alloc */
typedef int (*sw_state_exmMixStatDyn_alloc_cb)(
    int unit);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_is_allocated */
typedef int (*sw_state_exmMixStatDyn_is_allocated_cb)(
    int unit, uint8 *is_allocated);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_free */
typedef int (*sw_state_exmMixStatDyn_free_cb)(
    int unit);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_verify */
typedef int (*sw_state_exmMixStatDyn_verify_cb)(
    int unit);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynPtr_set */
typedef int (*sw_state_exmMixStatDyn_staticArrDynPtr_set_cb)(
    int unit, int staticArrDynPtr_idx_0, int staticArrDynPtr);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynPtr_get */
typedef int (*sw_state_exmMixStatDyn_staticArrDynPtr_get_cb)(
    int unit, int staticArrDynPtr_idx_0, int *staticArrDynPtr);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynPtr_alloc */
typedef int (*sw_state_exmMixStatDyn_staticArrDynPtr_alloc_cb)(
    int unit, int staticArrDynPtr_idx_0);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynPtr_is_allocated */
typedef int (*sw_state_exmMixStatDyn_staticArrDynPtr_is_allocated_cb)(
    int unit, int staticArrDynPtr_idx_0, uint8 *is_allocated);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynPtr_free */
typedef int (*sw_state_exmMixStatDyn_staticArrDynPtr_free_cb)(
    int unit, int staticArrDynPtr_idx_0);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynPtr_verify */
typedef int (*sw_state_exmMixStatDyn_staticArrDynPtr_verify_cb)(
    int unit, int staticArrDynPtr_idx_0);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArr_set */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArr_set_cb)(
    int unit, int staticArrDynArr_idx_0, int staticArrDynArr_idx_1, int staticArrDynArr);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArr_get */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArr_get_cb)(
    int unit, int staticArrDynArr_idx_0, int staticArrDynArr_idx_1, int *staticArrDynArr);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArr_alloc */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArr_alloc_cb)(
    int unit, int staticArrDynArr_idx_0, int nof_instances_to_alloc);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArr_is_allocated */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArr_is_allocated_cb)(
    int unit, int staticArrDynArr_idx_0, uint8 *is_allocated);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArr_free */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArr_free_cb)(
    int unit, int staticArrDynArr_idx_0);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArr_verify */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArr_verify_cb)(
    int unit, int staticArrDynArr_idx_0, int staticArrDynArr_idx_1);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArrPtr_set */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArrPtr_set_cb)(
    int unit, int staticArrDynArrPtr_idx_0, int staticArrDynArrPtr_idx_1, int staticArrDynArrPtr);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArrPtr_get */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArrPtr_get_cb)(
    int unit, int staticArrDynArrPtr_idx_0, int staticArrDynArrPtr_idx_1, int *staticArrDynArrPtr);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArrPtr_alloc */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArrPtr_alloc_cb)(
    int unit, int staticArrDynArrPtr_idx_0, int staticArrDynArrPtr_idx_1);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArrPtr_is_allocated */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArrPtr_is_allocated_cb)(
    int unit, int staticArrDynArrPtr_idx_0, int staticArrDynArrPtr_idx_1, uint8 *is_allocated);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArrPtr_free */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArrPtr_free_cb)(
    int unit, int staticArrDynArrPtr_idx_0, int staticArrDynArrPtr_idx_1);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArrPtr_ptr_alloc */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArrPtr_ptr_alloc_cb)(
    int unit, int staticArrDynArrPtr_idx_0, int nof_instances_to_alloc);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArrPtr_ptr_free */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArrPtr_ptr_free_cb)(
    int unit, int staticArrDynArrPtr_idx_0);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrDynArrPtr_verify */
typedef int (*sw_state_exmMixStatDyn_staticArrDynArrPtr_verify_cb)(
    int unit, int staticArrDynArrPtr_idx_0, int staticArrDynArrPtr_idx_1);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrArrDynArrArr_set */
typedef int (*sw_state_exmMixStatDyn_staticArrArrDynArrArr_set_cb)(
    int unit, int staticArrArrDynArrArr_idx_0, int staticArrArrDynArrArr_idx_1, int staticArrArrDynArrArr_idx_2, int staticArrArrDynArrArr_idx_3, int staticArrArrDynArrArr);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrArrDynArrArr_get */
typedef int (*sw_state_exmMixStatDyn_staticArrArrDynArrArr_get_cb)(
    int unit, int staticArrArrDynArrArr_idx_0, int staticArrArrDynArrArr_idx_1, int staticArrArrDynArrArr_idx_2, int staticArrArrDynArrArr_idx_3, int *staticArrArrDynArrArr);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrArrDynArrArr_alloc */
typedef int (*sw_state_exmMixStatDyn_staticArrArrDynArrArr_alloc_cb)(
    int unit, int staticArrArrDynArrArr_idx_0, int staticArrArrDynArrArr_idx_1, int staticArrArrDynArrArr_idx_2, int nof_instances_to_alloc);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrArrDynArrArr_is_allocated */
typedef int (*sw_state_exmMixStatDyn_staticArrArrDynArrArr_is_allocated_cb)(
    int unit, int staticArrArrDynArrArr_idx_0, int staticArrArrDynArrArr_idx_1, int staticArrArrDynArrArr_idx_2, uint8 *is_allocated);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrArrDynArrArr_free */
typedef int (*sw_state_exmMixStatDyn_staticArrArrDynArrArr_free_cb)(
    int unit, int staticArrArrDynArrArr_idx_0, int staticArrArrDynArrArr_idx_1, int staticArrArrDynArrArr_idx_2);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrArrDynArrArr_ptr_alloc */
typedef int (*sw_state_exmMixStatDyn_staticArrArrDynArrArr_ptr_alloc_cb)(
    int unit, int staticArrArrDynArrArr_idx_0, int staticArrArrDynArrArr_idx_1, int nof_instances_to_alloc);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrArrDynArrArr_ptr_free */
typedef int (*sw_state_exmMixStatDyn_staticArrArrDynArrArr_ptr_free_cb)(
    int unit, int staticArrArrDynArrArr_idx_0, int staticArrArrDynArrArr_idx_1);
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
/* implemented by: sw_state_exmMixStatDyn_staticArrArrDynArrArr_verify */
typedef int (*sw_state_exmMixStatDyn_staticArrArrDynArrArr_verify_cb)(
    int unit, int staticArrArrDynArrArr_idx_0, int staticArrArrDynArrArr_idx_1, int staticArrArrDynArrArr_idx_2, int staticArrArrDynArrArr_idx_3);
#endif /* _SHR_SW_STATE_EXM*/ 

/*********************************** access calbacks struct ****************************************/
/* this set of structs, rooted at 'sw_state_cbs_t' define the access layer for the entire SW state.*/
/* use this tree to alloc/free/set/get fields in the sw state rooted at 'sw_state_t'.              */
/* NOTE: 'sw_state_t' data should not be accessed directly.                                        */
/***************************************************************************************************/

#ifdef _SHR_SW_STATE_EXM
typedef struct sw_state_exmMixStatDyn_staticArrDynPtr_cbs_s {
    sw_state_exmMixStatDyn_staticArrDynPtr_set_cb set;
    sw_state_exmMixStatDyn_staticArrDynPtr_get_cb get;
    sw_state_exmMixStatDyn_staticArrDynPtr_alloc_cb alloc;
    sw_state_exmMixStatDyn_staticArrDynPtr_is_allocated_cb is_allocated;
    sw_state_exmMixStatDyn_staticArrDynPtr_free_cb free;
    sw_state_exmMixStatDyn_staticArrDynPtr_verify_cb verify;
} sw_state_exmMixStatDyn_staticArrDynPtr_cbs_t;
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
typedef struct sw_state_exmMixStatDyn_staticArrDynArr_cbs_s {
    sw_state_exmMixStatDyn_staticArrDynArr_set_cb set;
    sw_state_exmMixStatDyn_staticArrDynArr_get_cb get;
    sw_state_exmMixStatDyn_staticArrDynArr_alloc_cb alloc;
    sw_state_exmMixStatDyn_staticArrDynArr_is_allocated_cb is_allocated;
    sw_state_exmMixStatDyn_staticArrDynArr_free_cb free;
    sw_state_exmMixStatDyn_staticArrDynArr_verify_cb verify;
} sw_state_exmMixStatDyn_staticArrDynArr_cbs_t;
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
typedef struct sw_state_exmMixStatDyn_staticArrDynArrPtr_cbs_s {
    sw_state_exmMixStatDyn_staticArrDynArrPtr_set_cb set;
    sw_state_exmMixStatDyn_staticArrDynArrPtr_get_cb get;
    sw_state_exmMixStatDyn_staticArrDynArrPtr_alloc_cb alloc;
    sw_state_exmMixStatDyn_staticArrDynArrPtr_is_allocated_cb is_allocated;
    sw_state_exmMixStatDyn_staticArrDynArrPtr_free_cb free;
    sw_state_exmMixStatDyn_staticArrDynArrPtr_ptr_alloc_cb ptr_alloc;
    sw_state_exmMixStatDyn_staticArrDynArrPtr_ptr_free_cb ptr_free;
    sw_state_exmMixStatDyn_staticArrDynArrPtr_verify_cb verify;
} sw_state_exmMixStatDyn_staticArrDynArrPtr_cbs_t;
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
typedef struct sw_state_exmMixStatDyn_staticArrArrDynArrArr_cbs_s {
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_set_cb set;
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_get_cb get;
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_alloc_cb alloc;
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_is_allocated_cb is_allocated;
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_free_cb free;
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_ptr_alloc_cb ptr_alloc;
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_ptr_free_cb ptr_free;
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_verify_cb verify;
} sw_state_exmMixStatDyn_staticArrArrDynArrArr_cbs_t;
#endif /* _SHR_SW_STATE_EXM*/ 

#ifdef _SHR_SW_STATE_EXM
typedef struct sw_state_exmMixStatDyn_cbs_s {
#ifdef _SHR_SW_STATE_EXM
    sw_state_exmMixStatDyn_alloc_cb alloc;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_exmMixStatDyn_is_allocated_cb is_allocated;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_exmMixStatDyn_free_cb free;
#endif /* _SHR_SW_STATE_EXM*/ 
#ifdef _SHR_SW_STATE_EXM
    sw_state_exmMixStatDyn_verify_cb verify;
#endif /* _SHR_SW_STATE_EXM*/ 
    sw_state_exmMixStatDyn_staticArrDynPtr_cbs_t staticArrDynPtr;
    sw_state_exmMixStatDyn_staticArrDynArr_cbs_t staticArrDynArr;
    sw_state_exmMixStatDyn_staticArrDynArrPtr_cbs_t staticArrDynArrPtr;
    sw_state_exmMixStatDyn_staticArrArrDynArrArr_cbs_t staticArrArrDynArrArr;
} sw_state_exmMixStatDyn_cbs_t;

#endif /* _SHR_SW_STATE_EXM*/ 

int sw_state_exmMixStatDyn_access_cb_init(int unit);

#endif /* _SHR_SW_STATE_EXMMIXSTATDYN_ACCESS_H_ */

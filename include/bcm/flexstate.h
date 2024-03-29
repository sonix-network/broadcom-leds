/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 */

#ifndef __BCM_FLEXSTATE_H__
#define __BCM_FLEXSTATE_H__

#include <bcm/types.h>
#include <bcm/port.h>

/* 
 * Enumeration of flex state sources.
 * 
 * Flex state source indicates the sources to generates a flex state
 * action.
 */
typedef enum bcm_flexstate_source_e {
    bcmFlexstateSourceEmFt = 0,     /* Ingress EM flow tracker. */
    bcmFlexstateSourceIngPort = 1,  /* Ingress Port. */
    bcmFlexstateSourceCount = 2     /* Always last one. */
} bcm_flexstate_source_t;

#define BCM_FLEXSTATE_SOURCE_NAME_INITIALIZER \
{ \
    "bcmFlexstateSourceEmFt", \
    "bcmFlexstateSourceIngPort", \
    "bcmFlexstateSourceCount"  \
}

/* 
 * Enumeration of flex state objects.
 * 
 * Flex state object could be used to generate state index and counter
 * value.
 * Some objects could also be used for conditional trigger and
 * quantization.
 */
typedef enum bcm_flexstate_object_e {
    bcmFlexstateObjectConstZero = 0,    /* Const value 0 object. */
    bcmFlexstateObjectConstOne = 1,     /* Const value 1 object. */
    bcmFlexstateObjectTriggerInterval = 2, /* Trigger interval object. */
    bcmFlexstateObjectQuant = 3,        /* Quantization result object. */
    bcmFlexstateObjectIngL2Iif = 1000,  /* Ingress l2 iif object. */
    bcmFlexstateObjectIngEmFtHitIndex0 = 1001, /* Ingress em ft hit index 0 object. */
    bcmFlexstateObjectIngEmFtHitIndex1 = 1002, /* Ingress em ft hit index 1 object. */
    bcmFlexstateObjectIngEmFtOpaqueObj0 = 1003, /* Ingress em ft opaque obj 0 object. */
    bcmFlexstateObjectEgrPipePortQueueNum = 1004, /* Egress pipe port queue num object. */
    bcmFlexstateObjectEgrResidenceTimeRaw0 = 1005, /* Egress residence time raw 0 object. */
    bcmFlexstateObjectEgrResidenceTimeRaw = 1006, /* Egress residence time raw object. */
    bcmFlexstateObjectEgrPktLenObj = 1007, /* Egress pkt len obj object. */
    bcmFlexstateObjectEgrPipePort = 1008, /* Egress pipe port object */
    bcmFlexstateObjectEgrEcnMapInputVectorQueueNum = 1009, /* Egress ECN map input vector queue num
                                           object. */
    bcmFlexstateObjectCount = 1010      /* Always last one. */
} bcm_flexstate_object_t;

#define BCM_FLEXSTATE_OBJECT_NAME_INITIALIZER \
{ \
    "bcmFlexstateObjectConstZero", \
    "bcmFlexstateObjectConstOne", \
    "bcmFlexstateObjectTriggerInterval", \
    "bcmFlexstateObjectQuant", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "", \
    "bcmFlexstateObjectIngL2Iif", \
    "bcmFlexstateObjectIngEmFtHitIndex0", \
    "bcmFlexstateObjectIngEmFtHitIndex1", \
    "bcmFlexstateObjectIngEmFtOpaqueObj0", \
    "bcmFlexstateObjectEgrPipePortQueueNum", \
    "bcmFlexstateObjectEgrResidenceTimeRaw0", \
    "bcmFlexstateObjectEgrResidenceTimeRaw", \
    "bcmFlexstateObjectEgrPktLenObj", \
    "bcmFlexstateObjectEgrPipePort", \
    "bcmFlexstateObjectEgrEcnMapInputVectorQueueNum", \
    "bcmFlexstateObjectCount"  \
}

#define BCM_FLEXSTATE_COUNTER_VALUE_SIZE    2          /* Counter array size
                                                          number. */

/* 
 * Flex state statistic value.
 * 
 * Normal mode:
 * value[0] is the data of counter value A.
 * value[1] is the data of counter value B.
 * Wide mode:
 * value[0] is the upper part data of counter value A.
 * value[1] is the lower part data of counter value A.
 */
typedef struct bcm_flexstate_counter_value_s {
    uint64 value[BCM_FLEXSTATE_COUNTER_VALUE_SIZE]; /* Flex state statistic value array. */
} bcm_flexstate_counter_value_t;

/* Maximum flex state operation object size. */
#define BCM_FLEXSTATE_OPERATION_OBJECT_SIZE 8          /* Operation object array
                                                          size number. */

/* 
 * Flex state index operation structure.
 * 
 * This data structure lists the operation of a flex state index.
 * Number of supported elements for these member arrays and how the
 * index is generated from these elements may vary depending on device.
 * Flex state index generated from two elements (if supported):
 *      value0 = (SEL(object0) >> shift0) & ((1 << mask_size0) - 1).
 *      value1 = (SEL(object1) & ((1 << mask_size1) - 1)) << shift1.
 *      index = (value1 | value0).
 * Flex state index generated from three elements (if supported):
 *      value0 = (SEL(object0) >> shift0) & ((1 << mask_size0) - 1).
 *      value1 = ((SEL(object1) >> shift2) & ((1 << mask_size1) - 1)) <<
 * shift1.
 *      value2 = ((SEL(object2) >> shift4) & ((1 << mask_size2) - 1)) <<
 * shift3.
 *      index = (value2 | value1 | value0).
 */
typedef struct bcm_flexstate_index_operation_s {
    bcm_flexstate_object_t object[BCM_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Flex state object array. */
    uint32 quant_id[BCM_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Quantization ID. */
    uint8 mask_size[BCM_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Object mask size array. */
    uint8 shift[BCM_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Object shift array. */
} bcm_flexstate_index_operation_t;

/* Enumeration of flex state value select. */
typedef enum bcm_flexstate_value_select_e {
    bcmFlexstateValueSelectCounterValue = 0, /* Select state value generated by
                                           operation to update counter. */
    bcmFlexstateValueSelectPairedCounter = 1, /* Select paired counter value to update
                                           counter. */
    bcmFlexstateValueSelectPacketLength = 2, /* Select packet length to update
                                           counter. */
    bcmFlexstateValueSelectCount = 3    /* Always last one. */
} bcm_flexstate_value_select_t;

/* Enumeration of flex state value operation types. */
typedef enum bcm_flexstate_value_operation_type_e {
    bcmFlexstateValueOperationTypeNoop = 0, /* COUNTER = OLD_COUNTER. */
    bcmFlexstateValueOperationTypeSet = 1, /* COUNTER = CVALUE. */
    bcmFlexstateValueOperationTypeInc = 2, /* COUNTER = OLD_COUNTER + CVALUE. */
    bcmFlexstateValueOperationTypeDec = 3, /* COUNTER = OLD_COUNTER - CVALUE. */
    bcmFlexstateValueOperationTypeMax = 4, /* COUNTER = MAX(OLD_COUNTER, CVALUE). */
    bcmFlexstateValueOperationTypeMin = 5, /* COUNTER = MIN(OLD_COUNTER, CVALUE). */
    bcmFlexstateValueOperationTypeAverage = 6, /* COUNTER = AVERAGE(OLD_COUNTER,
                                           CVALUE). */
    bcmFlexstateValueOperationTypeSetBit = 7, /* COUNTER = SETBIT(OLD_COUNTER,
                                           CVALUE). */
    bcmFlexstateValueOperationTypeRdec = 8, /* COUNTER = CVALUE - OLD_COUNTER. */
    bcmFlexstateValueOperationTypeXor = 9, /* COUNTER = XOR(OLD_COUNTER, CVALUE). */
    bcmFlexstateValueOperationTypeClearBit = 10, /* COUNTER = OLD_COUNTER & ~(1 <<
                                           CVALUE). */
    bcmFlexstateValueOperationTypeXorBit = 11, /* COUNTER = OLD_COUNTER ^ (1 <<
                                           CVALUE). */
    bcmFlexstateValueOperationTypeCount = 12 /* Always last one. */
} bcm_flexstate_value_operation_type_t;

/* 
 * Flex state value operation structure.
 * 
 * This data structure lists the operation of a flex state update value.
 * Number of supported elements for these member arrays and how the
 * value is generated from these elements may vary depending on device.
 * Flex state update value generated from two elements (if supported):
 *      value0 = (SEL(object0) >> shift0) & ((1 << mask_size0) - 1).
 *      value1 = (SEL(object1) & ((1 << mask_size1) - 1)) << shift1.
 *      value = (value1 | value0).
 *      New_counter = UPDATE_TYPE(old_counter, value).
 * Flex state update value generated from three elements (if supported):
 *      value0 = (SEL(object0) >> shift0) & ((1 << mask_size0) - 1).
 *      value1 = ((SEL(object1) >> shift2) & ((1 << mask_size1) - 1)) <<
 * shift1.
 *      value2 = ((SEL(object2) >> shift4) & ((1 << mask_size2) - 1)) <<
 * shift3.
 *      value =  (value2 | value1 | value0).
 *      New_counter = UPDATE_TYPE(old_counter, value).
 */
typedef struct bcm_flexstate_value_operation_s {
    bcm_flexstate_value_select_t select; /* Select state value. */
    bcm_flexstate_object_t object[BCM_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Flex state object array. */
    uint32 quant_id[BCM_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Quantization ID. */
    uint8 mask_size[BCM_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Object mask size array. */
    uint8 shift[BCM_FLEXSTATE_OPERATION_OBJECT_SIZE]; /* Object shift array. */
    bcm_flexstate_value_operation_type_t type; /* Counter value operation type. */
} bcm_flexstate_value_operation_t;

#define BCM_FLEXSTATE_QUANTIZATION_RANGE_SIZE 8          /* Quantization range
                                                          check array size
                                                          number. */

/* Quantization flags definition. */
#define BCM_FLEXSTATE_QUANTIZATION_FLAGS_32BIT_MODE (1 << 0)   /* Specify 32-bit values
                                                          in the range check
                                                          arrays (if supported). */

#define BCM_FLEXSTATE_QUANTIZATION_FLAGS_COVER_ALL_RANGE (1 << 1)   /* Specify to cover all
                                                          range of the selected
                                                          object and ignore
                                                          range checkers. */

/* 
 * Flex state quantization structure.
 * 
 * This data structure lists the properties of a flex state quantization.
 * Each quantization instance generates a range check result.
 */
typedef struct bcm_flexstate_quantization_s {
    bcm_flexstate_object_t object;      /* Flex state object. */
    bcm_flexstate_object_t object_upper; /* Flex state object for the upper 16
                                           bits when flag
                                           BCM_FLEXSTATE_QUANTIZATION_FLAGS_32BIT_MODE
                                           is set. The 'object' field is for the
                                           lower 16 bits. */
    bcm_pbmp_t ports;                   /* Flex state ports. */
    uint32 range_check_min[BCM_FLEXSTATE_QUANTIZATION_RANGE_SIZE]; /* Range check min value array. */
    uint32 range_check_max[BCM_FLEXSTATE_QUANTIZATION_RANGE_SIZE]; /* Range check max value array. */
    uint8 range_num;                    /* Total range check number */
    uint32 flags;                       /* Quantization flags. */
    uint16 object_mask;                 /* Object Mask. */
    uint16 object_mask_upper;           /* Object Mask for the object specified
                                           by 'object_upper' field (if
                                           required). Valid when flag
                                           BCM_FLEXCTR_QUANTIZATION_FLAGS_32BIT_MODE
                                           is set. */
} bcm_flexstate_quantization_t;

/* Enumeration of flex state trigger type. */
typedef enum bcm_flexstate_trigger_type_e {
    bcmFlexstateTriggerTypeTime = 0,    /* Time based trigger type. */
    bcmFlexstateTriggerTypeCondition = 1, /* Condition based trigger type. */
    bcmFlexstateTriggerTypeConditionStartTimeStop = 2, /* Condition based start and time based
                                           stop type. */
    bcmFlexstateTriggerTypeConditionStartActionCountStop = 3, /* Condition based start and action
                                           count based stop type. */
    bcmFlexstateTriggerTypeCount = 4    /* Always last one. */
} bcm_flexstate_trigger_type_t;

/* Enumeration of flex state trigger interval scale. */
typedef enum bcm_flexstate_trigger_interval_e {
    bcmFlexstateTriggerIntervalUnlimited = 0, /* Unlimited collection. */
    bcmFlexstateTriggerInterval100ns = 1, /* 100 nanosecond interval. */
    bcmFlexstateTriggerInterval500ns = 2, /* 500 nanosecond interval. */
    bcmFlexstateTriggerInterval1us = 3, /* 1 millisecond interval. */
    bcmFlexstateTriggerInterval10us = 4, /* 10 millisecond interval. */
    bcmFlexstateTriggerInterval100us = 5, /* 100 microsecond interval. */
    bcmFlexstateTriggerInterval1ms = 6, /* 1 microsecond interval. */
    bcmFlexstateTriggerInterval10ms = 7, /* 10 microsecond interval. */
    bcmFlexstateTriggerInterval100ms = 8, /* 100 millisecond interval. */
    bcmFlexstateTriggerInterval1s = 9,  /* 1 second interval. */
    bcmFlexstateTriggerInterval10s = 10, /* 10 second interval. */
    bcmFlexstateTriggerIntervalCount = 11 /* Always last one. */
} bcm_flexstate_trigger_interval_t;

/* Trigger flags definition. */
#define BCM_FLEXSTATE_TRIGGER_CONDITION_COMPARE_NOT_EQUAL_START (1 << 0)   /* Specify to use 'not
                                                          equal' as the compare
                                                          function to trigger
                                                          start counter update
                                                          for conditional
                                                          trigger. */

#define BCM_FLEXSTATE_TRIGGER_CONDITION_COMPARE_NOT_EQUAL_STOP (1 << 1)   /* Specify to use 'not
                                                          equal' as the compare
                                                          function to trigger
                                                          stop counter update
                                                          for conditional
                                                          trigger. */

/* 
 * Flex state trigger structure.
 * 
 * This data structure lists the properties of the flex state trigger.
 */
typedef struct bcm_flexstate_trigger_s {
    bcm_flexstate_trigger_type_t trigger_type; /* Trigger type. */
    uint8 period_num;                   /* Time trigger period number. */
    bcm_flexstate_trigger_interval_t interval; /* Time trigger interval scale. */
    bcm_flexstate_object_t object;      /* Flex state object. */
    uint16 object_value_start;          /* Conditional trigger start value. */
    uint16 object_value_stop;           /* Conditional trigger stop value. */
    uint16 object_value_mask;           /* Conditional trigger mask. */
    uint8 action_count_stop;            /* Number of times a counter action is
                                           hit before stopping. Only valid with
                                           action count based stop type. */
    uint32 flags;                       /* Trigger flags. */
} bcm_flexstate_trigger_t;

/* Enumeration of flex state counter modes. */
typedef enum bcm_flexstate_counter_mode_e {
    bcmFlexstateCounterModeNormal = 0,  /* Each counter contains two values A
                                           and B.
                                           The update value of value A and B are
                                           separately controlled by
                                           value_a_operation and
                                           value_b_operation in counter action.
                                           All value operation modes are
                                           suitable for values A and B. */
    bcmFlexstateCounterModeWide = 1,    /* Each counter only contains one value
                                           A.
                                           The update value of value A is
                                           controlled by value_a_operation in
                                           counter action.
                                           Only value operation modes noop, set,
                                           inc and setbit are suitable for value
                                           A. */
    bcmFlexstateCounterModeHalf = 2,    /* Each counter contains two values A
                                           and B with half width.
                                           The update value of value A and B are
                                           separately controlled by
                                           value_a_operation and
                                           value_b_operation in counter action.
                                           All value operation modes are
                                           suitable for values A and B.
                                           Using half width mode could contain
                                           2x counters within the same h/w
                                           resources. */
    bcmFlexstateCounterModeCount = 3    /* Always last one. */
} bcm_flexstate_counter_mode_t;

/* Enumeration of flex state drop count modes. */
typedef enum bcm_flexstate_drop_count_mode_e {
    bcmFlexstateDropCountModeNoDrop = 0, /* Count only if not being dropped. */
    bcmFlexstateDropCountModeDrop = 1,  /* Count only if being dropped. */
    bcmFlexstateDropCountModeAll = 2,   /* Ignore drop status and always count. */
    bcmFlexstateDropCountModeCount = 3  /* Always last one. */
} bcm_flexstate_drop_count_mode_t;

/* Enumeration of flex state update compare types. */
typedef enum bcm_flexstate_update_compare_e {
    bcmFlexstateUpdateCompareAlwaysTrue = 0, /* No conditional update. */
    bcmFlexstateUpdateCompareEqual = 1, /* Update if stored counter value =
                                           computed value. */
    bcmFlexstateUpdateCompareLess = 2,  /* Update if stored counter value <
                                           computed value. */
    bcmFlexstateUpdateCompareCheckAllBits = 3, /* Update if stored counter value &
                                           computed value = computed value
                                           (check all bits of mask are set). */
    bcmFlexstateUpdateCompareCheckOneBit = 4, /* Update if stored counter value & (1
                                           << computed value) is nonzero (check
                                           one particular bit is set). */
    bcmFlexstateUpdateCompareCheckAnyBits = 5, /* Update if stored counter value &
                                           computed value is nonzero (check any
                                           of the specified bits is set). */
    bcmFlexstateUpdateCompareCount = 6  /* Always last one. */
} bcm_flexstate_update_compare_t;

/* Enumeration of flex state update compare operands. */
typedef enum bcm_flexstate_update_compare_opd_e {
    bcmFlexstateUpdateCompareOpdUseZero = 0, /* Use 0. */
    bcmFlexstateUpdateCompareOpdUseOne = 1, /* Use 1. */
    bcmFlexstateUpdateCompareOpdUseStoredValA = 2, /* Use stored counter value A. */
    bcmFlexstateUpdateCompareOpdUseStoredValB = 3, /* Use stored counter value B. */
    bcmFlexstateUpdateCompareOpdUseCompareValA = 4, /* Use value selected for counter A
                                           conditional update operation. */
    bcmFlexstateUpdateCompareOpdUseTrueValA = 5, /* Use value selected for counter A if
                                           conditional update operation returns
                                           TRUE. */
    bcmFlexstateUpdateCompareOpdUseFalseValA = 6, /* Use value selected for counter A if
                                           conditional update operation returns
                                           FALSE. */
    bcmFlexstateUpdateCompareOpdUseCompareValB = 7, /* Use value selected for counter B
                                           conditional update operation. */
    bcmFlexstateUpdateCompareOpdUseTrueValB = 8, /* Use value selected for counter B if
                                           conditional update operation returns
                                           TRUE. */
    bcmFlexstateUpdateCompareOpdUseFalseValB = 9, /* Use value selected for counter B if
                                           conditional update operation returns
                                           FALSE. */
    bcmFlexstateUpdateCompareOpdCount = 10 /* Always last one. */
} bcm_flexstate_update_compare_opd_t;

/* Enumeration of flex state update source. */
typedef enum bcm_flexstate_update_source_e {
    bcmFlexstateUpdateSourceUpdatedCompareResult = 0, /* Use updated value from the true or
                                           false operation based on the
                                           comparison result. The specified
                                           operation type is used to update it. */
    bcmFlexstateUpdateSourceOldValue = 1, /* Use the old value. */
    bcmFlexstateUpdateSourceComputedCompareValue = 2, /* Use computed value from the compare
                                           operation. */
    bcmFlexstateUpdateSourceComputedCompareResult = 3, /* Use computed value from the true or
                                           false operation based on the
                                           comparison result. */
    bcmFlexstateUpdateSourceCount = 4   /* Always last one. */
} bcm_flexstate_update_source_t;

/* Flex state operation structure. */
typedef struct bcm_flexstate_operation_s {
    bcm_flexstate_update_compare_t update_compare; /* Comparison operation in the
                                           conditional update logic. */
    bcm_flexstate_update_compare_opd_t update_compare_opd; /* Comparison operand in the conditional
                                           update logic. */
    bcm_flexstate_value_operation_t compare_operation; /* Comparison value in the conditional
                                           update logic. */
    bcm_flexstate_value_operation_t operation_true; /* Update value when conditional update
                                           logic returns true. */
    bcm_flexstate_value_operation_t operation_false; /* Update value when conditional update
                                           logic returns false. */
    bcm_flexstate_update_source_t update_pool; /* Determines the source of counter pool
                                           update. */
    bcm_flexstate_update_source_t update_bus; /* Determines the source of bus update. */
} bcm_flexstate_operation_t;

#define BCM_FLEXSTATE_ACTION_FLAGS_TRIGGER  0x1        /* Flex state trigger is
                                                          attached in the
                                                          action. */
#define BCM_FLEXSTATE_ACTION_FLAGS_HINT_OUTPUT 0x2        /* Flex state hint value
                                                          is used to specify
                                                          output number. */

/* 
 * Flex state action structure.
 * 
 * This data structure lists the properties of a flex state action.
 */
typedef struct bcm_flexstate_action_s {
    uint32 flags;                       /* Action flags. */
    bcm_flexstate_source_t source;      /* Flex state source. */
    bcm_pbmp_t ports;                   /* Flex state ports. */
    int hint;                           /* Flex state hint. */
    bcm_flexstate_drop_count_mode_t drop_count_mode; /* Counter drop mode for functional
                                           packet drops. */
    int exception_drop_count_enable;    /* Enable to count on hardware exception
                                           drops. */
    int egress_mirror_count_enable;     /* Enable to count egress mirrored
                                           packets also. */
    bcm_flexstate_counter_mode_t mode;  /* Action mode. */
    uint32 index_num;                   /* Total counter index number. */
    bcm_flexstate_index_operation_t index_operation; /* Flex state index operation structure. */
    bcm_flexstate_operation_t operation_a; /* Flex state value A operation
                                           structure. */
    bcm_flexstate_operation_t operation_b; /* Flex state value B operation
                                           structure. */
    bcm_flexstate_trigger_t trigger;    /* Flex state trigger structure. */
} bcm_flexstate_action_t;

#define BCM_FLEXSTATE_GROUP_ACTION_SIZE 4          /* Group action array size
                                                      number. */

/* 
 * Flex state group action structure.
 * 
 * This data structure lists the properties of a flex state group action.
 */
typedef struct bcm_flexstate_group_action_s {
    bcm_flexstate_source_t source;      /* Flex state source. */
    bcm_pbmp_t ports;                   /* Flex state ports. */
    uint32 action_id[BCM_FLEXSTATE_GROUP_ACTION_SIZE]; /* Flex state group action array. */
    uint8 action_num;                   /* Total group action array number */
} bcm_flexstate_group_action_t;

#ifndef BCM_HIDE_DISPATCHABLE

/* 
 * Flexstate module initialization function.
 * 
 * This function is used to initialize flexstate module.
 * 
 * [in] unit Unit number.
 * 
 * BCM_E_NONE No errors.
 * BCM_E_XXX API errors.
 */
extern int bcm_flexstate_init(
    int unit);

/* 
 * Flexstate module cleanup function.
 * 
 * This function is used to shut down flexstate module.
 * 
 * [in] unit Unit number.
 * 
 * BCM_E_NONE No errors.
 * BCM_E_XXX API errors.
 */
extern int bcm_flexstate_cleanup(
    int unit);

#endif /* BCM_HIDE_DISPATCHABLE */

#define BCM_FLEXSTATE_OPTIONS_WITH_ID   0x1        /* Instance id is presented. */
#define BCM_FLEXSTATE_OPTIONS_REPLACE   0x2        /* Need to replace an
                                                      existing instance. */

/* Flex counter quantization data structure initialization function. */
extern void bcm_flexstate_quantization_t_init(
    bcm_flexstate_quantization_t *quantization);

#ifndef BCM_HIDE_DISPATCHABLE

/* Flex counter quantization creation function. */
extern int bcm_flexstate_quantization_create(
    int unit, 
    int options, 
    bcm_flexstate_quantization_t *quantization, 
    uint32 *quant_id);

/* Flex counter quantization destroy function. */
extern int bcm_flexstate_quantization_destroy(
    int unit, 
    uint32 quant_id);

/* Flex counter quantization get function. */
extern int bcm_flexstate_quantization_get(
    int unit, 
    uint32 quant_id, 
    bcm_flexstate_quantization_t *quantization);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Flex counter quantization traverse callback. */
typedef int (*bcm_flexstate_quantization_traverse_cb)(
    int unit, 
    uint32 quant_id, 
    bcm_flexstate_quantization_t *quantization, 
    void *user_data);

#ifndef BCM_HIDE_DISPATCHABLE

/* Flex counter quantization traverse function. */
extern int bcm_flexstate_quantization_traverse(
    int unit, 
    bcm_flexstate_quantization_traverse_cb trav_fn, 
    void *user_data);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Flex counter action data structure initialization function. */
extern void bcm_flexstate_action_t_init(
    bcm_flexstate_action_t *action);

#ifndef BCM_HIDE_DISPATCHABLE

/* Flex counter action creation function. */
extern int bcm_flexstate_action_create(
    int unit, 
    int options, 
    bcm_flexstate_action_t *action, 
    uint32 *action_id);

/* Flex counter action destroy function. */
extern int bcm_flexstate_action_destroy(
    int unit, 
    uint32 action_id);

/* Flex counter action get function. */
extern int bcm_flexstate_action_get(
    int unit, 
    uint32 action_id, 
    bcm_flexstate_action_t *action);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Flex counter action traverse callback. */
typedef int (*bcm_flexstate_action_traverse_cb)(
    int unit, 
    uint32 action_id, 
    bcm_flexstate_action_t *action, 
    void *user_data);

#ifndef BCM_HIDE_DISPATCHABLE

/* Flex counter action traverse function. */
extern int bcm_flexstate_action_traverse(
    int unit, 
    bcm_flexstate_action_traverse_cb trav_fn, 
    void *user_data);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Flex counter group action data structure initialization function. */
extern void bcm_flexstate_group_action_t_init(
    bcm_flexstate_group_action_t *group_action);

#ifndef BCM_HIDE_DISPATCHABLE

/* Flex counter group action creation function. */
extern int bcm_flexstate_group_action_create(
    int unit, 
    int options, 
    bcm_flexstate_group_action_t *group_action, 
    uint32 *group_stat_counter_id);

/* Flex counter group action destroy function. */
extern int bcm_flexstate_group_action_destroy(
    int unit, 
    uint32 group_stat_counter_id);

/* Flex counter group action get function. */
extern int bcm_flexstate_group_action_get(
    int unit, 
    uint32 group_stat_counter_id, 
    bcm_flexstate_group_action_t *group_action);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Flex counter group action traverse callback. */
typedef int (*bcm_flexstate_group_action_traverse_cb)(
    int unit, 
    uint32 group_stat_counter_id, 
    bcm_flexstate_group_action_t *group_action, 
    void *user_data);

#ifndef BCM_HIDE_DISPATCHABLE

/* Flex counter group action traverse function. */
extern int bcm_flexstate_group_action_traverse(
    int unit, 
    bcm_flexstate_group_action_traverse_cb trav_fn, 
    void *user_data);

/* Flex counter trigger enable set function. */
extern int bcm_flexstate_trigger_enable_set(
    int unit, 
    uint32 action_id, 
    int enable);

/* Flex counter trigger enable get function. */
extern int bcm_flexstate_trigger_enable_get(
    int unit, 
    uint32 action_id, 
    int *enable);

/* Flex counter statistic get function. */
extern int bcm_flexstate_stat_get(
    int unit, 
    uint32 action_id, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_flexstate_counter_value_t *counter_values);

/* Flex counter statistic sync get function. */
extern int bcm_flexstate_stat_sync_get(
    int unit, 
    uint32 action_id, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_flexstate_counter_value_t *counter_values);

/* Flex counter statistic set function. */
extern int bcm_flexstate_stat_set(
    int unit, 
    uint32 action_id, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_flexstate_counter_value_t *counter_values);

#endif /* BCM_HIDE_DISPATCHABLE */

#endif /* __BCM_FLEXSTATE_H__ */

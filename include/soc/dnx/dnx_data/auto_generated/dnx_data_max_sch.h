
/* *INDENT-OFF* */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_SCH_H_

#define _DNX_DATA_MAX_SCH_H_




#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX family only!"
#endif


#define DNX_DATA_MAX_SCH_GENERAL_NOF_SLOW_PROFILES (1)

#undef DNX_DATA_MAX_SCH_GENERAL_NOF_SLOW_PROFILES
#define DNX_DATA_MAX_SCH_GENERAL_NOF_SLOW_PROFILES (2)


#define DNX_DATA_MAX_SCH_GENERAL_NOF_SLOW_LEVELS (1)

#undef DNX_DATA_MAX_SCH_GENERAL_NOF_SLOW_LEVELS
#define DNX_DATA_MAX_SCH_GENERAL_NOF_SLOW_LEVELS (8)


#define DNX_DATA_MAX_SCH_GENERAL_CYCLES_PER_CREDIT_TOKEN (1)

#undef DNX_DATA_MAX_SCH_GENERAL_CYCLES_PER_CREDIT_TOKEN
#define DNX_DATA_MAX_SCH_GENERAL_CYCLES_PER_CREDIT_TOKEN (12)


#define DNX_DATA_MAX_SCH_GENERAL_NOF_FMQ_CLASS (1)

#undef DNX_DATA_MAX_SCH_GENERAL_NOF_FMQ_CLASS
#define DNX_DATA_MAX_SCH_GENERAL_NOF_FMQ_CLASS (4)


#define DNX_DATA_MAX_SCH_PS_MIN_PRIORITY_FOR_TCG (1)

#undef DNX_DATA_MAX_SCH_PS_MIN_PRIORITY_FOR_TCG
#define DNX_DATA_MAX_SCH_PS_MIN_PRIORITY_FOR_TCG (4)


#define DNX_DATA_MAX_SCH_PS_MAX_NOF_TCG (1)

#undef DNX_DATA_MAX_SCH_PS_MAX_NOF_TCG
#define DNX_DATA_MAX_SCH_PS_MAX_NOF_TCG (8)


#define DNX_DATA_MAX_SCH_PS_NOF_HRS_IN_PS (1)

#undef DNX_DATA_MAX_SCH_PS_NOF_HRS_IN_PS
#define DNX_DATA_MAX_SCH_PS_NOF_HRS_IN_PS (8)


#define DNX_DATA_MAX_SCH_PS_MAX_TCG_WEIGHT (1)

#undef DNX_DATA_MAX_SCH_PS_MAX_TCG_WEIGHT
#define DNX_DATA_MAX_SCH_PS_MAX_TCG_WEIGHT (1023)


#define DNX_DATA_MAX_SCH_PS_TC_TCG_CALENDAR_ACCESS_PERIOD (1)

#undef DNX_DATA_MAX_SCH_PS_TC_TCG_CALENDAR_ACCESS_PERIOD
#define DNX_DATA_MAX_SCH_PS_TC_TCG_CALENDAR_ACCESS_PERIOD (3)


#define DNX_DATA_MAX_SCH_FLOW_NOF_HR    (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_HR
#define DNX_DATA_MAX_SCH_FLOW_NOF_HR    (1024)


#define DNX_DATA_MAX_SCH_FLOW_NOF_CL    (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_CL
#define DNX_DATA_MAX_SCH_FLOW_NOF_CL    (65536)


#define DNX_DATA_MAX_SCH_FLOW_NOF_SE    (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_SE
#define DNX_DATA_MAX_SCH_FLOW_NOF_SE    (131072)


#define DNX_DATA_MAX_SCH_FLOW_NOF_FLOWS (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_FLOWS
#define DNX_DATA_MAX_SCH_FLOW_NOF_FLOWS (393216)


#define DNX_DATA_MAX_SCH_FLOW_REGION_SIZE (1)

#undef DNX_DATA_MAX_SCH_FLOW_REGION_SIZE
#define DNX_DATA_MAX_SCH_FLOW_REGION_SIZE (1024)


#define DNX_DATA_MAX_SCH_FLOW_NOF_REGIONS (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_REGIONS
#define DNX_DATA_MAX_SCH_FLOW_NOF_REGIONS (384)


#define DNX_DATA_MAX_SCH_FLOW_NOF_HR_REGIONS (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_HR_REGIONS
#define DNX_DATA_MAX_SCH_FLOW_NOF_HR_REGIONS (4)


#define DNX_DATA_MAX_SCH_FLOW_NOF_CONNECTORS_ONLY_REGIONS (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_CONNECTORS_ONLY_REGIONS
#define DNX_DATA_MAX_SCH_FLOW_NOF_CONNECTORS_ONLY_REGIONS (256)


#define DNX_DATA_MAX_SCH_FLOW_FLOW_IN_REGION_MASK (1)

#undef DNX_DATA_MAX_SCH_FLOW_FLOW_IN_REGION_MASK
#define DNX_DATA_MAX_SCH_FLOW_FLOW_IN_REGION_MASK (1023)


#define DNX_DATA_MAX_SCH_FLOW_MIN_CONNECTOR_BUNDLE_SIZE (1)

#undef DNX_DATA_MAX_SCH_FLOW_MIN_CONNECTOR_BUNDLE_SIZE
#define DNX_DATA_MAX_SCH_FLOW_MIN_CONNECTOR_BUNDLE_SIZE (4)


#define DNX_DATA_MAX_SCH_FLOW_CONN_IDX_INTERDIG_FLOW (1)

#undef DNX_DATA_MAX_SCH_FLOW_CONN_IDX_INTERDIG_FLOW
#define DNX_DATA_MAX_SCH_FLOW_CONN_IDX_INTERDIG_FLOW (2)


#define DNX_DATA_MAX_SCH_FLOW_SHAPER_FLIPFLOPS_NOF (1)

#undef DNX_DATA_MAX_SCH_FLOW_SHAPER_FLIPFLOPS_NOF
#define DNX_DATA_MAX_SCH_FLOW_SHAPER_FLIPFLOPS_NOF (20)


#define DNX_DATA_MAX_SCH_FLOW_NOF_FLOWS_IN_QUARTET_ORDER_GROUP (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_FLOWS_IN_QUARTET_ORDER_GROUP
#define DNX_DATA_MAX_SCH_FLOW_NOF_FLOWS_IN_QUARTET_ORDER_GROUP (196608)


#define DNX_DATA_MAX_SCH_FLOW_NOF_REGIONS_IN_QUARTET_ORDER_GROUP (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_REGIONS_IN_QUARTET_ORDER_GROUP
#define DNX_DATA_MAX_SCH_FLOW_NOF_REGIONS_IN_QUARTET_ORDER_GROUP (192)


#define DNX_DATA_MAX_SCH_FLOW_NOF_QUARTET_ORDER_GROUPS (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_QUARTET_ORDER_GROUPS
#define DNX_DATA_MAX_SCH_FLOW_NOF_QUARTET_ORDER_GROUPS (48)


#define DNX_DATA_MAX_SCH_FLOW_NOF_LOW_RATE_RANGES (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_LOW_RATE_RANGES
#define DNX_DATA_MAX_SCH_FLOW_NOF_LOW_RATE_RANGES (1)


#define DNX_DATA_MAX_SCH_FLOW_NOF_LOW_RATE_REGIONS (1)

#undef DNX_DATA_MAX_SCH_FLOW_NOF_LOW_RATE_REGIONS
#define DNX_DATA_MAX_SCH_FLOW_NOF_LOW_RATE_REGIONS (256)


#define DNX_DATA_MAX_SCH_FLOW_LOW_RATE_PATTERN_MASK (1)

#undef DNX_DATA_MAX_SCH_FLOW_LOW_RATE_PATTERN_MASK
#define DNX_DATA_MAX_SCH_FLOW_LOW_RATE_PATTERN_MASK (65535)


#define DNX_DATA_MAX_SCH_FLOW_LOW_RATE_FLOW_RESOLUTION (1)

#undef DNX_DATA_MAX_SCH_FLOW_LOW_RATE_FLOW_RESOLUTION
#define DNX_DATA_MAX_SCH_FLOW_LOW_RATE_FLOW_RESOLUTION (16)


#define DNX_DATA_MAX_SCH_SE_DEFAULT_COS (1)

#undef DNX_DATA_MAX_SCH_SE_DEFAULT_COS
#define DNX_DATA_MAX_SCH_SE_DEFAULT_COS (252)


#define DNX_DATA_MAX_SCH_SE_NOF_COLOR_GROUP (1)

#undef DNX_DATA_MAX_SCH_SE_NOF_COLOR_GROUP
#define DNX_DATA_MAX_SCH_SE_NOF_COLOR_GROUP (3)


#define DNX_DATA_MAX_SCH_SE_MAX_HR_WEIGHT (1)

#undef DNX_DATA_MAX_SCH_SE_MAX_HR_WEIGHT
#define DNX_DATA_MAX_SCH_SE_MAX_HR_WEIGHT (4096)


#define DNX_DATA_MAX_SCH_SE_CL_CLASS_PROFILE_NOF (1)

#undef DNX_DATA_MAX_SCH_SE_CL_CLASS_PROFILE_NOF
#define DNX_DATA_MAX_SCH_SE_CL_CLASS_PROFILE_NOF (512)


#define DNX_DATA_MAX_SCH_INTERFACE_NOF_BIG_CALENDARS (1)

#undef DNX_DATA_MAX_SCH_INTERFACE_NOF_BIG_CALENDARS
#define DNX_DATA_MAX_SCH_INTERFACE_NOF_BIG_CALENDARS (8)


#define DNX_DATA_MAX_SCH_INTERFACE_NOF_CHANNELIZED_CALENDARS (1)

#undef DNX_DATA_MAX_SCH_INTERFACE_NOF_CHANNELIZED_CALENDARS
#define DNX_DATA_MAX_SCH_INTERFACE_NOF_CHANNELIZED_CALENDARS (64)


#define DNX_DATA_MAX_SCH_INTERFACE_MAX_CALENDAR_SIZE (1)

#undef DNX_DATA_MAX_SCH_INTERFACE_MAX_CALENDAR_SIZE
#define DNX_DATA_MAX_SCH_INTERFACE_MAX_CALENDAR_SIZE (1024)


#define DNX_DATA_MAX_SCH_INTERFACE_NOF_SCH_INTERFACES (1)

#undef DNX_DATA_MAX_SCH_INTERFACE_NOF_SCH_INTERFACES
#define DNX_DATA_MAX_SCH_INTERFACE_NOF_SCH_INTERFACES (392)


#define DNX_DATA_MAX_SCH_INTERFACE_CAL_SPEED_RESOLUTION (1)

#undef DNX_DATA_MAX_SCH_INTERFACE_CAL_SPEED_RESOLUTION
#define DNX_DATA_MAX_SCH_INTERFACE_CAL_SPEED_RESOLUTION (128)


#define DNX_DATA_MAX_SCH_INTERFACE_RESERVED (1)

#undef DNX_DATA_MAX_SCH_INTERFACE_RESERVED
#define DNX_DATA_MAX_SCH_INTERFACE_RESERVED (136)


#define DNX_DATA_MAX_SCH_DEVICE_DRM_RESOLUTION (1)

#undef DNX_DATA_MAX_SCH_DEVICE_DRM_RESOLUTION
#define DNX_DATA_MAX_SCH_DEVICE_DRM_RESOLUTION (128)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_2 (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_2
#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_2 (2)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_4 (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_4
#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_4 (4)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_8 (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_8
#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_AGGREGATE_SE_8 (8)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_SHARED_SHAPER_MAX_TAG_VALUE (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_SHARED_SHAPER_MAX_TAG_VALUE
#define DNX_DATA_MAX_SCH_SCH_ALLOC_SHARED_SHAPER_MAX_TAG_VALUE (8)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_SIZE_AGGREGATE_SE (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_SIZE_AGGREGATE_SE
#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_SIZE_AGGREGATE_SE (8)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_SIZE_CON (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_SIZE_CON
#define DNX_DATA_MAX_SCH_SCH_ALLOC_TAG_SIZE_CON (8)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_TYPE_CON_REG_START (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_TYPE_CON_REG_START
#define DNX_DATA_MAX_SCH_SCH_ALLOC_TYPE_CON_REG_START (0)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_ALLOC_INVALID_FLOW (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_ALLOC_INVALID_FLOW
#define DNX_DATA_MAX_SCH_SCH_ALLOC_ALLOC_INVALID_FLOW (-1)


#define DNX_DATA_MAX_SCH_SCH_ALLOC_DEALLOC_FLOW_IDS (1)

#undef DNX_DATA_MAX_SCH_SCH_ALLOC_DEALLOC_FLOW_IDS
#define DNX_DATA_MAX_SCH_SCH_ALLOC_DEALLOC_FLOW_IDS (16)


#define DNX_DATA_MAX_SCH_DBAL_SCHEDULER_ENABLE_GROUPING_FACTOR (1)

#undef DNX_DATA_MAX_SCH_DBAL_SCHEDULER_ENABLE_GROUPING_FACTOR
#define DNX_DATA_MAX_SCH_DBAL_SCHEDULER_ENABLE_GROUPING_FACTOR (8)


#define DNX_DATA_MAX_SCH_DBAL_SCHEDULER_ENABLE_DBAL_MULT_FACTOR (1)

#undef DNX_DATA_MAX_SCH_DBAL_SCHEDULER_ENABLE_DBAL_MULT_FACTOR
#define DNX_DATA_MAX_SCH_DBAL_SCHEDULER_ENABLE_DBAL_MULT_FACTOR (255)


#define DNX_DATA_MAX_SCH_DBAL_FLOW_BITS (1)

#undef DNX_DATA_MAX_SCH_DBAL_FLOW_BITS
#define DNX_DATA_MAX_SCH_DBAL_FLOW_BITS (19)


#define DNX_DATA_MAX_SCH_DBAL_SE_BITS   (1)

#undef DNX_DATA_MAX_SCH_DBAL_SE_BITS
#define DNX_DATA_MAX_SCH_DBAL_SE_BITS   (17)


#define DNX_DATA_MAX_SCH_DBAL_CL_BITS   (1)

#undef DNX_DATA_MAX_SCH_DBAL_CL_BITS
#define DNX_DATA_MAX_SCH_DBAL_CL_BITS   (16)


#define DNX_DATA_MAX_SCH_DBAL_HR_BITS   (1)

#undef DNX_DATA_MAX_SCH_DBAL_HR_BITS
#define DNX_DATA_MAX_SCH_DBAL_HR_BITS   (10)


#define DNX_DATA_MAX_SCH_DBAL_INTERFACE_BITS (1)

#undef DNX_DATA_MAX_SCH_DBAL_INTERFACE_BITS
#define DNX_DATA_MAX_SCH_DBAL_INTERFACE_BITS (9)


#define DNX_DATA_MAX_SCH_DBAL_CALENDAR_BITS (1)

#undef DNX_DATA_MAX_SCH_DBAL_CALENDAR_BITS
#define DNX_DATA_MAX_SCH_DBAL_CALENDAR_BITS (6)


#define DNX_DATA_MAX_SCH_DBAL_FLOW_SHAPER_MANT_BITS (1)

#undef DNX_DATA_MAX_SCH_DBAL_FLOW_SHAPER_MANT_BITS
#define DNX_DATA_MAX_SCH_DBAL_FLOW_SHAPER_MANT_BITS (10)


#define DNX_DATA_MAX_SCH_DBAL_FLOW_SHAPER_MAX_BURST_BITS (1)

#undef DNX_DATA_MAX_SCH_DBAL_FLOW_SHAPER_MAX_BURST_BITS
#define DNX_DATA_MAX_SCH_DBAL_FLOW_SHAPER_MAX_BURST_BITS (9)


#define DNX_DATA_MAX_SCH_DBAL_PS_SHAPER_QUANTA_BITS (1)

#undef DNX_DATA_MAX_SCH_DBAL_PS_SHAPER_QUANTA_BITS
#define DNX_DATA_MAX_SCH_DBAL_PS_SHAPER_QUANTA_BITS (13)


#define DNX_DATA_MAX_SCH_DBAL_PS_SHAPER_MAX_BURST_BITS (1)

#undef DNX_DATA_MAX_SCH_DBAL_PS_SHAPER_MAX_BURST_BITS
#define DNX_DATA_MAX_SCH_DBAL_PS_SHAPER_MAX_BURST_BITS (17)


#define DNX_DATA_MAX_SCH_DBAL_DRM_NOF_LINKS_MAX (1)

#undef DNX_DATA_MAX_SCH_DBAL_DRM_NOF_LINKS_MAX
#define DNX_DATA_MAX_SCH_DBAL_DRM_NOF_LINKS_MAX (192)


#define DNX_DATA_MAX_SCH_DBAL_TOKEN_COUNT_DEFAULT (1)

#undef DNX_DATA_MAX_SCH_DBAL_TOKEN_COUNT_DEFAULT
#define DNX_DATA_MAX_SCH_DBAL_TOKEN_COUNT_DEFAULT (2)


#define DNX_DATA_MAX_SCH_DBAL_PRIORITY_PROPAGATION_IF_GROUP_MAX (1)

#undef DNX_DATA_MAX_SCH_DBAL_PRIORITY_PROPAGATION_IF_GROUP_MAX
#define DNX_DATA_MAX_SCH_DBAL_PRIORITY_PROPAGATION_IF_GROUP_MAX (16)


#define DNX_DATA_MAX_SCH_DBAL_MAX_SCH_INTERFACES_WITH_FC (1)

#undef DNX_DATA_MAX_SCH_DBAL_MAX_SCH_INTERFACES_WITH_FC
#define DNX_DATA_MAX_SCH_DBAL_MAX_SCH_INTERFACES_WITH_FC (135)





#endif 


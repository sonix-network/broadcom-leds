
/* *INDENT-OFF* */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_IPQ_H_

#define _DNX_DATA_MAX_IPQ_H_




#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX family only!"
#endif


#define DNX_DATA_MAX_IPQ_QUEUES_NOF_QUEUES (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_NOF_QUEUES
#define DNX_DATA_MAX_IPQ_QUEUES_NOF_QUEUES (262144)


#define DNX_DATA_MAX_IPQ_QUEUES_MIN_BUNDLE_SIZE (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_MIN_BUNDLE_SIZE
#define DNX_DATA_MAX_IPQ_QUEUES_MIN_BUNDLE_SIZE (4)


#define DNX_DATA_MAX_IPQ_QUEUES_FMQ_BUNDLE_SIZE (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_FMQ_BUNDLE_SIZE
#define DNX_DATA_MAX_IPQ_QUEUES_FMQ_BUNDLE_SIZE (4)


#define DNX_DATA_MAX_IPQ_QUEUES_MAX_FMQ_ID (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_MAX_FMQ_ID
#define DNX_DATA_MAX_IPQ_QUEUES_MAX_FMQ_ID (16383)


#define DNX_DATA_MAX_IPQ_QUEUES_QUEUE_ID_BITS (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_QUEUE_ID_BITS
#define DNX_DATA_MAX_IPQ_QUEUES_QUEUE_ID_BITS (18)


#define DNX_DATA_MAX_IPQ_QUEUES_VOQ_OFFSET_BITS (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_VOQ_OFFSET_BITS
#define DNX_DATA_MAX_IPQ_QUEUES_VOQ_OFFSET_BITS (4)


#define DNX_DATA_MAX_IPQ_QUEUES_MIN_BUNDLE_SIZE_BITS (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_MIN_BUNDLE_SIZE_BITS
#define DNX_DATA_MAX_IPQ_QUEUES_MIN_BUNDLE_SIZE_BITS (2)


#define DNX_DATA_MAX_IPQ_QUEUES_TC_PROFILE_FROM_TM_COMMAND_NOF_BITS (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_TC_PROFILE_FROM_TM_COMMAND_NOF_BITS
#define DNX_DATA_MAX_IPQ_QUEUES_TC_PROFILE_FROM_TM_COMMAND_NOF_BITS (4)


#define DNX_DATA_MAX_IPQ_QUEUES_FLOW_QUARTET_NOF_BITS (1)

#undef DNX_DATA_MAX_IPQ_QUEUES_FLOW_QUARTET_NOF_BITS
#define DNX_DATA_MAX_IPQ_QUEUES_FLOW_QUARTET_NOF_BITS (17)


#define DNX_DATA_MAX_IPQ_REGIONS_NOF_QUEUES (1)

#undef DNX_DATA_MAX_IPQ_REGIONS_NOF_QUEUES
#define DNX_DATA_MAX_IPQ_REGIONS_NOF_QUEUES (8192)


#define DNX_DATA_MAX_IPQ_TC_MAP_NOF_VOQ_FLOW_PROFILES (1)

#undef DNX_DATA_MAX_IPQ_TC_MAP_NOF_VOQ_FLOW_PROFILES
#define DNX_DATA_MAX_IPQ_TC_MAP_NOF_VOQ_FLOW_PROFILES (16)


#define DNX_DATA_MAX_IPQ_TC_MAP_VOQ_FLOW_PROFILES_BITS (1)

#undef DNX_DATA_MAX_IPQ_TC_MAP_VOQ_FLOW_PROFILES_BITS
#define DNX_DATA_MAX_IPQ_TC_MAP_VOQ_FLOW_PROFILES_BITS (4)


#define DNX_DATA_MAX_IPQ_TC_MAP_DEFAULT_VOQ_FLOW_PROFILE_IDX (1)

#undef DNX_DATA_MAX_IPQ_TC_MAP_DEFAULT_VOQ_FLOW_PROFILE_IDX
#define DNX_DATA_MAX_IPQ_TC_MAP_DEFAULT_VOQ_FLOW_PROFILE_IDX (0)


#define DNX_DATA_MAX_IPQ_TC_MAP_NOF_SYSPORT_PROFILES (1)

#undef DNX_DATA_MAX_IPQ_TC_MAP_NOF_SYSPORT_PROFILES
#define DNX_DATA_MAX_IPQ_TC_MAP_NOF_SYSPORT_PROFILES (4)


#define DNX_DATA_MAX_IPQ_TC_MAP_DEFAULT_SYSPORT_PROFILE_IDX (1)

#undef DNX_DATA_MAX_IPQ_TC_MAP_DEFAULT_SYSPORT_PROFILE_IDX
#define DNX_DATA_MAX_IPQ_TC_MAP_DEFAULT_SYSPORT_PROFILE_IDX (0)


#define DNX_DATA_MAX_IPQ_TC_MAP_VOQ_RESOLUTION_TYPE_MAX_VALUE (1)

#undef DNX_DATA_MAX_IPQ_TC_MAP_VOQ_RESOLUTION_TYPE_MAX_VALUE
#define DNX_DATA_MAX_IPQ_TC_MAP_VOQ_RESOLUTION_TYPE_MAX_VALUE (20)





#endif 


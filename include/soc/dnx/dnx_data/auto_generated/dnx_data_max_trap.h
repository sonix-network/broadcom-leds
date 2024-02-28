
/* *INDENT-OFF* */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_TRAP_H_

#define _DNX_DATA_MAX_TRAP_H_




#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX family only!"
#endif


#define DNX_DATA_MAX_TRAP_INGRESS_PROTOCOL_TRAPS_LIF_PROFILE_STARTING_OFFSET (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_PROTOCOL_TRAPS_LIF_PROFILE_STARTING_OFFSET
#define DNX_DATA_MAX_TRAP_INGRESS_PROTOCOL_TRAPS_LIF_PROFILE_STARTING_OFFSET (1024)


#define DNX_DATA_MAX_TRAP_INGRESS_MAX_LEGAL_PREDEFINED_TRAP_ID (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_MAX_LEGAL_PREDEFINED_TRAP_ID
#define DNX_DATA_MAX_TRAP_INGRESS_MAX_LEGAL_PREDEFINED_TRAP_ID (255)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_USER_DEFINED_TRAPS (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_USER_DEFINED_TRAPS
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_USER_DEFINED_TRAPS (276)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_USER_DEFINED_TRAPS_IN_JR1_MODE (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_USER_DEFINED_TRAPS_IN_JR1_MODE
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_USER_DEFINED_TRAPS_IN_JR1_MODE (60)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_1588_TRAPS (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_1588_TRAPS
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_1588_TRAPS (8)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_ENTRIES_ACTION_TABLE (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_ENTRIES_ACTION_TABLE
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_ENTRIES_ACTION_TABLE (512)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_PROTOCOL_TRAP_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_PROTOCOL_TRAP_PROFILES
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_PROTOCOL_TRAP_PROFILES (4)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_RECYCLE_CMDS (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_RECYCLE_CMDS
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_RECYCLE_CMDS (16)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_PROGRAMMABLE_TRAPS (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_PROGRAMMABLE_TRAPS
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_PROGRAMMABLE_TRAPS (8)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_LIF_TRAPS (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_LIF_TRAPS
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_LIF_TRAPS (8)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_ICMP_COMPRESSED_TYPES (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_ICMP_COMPRESSED_TYPES
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_ICMP_COMPRESSED_TYPES (32)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_STAT_OBJS (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_STAT_OBJS
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_STAT_OBJS (10)


#define DNX_DATA_MAX_TRAP_INGRESS_MAX_NOF_STAT_OBJS_TO_OVERWRITE (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_MAX_NOF_STAT_OBJS_TO_OVERWRITE
#define DNX_DATA_MAX_TRAP_INGRESS_MAX_NOF_STAT_OBJS_TO_OVERWRITE (2)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_ERROR_CODE_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_ERROR_CODE_PROFILES
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_ERROR_CODE_PROFILES (4)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_SCI_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_SCI_PROFILES
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_SCI_PROFILES (4)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_ERROR_CODES (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_ERROR_CODES
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_ERROR_CODES (256)


#define DNX_DATA_MAX_TRAP_INGRESS_NOF_SCIS (1)

#undef DNX_DATA_MAX_TRAP_INGRESS_NOF_SCIS
#define DNX_DATA_MAX_TRAP_INGRESS_NOF_SCIS (1024)


#define DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_APP_TRAPS (1)

#undef DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_APP_TRAPS
#define DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_APP_TRAPS (19)


#define DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_FORWARD_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_FORWARD_PROFILES
#define DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_FORWARD_PROFILES (8)


#define DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_USER_CONFIGURABLE_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_USER_CONFIGURABLE_PROFILES
#define DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_USER_CONFIGURABLE_PROFILES (7)


#define DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_SNIF_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_SNIF_PROFILES
#define DNX_DATA_MAX_TRAP_ERPP_NOF_ERPP_SNIF_PROFILES (4)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_APP_TRAPS (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_APP_TRAPS
#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_APP_TRAPS (11)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_USER_CONFIGURABLE_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_USER_CONFIGURABLE_PROFILES
#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_USER_CONFIGURABLE_PROFILES (4)


#define DNX_DATA_MAX_TRAP_ETPP_FIRST_ETPP_USER_CONFIGURABLE_PROFILE (1)

#undef DNX_DATA_MAX_TRAP_ETPP_FIRST_ETPP_USER_CONFIGURABLE_PROFILE
#define DNX_DATA_MAX_TRAP_ETPP_FIRST_ETPP_USER_CONFIGURABLE_PROFILE (3)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_TRAP_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_TRAP_PROFILES
#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_TRAP_PROFILES (8)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_OAM_TRAPS (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_OAM_TRAPS
#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_OAM_TRAPS (7)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_SNIF_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_SNIF_PROFILES
#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_SNIF_PROFILES (8)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_LIF_TRAPS (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_LIF_TRAPS
#define DNX_DATA_MAX_TRAP_ETPP_NOF_ETPP_LIF_TRAPS (4)


#define DNX_DATA_MAX_TRAP_ETPP_TRAP_CONTEXT_PORT_PROFILE_4B (1)

#undef DNX_DATA_MAX_TRAP_ETPP_TRAP_CONTEXT_PORT_PROFILE_4B
#define DNX_DATA_MAX_TRAP_ETPP_TRAP_CONTEXT_PORT_PROFILE_4B (1)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_PROFILES
#define DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_PROFILES (8)


#define DNX_DATA_MAX_TRAP_ETPP_MAX_MTU_VALUE (1)

#undef DNX_DATA_MAX_TRAP_ETPP_MAX_MTU_VALUE
#define DNX_DATA_MAX_TRAP_ETPP_MAX_MTU_VALUE (16383)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_TRAP_ACTION_PROFILES (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_TRAP_ACTION_PROFILES
#define DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_TRAP_ACTION_PROFILES (4)


#define DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_MAP_TABLE_ENTRIES (1)

#undef DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_MAP_TABLE_ENTRIES
#define DNX_DATA_MAX_TRAP_ETPP_NOF_MTU_MAP_TABLE_ENTRIES (64)


#define DNX_DATA_MAX_TRAP_STRENGTH_MAX_STRENGTH (1)

#undef DNX_DATA_MAX_TRAP_STRENGTH_MAX_STRENGTH
#define DNX_DATA_MAX_TRAP_STRENGTH_MAX_STRENGTH (15)


#define DNX_DATA_MAX_TRAP_STRENGTH_MAX_SNP_STRENGTH (1)

#undef DNX_DATA_MAX_TRAP_STRENGTH_MAX_SNP_STRENGTH
#define DNX_DATA_MAX_TRAP_STRENGTH_MAX_SNP_STRENGTH (7)


#define DNX_DATA_MAX_TRAP_STRENGTH_MAX_INGRESS_TO_EGRESS_COMPRESSED_STRENGTH (1)

#undef DNX_DATA_MAX_TRAP_STRENGTH_MAX_INGRESS_TO_EGRESS_COMPRESSED_STRENGTH
#define DNX_DATA_MAX_TRAP_STRENGTH_MAX_INGRESS_TO_EGRESS_COMPRESSED_STRENGTH (7)


#define DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_OUT_LIF_MCDB_PTR_SIGNAL (1)

#undef DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_OUT_LIF_MCDB_PTR_SIGNAL
#define DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_OUT_LIF_MCDB_PTR_SIGNAL (2)


#define DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_ADDED_N (1)

#undef DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_ADDED_N
#define DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_ADDED_N (1)


#define DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_PER_PP_PORT_CHANGE (1)

#undef DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_PER_PP_PORT_CHANGE
#define DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_PER_PP_PORT_CHANGE (1)


#define DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_VISIBILITY_SIGNAL_0 (1)

#undef DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_VISIBILITY_SIGNAL_0
#define DNX_DATA_MAX_TRAP_REGISTER_NAME_CHANGES_VISIBILITY_SIGNAL_0 (1)





#endif 


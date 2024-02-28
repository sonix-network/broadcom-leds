
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */

#ifndef __DNXC_MODULE_IDS_TYPES_H__
#define __DNXC_MODULE_IDS_TYPES_H__



typedef enum {
    INVALID_MODULE_ID = -1,
    SWSTATE_INTERNAL_MODULE_ID = 0,
    ALGO_BFD_MODULE_ID = 1,
    ALGO_CONSISTENT_HASHING_MODULE_ID = 2,
    ALGO_ECGM_MODULE_ID = 3,
    ALGO_FAILOVER_MODULE_ID = 5,
    DNX_ALGO_FIELD_MODULE_ID = 6,
    DNX_ALGO_FIELD_KEY_ALLOC_MODULE_ID = 7,
    DNX_ALGO_FLEXE_CORE_MODULE_ID = 8,
#ifdef BCM_DNX_SUPPORT
    DNX_ALGO_FLEXE_GENERAL_MODULE_ID = 9,
#endif  
    ALGO_FLOW_LIF_MODULE_ID = 10,
    ALGO_L2_MODULE_ID = 11,
    ALGO_L3_MODULE_ID = 12,
    ALGO_LIF_PROFILE_MODULE_ID = 13,
    ALGO_MDB_EM_MODULE_ID = 14,
    ALGO_MPLS_MODULE_ID = 15,
    ALGO_OAM_MODULE_ID = 16,
    ALGO_OAMP_MODULE_ID = 17,
    DNX_ALGO_PORT_MODULE_ID = 19,
    DNX_ALGO_PORT_IMB_MODULE_ID = 20,
    ALGO_PORT_PP_MODULE_ID = 21,
    PPMC_MODULE_ID = 22,
    ALGO_PTP_MODULE_ID = 23,
    ALGO_QOS_MODULE_ID = 24,
    ALGO_RX_MODULE_ID = 25,
    ALGO_SAT_MODULE_ID = 26,
    ALGO_SRV6_MODULE_ID = 27,
    ALGO_STAT_PP_MODULE_ID = 28,
    ALGO_STG_MODULE_ID = 29,
    ALGO_TDM_MODULE_ID = 30,
    ALGO_TRUNK_MODULE_ID = 31,
    ALGO_TUNNEL_MODULE_ID = 32,
    COSQ_AQM_MODULE_ID = 33,
    COSQ_LATENCY_MODULE_ID = 35,
    CRPS_MODULE_ID = 37,
    CRPS_EVICTION_MODULE_ID = 38,
    ECMP_MODULE_ID = 40,
    DNX_EGQ_AM_MODULE_ID = 41,
    ESEM_MODULE_ID = 42,
    EXAMPLE_RES_MNGR_MODULE_ID = 43,
    EXAMPLE_TEMP_MNGR_MODULE_ID = 44,
    FLOW_CONTROL_MODULE_ID = 45,
    INGRESS_COMPENSATION_MODULE_ID = 46,
    DNX_INGRESS_CONGESTION_MODULE_ID = 47,
    DNX_INGRESS_REASSEMBLY_MODULE_ID = 49,
    INSTRU_MODULE_ID = 50,
    DNX_IPQ_ALLOC_MNGR_MODULE_ID = 51,
    LIF_MNGR_MODULE_ID = 52,
    LIF_TABLE_MNGR_MODULE_ID = 53,
    METER_MODULE_ID = 55,
    DNX_MIRROR_MODULE_ID = 56,
    MULTICAST_MODULE_ID = 57,
#ifdef BCM_DNX_SUPPORT
    PHANTOM_QUEUES_MODULE_ID = 58,
#endif  
    PORT_TPID_MODULE_ID = 59,
    DNX_SCH_ALLOC_MNGR_MODULE_ID = 60,
    SEC_MODULE_ID = 61,
    DNX_TSN_MODULE_ID = 62,
    VLAN_MODULE_ID = 63,
    DNX_ALGO_FIELD_ACTION_MODULE_ID = 64,
    DNX_ALGO_LANE_MAP_MODULE_ID = 65,
    ALGO_LIF_MODULE_ID = 66,
    DNX_ALGO_MIB_MODULE_ID = 67,
    DNX_ALGO_SYNCE_MODULE_ID = 68,
    DNX_COSQ_INGRESS_MODULE_ID = 69,
    DBAL_MODULE_ID = 70,
    DNX_BIER_DB_MODULE_ID = 71,
    DNX_EGR_DB_MODULE_ID = 72,
    DNX_EPFC_SW_STATE_MODULE_ID = 73,
    DNX_FIFODMA_MODULE_ID = 74,
    DNX_IRE_PACKET_GENERATOR_MODULE_ID = 75,
    DNX_OFP_RATE_MODULE_ID = 76,
    DNX_RX_MODULE_ID = 77,
    DNX_TIME_SW_STATE_MODULE_ID = 78,
    DNX_VISIBILITY_MODULE_ID = 79,
    DNX_DRAM_MODULE_ID = 80,
    DNX_ECGM_MODULE_ID = 81,
    EDK_MODULE_ID = 82,
#if defined(INCLUDE_CTEST)
    EXAMPLE_MODULE_ID = 83,
#endif  
    DNX_FABRIC_MODULE_ID = 84,
    DNX_FIELD_MODULE_ID = 85,
    DNX_FIELD_ACTIONS_MODULE_ID = 86,
    DNX_FIELD_APPTYPE_MODULE_ID = 87,
    DNX_FIELD_CONTEXT_MODULE_ID = 88,
    DNX_FIELD_FLUSH_MODULE_ID = 89,
    DNX_FIELD_GROUP_MODULE_ID = 90,
#ifdef INCLUDE_KBP
    DNX_FIELD_KBP_MODULE_ID = 91,
#endif  
    DNX_FIELD_KEY_MODULE_ID = 92,
    DNX_FIELD_QUALIFIER_MODULE_ID = 93,
    DNX_FIELD_RANGE_MODULE_ID = 94,
    DNX_FIELD_TCAM_ACCESS_MODULE_ID = 95,
    DNX_FIELD_TCAM_ACCESS_MAPPER_MODULE_ID = 96,
    DNX_FIELD_TCAM_ACCESS_PROFILE_MODULE_ID = 97,
    DNX_FIELD_TCAM_BANK_MODULE_ID = 98,
    DNX_FIELD_TCAM_CACHE_MODULE_ID = 99,
    DNX_FIELD_TCAM_HIT_INDICATION_MODULE_ID = 100,
    DNX_FIELD_TCAM_LOCATION_MODULE_ID = 101,
    DNX_FIELD_TCAM_MANAGER_MODULE_ID = 102,
    DNX_FIELD_TCAM_PREFIX_MODULE_ID = 103,
    FLOW_MODULE_ID = 105,
    FLUSH_MODULE_ID = 106,
    DNX_HARD_RESET_MODULE_ID = 107,
    INSTRU_COUNTERS_MODULE_ID = 108,
    INTERRUPT_MODULE_ID = 109,
    DNX_IPQ_MODULE_ID = 110,
    DNX_IQS_MODULE_ID = 111,
#ifdef INCLUDE_KBP
    KBP_MODULE_ID = 112,
#endif  
#if defined(INCLUDE_KBP)
    KBP_FWD_TCAM_ACCESS_MAPPER_MODULE_ID = 113,
#endif  
    L2_MODULE_ID = 114,
    MDB_MODULE_ID = 115,
    MDB_EM_MODULE_ID = 117,
    MDB_KAPS_MODULE_ID = 119,
    OAM_MODULE_ID = 120,
    DNX_PORT_IMB_MODULE_ID = 122,
    DNX_PORT_NIF_MODULE_ID = 123,
    PP_MODULE_ID = 124,
    REFLECTOR_MODULE_ID = 125,
    RX_TRAP_MODULE_ID = 126,
    SAT_MODULE_ID = 127,
    DNX_SCH_CONFIG_MODULE_ID = 128,
    DNX_SCHEDULER_MODULE_ID = 129,
    SRV6_MODULE_ID = 130,
    STIF_MODULE_ID = 131,
#ifdef BCM_DNX_SUPPORT
    DNX_STK_SYS_MODULE_ID = 132,
#endif  
    SWITCH_MODULE_ID = 133,
    TDM_MODULE_ID = 134,
    TRUNK_MODULE_ID = 135,
#ifdef BCM_DNX_SUPPORT
    DNX_SW_STATE_DEFRAGMENTED_CHUNK_MODULE_ID = 138,
#endif  
    DNX_SW_STATE_HASH_TABLE_MODULE_ID = 139,
    DNX_SW_STATE_SORTED_LIST_MODULE_ID = 140,
    DNXC_MODULE_ID = 141,
    ADAPTER_MODULE_ID = 142,
    MULTITHREAD_ANALYZER_MODULE_ID = 143,
    SW_STATE_EXTERNAL_MODULE_ID = 144,
#if defined(BCM_DNX_SUPPORT) || defined(BCM_DNXF_SUPPORT)
    WB_ENGINE_MODULE_ID = 145,
#endif  
    DNXF_MODULE_ID = 146,
    NOF_MODULE_ID = 147,
    
    DNXC_MODULE_ID_E_DUMMY
} dnxc_module_id_e;


#endif 

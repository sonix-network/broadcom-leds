/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 * This file is auto-generated by autoCoder
 * DO NOT EDIT THIS FILE!
 *
 */
#ifndef SOC_DPP_QUX_CONFIG_DEFS
#define SOC_DPP_QUX_CONFIG_DEFS

#include <soc/defs.h>
#ifdef BCM_QUX_SUPPORT


#define SOC_DPP_GET_QUX(dpp_define)    SOC_DPP_##dpp_define##_QUX
#define SOC_DPP_NOF_FLOWS_QUX                                (128*2*1024)
#define SOC_DPP_NOF_FLOWS_PER_PIPE_QUX                       (128*1024)
#define SOC_DPP_NOF_QUEUES_QUX                               (16*1024)
#define SOC_DPP_NOF_QUEUES_PER_PIPE_QUX                      (16*1024)
#define SOC_DPP_MAX_QUEUES_QUX                               ((16*1024) - 32)
#define SOC_DPP_NOF_POOLS_PER_INTERDIGITATED_REGION_QUX      (1)
#define SOC_DPP_OCB_MEMORY_SIZE_QUX                          (32)
#define SOC_DPP_HW_DRAM_INTERFACES_MAX_QUX                   (1)
#define SOC_DPP_NOF_COUNTER_PROCESSORS_QUX                   (16)
#define SOC_DPP_COUNTERS_PER_COUNTER_PROCESSOR_QUX           (1 * 1024)
#define SOC_DPP_NOF_SMALL_COUNTER_PROCESSORS_QUX             (1)
#define SOC_DPP_COUNTERS_PER_SMALL_COUNTER_PROCESSOR_QUX     (4 * 1024)
#define SOC_DPP_NOF_COUNTER_FIFOS_QUX                        (4)
#define SOC_DPP_MAX_NOF_FIFOS_PER_COUNTER_QUX                (6)
#define SOC_DPP_COUNTER_FIFO_DEPTH_QUX                       (16 * 1024)
#define SOC_DPP_PDM_SIZE_QUX                                 (24*1024)
#define SOC_DPP_NOF_SRAM_PDS_QUX                             (24*1024)
#define SOC_DPP_NOF_DRAM_BDS_QUX                             (768*1024)
#define SOC_DPP_NOF_INSTANCES_FSRD_QUX                       (0)
#define SOC_DPP_NOF_QUADS_IN_FSRD_QUX                        (0)
#define SOC_DPP_NOF_INSTANCES_FMAC_QUX                       (0)
#define SOC_DPP_NOF_FABRIC_LINKS_QUX                         (0)
#define SOC_DPP_FIRST_FABRIC_LINK_ID_QUX                     (0)
#define SOC_DPP_FIRST_SFI_PHY_PORT_QUX                       (1)
#define SOC_DPP_NOF_RCI_LEVELS_QUX                           (8)
#define SOC_DPP_NOF_FABRIC_LINKS_IN_MAC_QUX                  (0)
#define SOC_DPP_FABRIC_RMGR_UNITS_QUX                        (1)
#define SOC_DPP_FABRIC_RMGR_NOF_LINKS_QUX                    (16)
#define SOC_DPP_FABRIC_MAX_DEST_MESH_MODE_QUX                (1)
#define SOC_DPP_FABRIC_MAX_DEST_MESH_MC_MODE_QUX             (1)
#define SOC_DPP_MAX_NOF_FAP_ID_MAPPED_TO_DEST_LIMIT_QUX      (1)
#define SOC_DPP_FABRIC_MESH_MC_ID_MAX_VALID_QUX              (32 * 1024-1)
#define SOC_DPP_FABRIC_SR_CELL_RECEIVED_NOF_SIDES_QUX        (2)
#define SOC_DPP_NOF_SCH_ACTIVE_LINKS_QUX                     (0)
#define SOC_DPP_VRRP_MYMAC_CAM_SIZE_QUX                      (16)
#define SOC_DPP_VRRP_MYMAC_MAP_SIZE_QUX                      (32 * 1024)
#define SOC_DPP_VRRP_MYMAC_MAP_WIDTH_QUX                     (256)
#define SOC_DPP_ISEM_WIDTH_QUX                               (50)
#define SOC_DPP_NOF_ISEM_LINES_QUX                           (12 * 1024)
#define SOC_DPP_NOF_ISEM_TABLES_QUX                          (2)
#define SOC_DPP_ISEM_PREFIX_NOF_BITS_QUX                     (6)
#define SOC_DPP_ISEM_PAYLOAD_NOF_BITS_QUX                    (16)
#define SOC_DPP_ISEM_PAYLOAD_NOF_UINT32_QUX                  (1)
#define SOC_DPP_OUT_LIF_NOF_BITS_QUX                         (18)
#define SOC_DPP_OAM_LIF_NOF_BITS_QUX                         (18)
#define SOC_DPP_NOF_LOCAL_LIFS_QUX                           (32 * 1024)
#define SOC_DPP_VRRP_NOF_PROTOCOL_GROUPS_QUX                 (4)
#define SOC_DPP_NOF_GLOBAL_LIFS_QUX                          (256 * 1024)
#define SOC_DPP_NOF_OUT_LIFS_QUX                             (128 * 1024)
#define SOC_DPP_LIF_WIDTH_QUX                                (103)
#define SOC_DPP_LEM_WIDTH_QUX                                (80)
#define SOC_DPP_NOF_LEM_LINES_QUX                            (64 * 1024)
#define SOC_DPP_NOF_LEM_BANKS_QUX                            (8)
#define SOC_DPP_LEM_PAYLOAD_WIDTH_QUX                        (45)
#define SOC_DPP_NOF_LEM_PREFIXES_QUX                         (5)
#define SOC_DPP_EEDB_WIDTH_QUX                               (18)
#define SOC_DPP_NOF_EEDB_LINES_PER_BANK_QUX                  (1024)
#define SOC_DPP_NOF_EEDB_LINES_QUX                           (16 * 1024)
#define SOC_DPP_NOF_EEDB_PAYLOADS_QUX                        (88)
#define SOC_DPP_FEC_NOF_BITS_QUX                             (17)
#define SOC_DPP_NOF_FECS_QUX                                 (24 * 1024)
#define SOC_DPP_NOF_FEC_BANKS_QUX                            (1)
#define SOC_DPP_NOF_FIDS_QUX                                 (32 * 1024)
#define SOC_DPP_TCAM_ACTION_WIDTH_QUX                        (24)
#define SOC_DPP_TCAM_CASCADED_DATA_NOF_BITS_QUX              (20)
#define SOC_DPP_TCAM_BIG_BANK_KEY_NOF_BITS_QUX               (9)
#define SOC_DPP_NOF_TCAM_BIG_BANK_LINES_QUX                  (512)
#define SOC_DPP_NOF_TCAM_BIG_BANKS_QUX                       (8)
#define SOC_DPP_NOF_TCAM_SMALL_BANKS_QUX                     (4)
#define SOC_DPP_NOF_TCAM_ENTRIES_160_BITS_QUX                ((8 * 1 * 512) + (4 * 128))
#define SOC_DPP_NOF_VSI_LOWERS_QUX                           (8* 1024)
#define SOC_DPP_IN_RIF_NOF_BITS_QUX                          (13)
#define SOC_DPP_NOF_RIFS_QUX                                 (8 * 1024)
#define SOC_DPP_MAX_NOF_RIFS_QUX                             (8 * 1024)
#define SOC_DPP_VLAN_MEMBERSHIP_WIDTH_QUX                    (21)
#define SOC_DPP_NOF_VLAN_MEMBERSHIP_LINES_QUX                (2 * 1024)
#define SOC_DPP_NOF_VLAN_MEMBERSHIP_TABLES_QUX               (2)
#define SOC_DPP_GLEM_WIDTH_QUX                               (18)
#define SOC_DPP_NOF_GLEM_LINES_QUX                           (24 * 1024)
#define SOC_DPP_NOF_GLEM_PAYLOADS_QUX                        (18)
#define SOC_DPP_NOF_GLEM_BANKS_QUX                           (6)
#define SOC_DPP_ESEM_WIDTH_QUX                               (40)
#define SOC_DPP_NOF_ESEM_LINES_QUX                           (16 * 1024)
#define SOC_DPP_NOF_ESEM_PAYLOADS_QUX                        (17)
#define SOC_DPP_MULTICAST_GROUP_NOF_BITS_QUX                 (17)
#define SOC_DPP_NOF_MULTICAST_GROUPS_QUX                     (48 * 1024)
#define SOC_DPP_NOF_VIRTUAL_PORT_LINES_QUX                   (32 * 1024)
#define SOC_DPP_VIRTUAL_PORT_NOF_BITS_QUX                    (15)
#define SOC_DPP_VRF_NOF_BITS_QUX                             (14)
#define SOC_DPP_NOF_VRFS_QUX                                 (16 * 1024)
#define SOC_DPP_TOPOLOGY_ID_NOF_BITS_QUX                     (8)
#define SOC_DPP_NOF_TOPOLOGY_IDS_QUX                         (256)
#define SOC_DPP_VLAN_DOMAIN_NOF_BITS_QUX                     (9)
#define SOC_DPP_NOF_VLAN_DOMAINS_QUX                         (512)
#define SOC_DPP_ELK_LOOKUP_PAYLOAD_NOF_BITS_QUX              (256)
#define SOC_DPP_OAM_2_ID_NOF_BITS_QUX                        (13)
#define SOC_DPP_OAM_COUNTER_INDEX_NOF_BITS_QUX               (18)
#define SOC_DPP_NOF_OAM_COUNTER_INDEXES_QUX                  (256 * 1024)
#define SOC_DPP_COUNTER_NOF_BITS_QUX                         (16)
#define SOC_DPP_NOF_COUNTERS_QUX                             (64 * 1024)
#define SOC_DPP_NOF_FEM_4_QUX                                (2)
#define SOC_DPP_NOF_FEM_16_QUX                               (0)
#define SOC_DPP_NOF_FEM_19_QUX                               (4)
#define SOC_DPP_NOF_FEM_24_QUX                               (2)
#define SOC_DPP_FEM_MAX_ACTION_SIZE_NOF_BITS_QUX             (24)
#define SOC_DPP_NOF_ECMP_QUX                                 (3 * 1024)
#define SOC_DPP_ECMP_MAX_SIZE_QUX                            (2 * 1024)
#define SOC_DPP_VLAN_TRANSLATION_PROFILE_NOF_BITS_QUX        (5)
#define SOC_DPP_NOF_VTT_PROGRAM_SELECTION_LINES_QUX          (48)
#define SOC_DPP_NOF_VTT_PROGRAMS_QUX                         (32)
#define SOC_DPP_IN_PP_PORT_TERMINATION_PROFILE_NOF_BITS_QUX  (5)
#define SOC_DPP_NOF_CORES_QUX                                (1)
#define SOC_DPP_MAX_MACT_LIMIT_QUX                           (64 * 1024 - 1)
#define SOC_DPP_LEM_IS_DYNAMIC_LSB_QUX                       (44)
#define SOC_DPP_LEM_3B_PAYLOAD_FORMAT_EEI_NOF_BITS_QUX       (15)
#define SOC_DPP_LEM_3B_PAYLOAD_FORMAT_NATIVE_VSI_NOF_BITS_QUX (13)
#define SOC_DPP_NOF_LOGICAL_PORTS_QUX                        (512)
#define SOC_DPP_NOF_LOCAL_PORTS_QUX                          (256)
#define SOC_DPP_NOF_PRGE_PROGRAMS_QUX                        (32)
#define SOC_DPP_NOF_PRGE_INSTR_ENTRIES_QUX                   (42)
#define SOC_DPP_NOF_EGRESS_PMF_ACTIONS_QUX                   (9)
#define SOC_DPP_NOF_EG_ENCAP_LSBS_QUX                        (10)
#define SOC_DPP_NOF_EG_ENCAP_RSVS_QUX                        (2)
#define SOC_DPP_EG_ENCAP_ACCESS_PREFIX_MSB_QUX               (87)
#define SOC_DPP_EG_ENCAP_ACCESS_PREFIX_LSB_QUX               (84)
#define SOC_DPP_EG_ENCAP_NOF_BANKS_QUX                       (16)
#define SOC_DPP_EG_ENCAP_NOF_TOP_BANKS_QUX                   (4)
#define SOC_DPP_EG_ENCAP_NOF_PHASES_QUX                      (6)
#define SOC_DPP_EG_ENCAP_PHASE_NOF_BITS_QUX                  (3)
#define SOC_DPP_NOF_FAILOVER_FEC_IDS_QUX                     ((12 * 1024) - 2)
#define SOC_DPP_NOF_FAILOVER_INGRESS_IDS_QUX                 (32 * 1024)
#define SOC_DPP_FAILOVER_INGRESS_LAST_HW_ID_QUX              ((32 * 1024) - 1)
#define SOC_DPP_NOF_FAILOVER_EGRESS_IDS_QUX                  (32 * 1024)
#define SOC_DPP_CORE_CLOCK_FREQ_KHZ_QUX                      (250000)
#define SOC_DPP_GLOB_CLOCK_FREQ_MHZ_QUX                      (1200)
#define SOC_DPP_JUMBO_MAX_SIZE_QUX                           (0x2F00)
#define SOC_DPP_COSQ_EGR_DEFAULT_THRESH_TYPE_QUX             (15)
#define SOC_DPP_MODID_MAX_VALID_QUX                          (2048)
#define SOC_DPP_NOF_FLP_PROGRAM_SELECTION_LINES_QUX          (48)
#define SOC_DPP_IHB_FLP_PROGRAM_SELECTION_CAM_MASK_NOF_BITS_QUX (107)
#define SOC_DPP_NOF_FLP_PROGRAMS_QUX                         (32)
#define SOC_DPP_NOF_FLP_KEYS_QUX                             (4)
#define SOC_DPP_NOF_FLP_16B_INSTRUCTIONS_QUX                 (16)
#define SOC_DPP_NOF_FLP_32B_INSTRUCTIONS_QUX                 (16)
#define SOC_DPP_NOF_FLP_INSTRUCTIONS_LSB_QUX                 (16)
#define SOC_DPP_NOF_FLP_CYCLES_QUX                           (1)
#define SOC_DPP_NOF_FLP_80B_ZONES_QUX                        (2)
#define SOC_DPP_NOF_FLP_KEY_ZONES_QUX                        (4)
#define SOC_DPP_NOF_FLP_KEY_ZONE_BITS_QUX                    (80)
#define SOC_DPP_NOF_INGRESS_PMF_PROGRAM_SELECTION_LINES_QUX  (48)
#define SOC_DPP_IHB_PMF_PROGRAM_SELECTION_CAM_MASK_NOF_BITS_QUX (100)
#define SOC_DPP_NOF_INGRESS_PMF_PROGRAMS_QUX                 (32)
#define SOC_DPP_NOF_INGRESS_PMF_KEYS_QUX                     (4)
#define SOC_DPP_NOF_INGRESS_PMF_INSTRUCTIONS_LSB_QUX         (16)
#define SOC_DPP_NOF_INGRESS_PMF_CYCLES_QUX                   (2)
#define SOC_DPP_NOF_INGRESS_PMF_80B_ZONES_QUX                (2)
#define SOC_DPP_NOF_INGRESS_PMF_KEY_ZONES_QUX                (4)
#define SOC_DPP_NOF_INGRESS_PMF_KEY_ZONE_BITS_QUX            (80)
#define SOC_DPP_NOF_EGRESS_PMF_PROGRAM_SELECTION_LINES_QUX   (16)
#define SOC_DPP_EGQ_PMF_PROGRAM_SELECTION_CAM_MASK_NOF_BITS_QUX (38)
#define SOC_DPP_NOF_EGRESS_PMF_PROGRAMS_QUX                  (8)
#define SOC_DPP_NOF_EGRESS_PMF_KEYS_QUX                      (2)
#define SOC_DPP_NOF_EGRESS_PMF_CYCLES_QUX                    (1)
#define SOC_DPP_NOF_EGRESS_PMF_INSTRUCTIONS_LSB_QUX          (8)
#define SOC_DPP_NOF_EGRESS_PMF_80B_ZONES_QUX                 (2)
#define SOC_DPP_NOF_EGRESS_PMF_KEY_ZONES_QUX                 (4)
#define SOC_DPP_NOF_EGRESS_PMF_KEY_ZONE_BITS_QUX             (80)
#define SOC_DPP_NOF_SLB_PROGRAM_SELECTION_LINES_QUX          (12)
#define SOC_DPP_IHP_CONSISTENT_HASHING_PROGRAM_SEL_TCAM_MASK_NOF_BITS_QUX (45)
#define SOC_DPP_NOF_SLB_PROGRAMS_QUX                         (8)
#define SOC_DPP_NOF_SLB_KEYS_QUX                             (1)
#define SOC_DPP_NOF_SLB_INSTRUCTIONS_LSB_QUX                 (8)
#define SOC_DPP_NOF_SLB_CYCLES_QUX                           (1)
#define SOC_DPP_NOF_SLB_80B_ZONES_QUX                        (2)
#define SOC_DPP_NOF_SLB_KEY_ZONES_QUX                        (1)
#define SOC_DPP_NOF_SLB_KEY_ZONE_BITS_QUX                    (256)
#define SOC_DPP_OAMP_NUMBER_OF_ETH_Y1731_MEP_PROFILES_QUX    (128)
#define SOC_DPP_OAMP_NUMBER_MEP_DB_ENTRIES_QUX               (3072)
#define SOC_DPP_OAMP_NUMBER_OF_MEPS_QUX                      (2048)
#define SOC_DPP_OAMP_NUMBER_OF_RMEPS_QUX                     (6144)
#define SOC_DPP_OAMP_NUMBER_OF_PUNT_PROFILES_QUX             (16)
#define SOC_DPP_OAMP_NUMBER_OF_SD_SF_DB_QUX                  (4608)
#define SOC_DPP_OAMP_NUMBER_OF_SD_SF_DB_1_QUX                (4096)
#define SOC_DPP_OAMP_NUMBER_OF_SD_SF_Y_1711_DB_QUX           (4608)
#define SOC_DPP_OAMP_NUMBER_OF_SD_SF_PROFILES_QUX            (16)
#define SOC_DPP_NUM_OF_REASSEMBLY_CONTEXT_QUX                (64)
#define SOC_DPP_OAMP_UMC_TABLE_SIZE_QUX                      (8192)
#define SOC_DPP_EGR_PRGE_NOF_LFEMS_QUX                       (11)
#define SOC_DPP_EGR_PRGE_NOF_PROGRAM_INSTRUCTIONS_QUX        (28)
#define SOC_DPP_EGR_PRGE_NOF_INSTRUCTION_MEMS_QUX            (14)
#define SOC_DPP_EGR_PRGE_NOF_LFEM_TABLES_QUX                 (4)
#define SOC_DPP_LEM_ENTRY_TYPE_IS_FEC_EEI_LSB_QUX            (41)
#define SOC_DPP_LEM_SA_DROP_LSB_QUX                          (43)
#define SOC_DPP_NOF_ECMPS_QUX                                (3072)
#define SOC_DPP_INLIF_BANK_MSBS_MASK_QUX                     (0)
#define SOC_DPP_INLIF_BANK_MSBS_MASK_START_QUX               (15)
#define SOC_DPP_INLIF_BANK_LSBS_MASK_QUX                     (0x1)
#define SOC_DPP_INLIF_BANK_LSBS_MASK_END_QUX                 (1)
#define SOC_DPP_NOF_INTERLAKEN_PORTS_QUX                     (0)
#define SOC_DPP_NOF_CAUI_PORTS_QUX                           (0)
#define SOC_DPP_NOF_FC_PFC_GENERIC_BITMAPS_QUX               (16)
#define SOC_DPP_NOF_ROO_LL_FORMAT_ETH_TYPE_INDEXS_QUX        (16)
#define SOC_DPP_OAMP_LOCAL_PORT_2_SYS_PORT_SIZE_QUX          (512)
#define SOC_DPP_OAMP_PE_PROG_TCAM_SIZE_QUX                   (64)
#define SOC_DPP_OAMP_PE_PROG_TCAM_NOF_BITS_QUX               (24)
#define SOC_DPP_OAMP_PE_PROG_TCAM_PACKET_TYPE_OFFSET_QUX     (0)
#define SOC_DPP_OAMP_PE_PROG_TCAM_PACKET_TYPE_NOF_BITS_QUX   (3)
#define SOC_DPP_OAMP_PE_PROG_TCAM_MEP_TYPE_OFFSET_QUX        (3)
#define SOC_DPP_OAMP_PE_PROG_TCAM_MEP_TYPE_NOF_BITS_QUX      (4)
#define SOC_DPP_OAMP_PE_PROG_TCAM_MEP_PROFILE_OFFSET_QUX     (7)
#define SOC_DPP_OAMP_PE_PROG_TCAM_MEP_PROFILE_NOF_BITS_QUX   (7)
#define SOC_DPP_OAMP_PE_PROG_TCAM_MEP_PE_PROFILE_OFFSET_QUX  (14)
#define SOC_DPP_OAMP_PE_PROG_TCAM_MEP_PE_PROFILE_NOF_BITS_QUX (6)
#define SOC_DPP_OAMP_PE_PROG_TCAM_MSG_TYPE_OFFSET_QUX        (20)
#define SOC_DPP_OAMP_PE_PROG_TCAM_MSG_TYPE_NOF_BITS_QUX      (4)
#define SOC_DPP_INLIF_P2P_OUT_LIF_VALID_BIT_QUX              (18)
#define SOC_DPP_REPEATER_NONE_EMPTY_CELL_SIZE_QUX            (64)
#define SOC_DPP_REPEATER_DEFAULT_EMPTY_CELL_SIZE_QUX         (150)
#define SOC_DPP_FABRIC_VSC256_MAX_CELL_SIZE_QUX              (256+16)
#define SOC_DPP_NOF_CHANNELIZED_CALENDARS_QUX                (33)
#define SOC_DPP_NOF_BIG_CHANNELIZED_CALENDARS_QUX            (4)
#define SOC_DPP_NOF_SMALL_CHANNELIZED_CALENDARS_QUX          (28)
#define SOC_DPP_FABRIC_COMMA_BURST_PERIOD_QUX                (11)
#define SOC_DPP_SMALL_CHANNELIZED_CAL_SIZE_QUX               (64)
#define SOC_DPP_BIG_CHANNELIZED_CAL_SIZE_QUX                 (256)
#define SOC_DPP_NOF_EVE_PROFILE_BITS_QUX                     (5)
#define SOC_DPP_CAL_INTERNAL_RATE_MAX_QUX                    (0x1ffff)
#define SOC_DPP_NON_CHANNELIZED_CAL_ID_QUX                   (32)
#define SOC_DPP_FABRIC_MAC_BUS_SIZE_QUX                      (60)
#define SOC_DPP_OAMP_PE_PROG_SEL_PROFILE_NOF_QUX             (64)
#define SOC_DPP_NOF_CREDIT_REQUEST_PROFILES_QUX              (32)
#define SOC_DPP_NOF_LINKS_IN_FSRD_QUX                        (12)
#define SOC_DPP_NOF_VT_PROGRAM_SELECTION_LINES_QUX           (48)
#define SOC_DPP_IHP_VTT_1ST_PROGRAM_SELECTION_TCAM_MASK_NOF_BITS_QUX (51)
#define SOC_DPP_NOF_VT_PROGRAMS_QUX                          (32)
#define SOC_DPP_NOF_VT_KEYS_QUX                              (3)
#define SOC_DPP_NOF_VT_16B_INSTRUCTIONS_QUX                  (8)
#define SOC_DPP_NOF_VT_32B_INSTRUCTIONS_QUX                  (4)
#define SOC_DPP_NOF_VT_INSTRUCTIONS_LSB_QUX                  (12)
#define SOC_DPP_NOF_VT_CYCLES_QUX                            (1)
#define SOC_DPP_NOF_VT_80B_ZONES_QUX                         (1)
#define SOC_DPP_NOF_VT_KEY_ZONES_QUX                         (1)
#define SOC_DPP_NOF_VT_KEY_ZONE_BITS_QUX                     (160)
#define SOC_DPP_VT_CE_BUFFER_LENGTH_QUX                      (664)
#define SOC_DPP_NOF_TT_PROGRAM_SELECTION_LINES_QUX           (48)
#define SOC_DPP_IHP_VTT_2ND_PROGRAM_SELECTION_TCAM_MASK_NOF_BITS_QUX (71)
#define SOC_DPP_NOF_TT_PROGRAMS_QUX                          (32)
#define SOC_DPP_NOF_TT_KEYS_QUX                              (3)
#define SOC_DPP_NOF_TT_16B_INSTRUCTIONS_QUX                  (8)
#define SOC_DPP_NOF_TT_32B_INSTRUCTIONS_QUX                  (4)
#define SOC_DPP_NOF_TT_INSTRUCTIONS_LSB_QUX                  (12)
#define SOC_DPP_NOF_TT_CYCLES_QUX                            (1)
#define SOC_DPP_NOF_TT_80B_ZONES_QUX                         (1)
#define SOC_DPP_NOF_TT_KEY_ZONES_QUX                         (1)
#define SOC_DPP_NOF_TT_KEY_ZONE_BITS_QUX                     (160)
#define SOC_DPP_TT_CE_BUFFER_LENGTH_QUX                      (832)
#define SOC_DPP_MAX_GBPS_RATE_EGQ_QUX                        (200)
#define SOC_DPP_MAX_GBPS_RATE_SCH_QUX                        (360)
#define SOC_DPP_SIZE_OF_OAM_KEY_QUX                          (18)
#define SOC_DPP_FC_INB_CAL_LEN_MAX_QUX                       (256)
#define SOC_DPP_ITM_GLOB_RCS_FC_BDBS_SIZE_MAX_QUX            (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_UC_SIZE_MAX_QUX              (0)
#define SOC_DPP_ITM_GLOB_RCS_FC_FMC_SIZE_MAX_QUX             (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_HEADROOM_PD_SIZE_MAX_QUX     (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_HEADROOM_SIZE_MAX_QUX        (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_MNMC_SIZE_MAX_QUX            (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_OCB_SIZE_MAX_QUX             (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_P0_BYTE_SIZE_MAX_QUX         (0x7f800000)
#define SOC_DPP_ITM_GLOB_RCS_FC_P0_PD_SIZE_MAX_QUX           (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_P0_SIZE_MAX_QUX              (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_P1_BYTE_SIZE_MAX_QUX         (0x7f800000)
#define SOC_DPP_ITM_GLOB_RCS_FC_P1_PD_SIZE_MAX_QUX           (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_P1_SIZE_MAX_QUX              (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_OCB_P0_SIZE_MAX_QUX          (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_OCB_P1_SIZE_MAX_QUX          (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_OCB_PDB_SIZE_MAX_QUX         (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_MIX_P0_SIZE_MAX_QUX          (0x7f8000)
#define SOC_DPP_ITM_GLOB_RCS_FC_MIX_P1_SIZE_MAX_QUX          (0x7f8000)
#define SOC_DPP_MAX_OOB_WD_PERIOD_QUX                        (0xffff)
#define SOC_DPP_IP_TUNNEL_LIF_LEARN_DATA_NOF_BITS_QUX        (18)
#define SOC_DPP_AC_MP_LIF_LEARN_DATA_NOF_BITS_QUX            (17)
#define SOC_DPP_IP_TUNNEL_LIF_UC_FLOW_LEARN_DATA_STATIC_LSBS_QUX (0)
#define SOC_DPP_AC_MP_LIF_UC_FLOW_LEARN_DATA_STATIC_LSBS_QUX (1)
#define SOC_DPP_ENCODE_DEST_PREFIX_NOF_BITS_19_FEC_PTR_QUX   (2)
#define SOC_DPP_ENCODE_DEST_PREFIX_VALUE_19_FEC_PTR_QUX      (1)
#define SOC_DPP_ENCODE_DEST_PREFIX_NOF_BITS_19_MC_ID_QUX     (2)
#define SOC_DPP_ENCODE_DEST_PREFIX_VALUE_19_MC_ID_QUX        (2)
#define SOC_DPP_ENCODE_DEST_PREFIX_VALUE_19_SYS_PORT_QUX     (1)
#define SOC_DPP_MAC_COUNTER_FIRST_QUX                        (0)
#define SOC_DPP_FID_NOF_BITS_QUX                             (15)
#define SOC_DPP_SCM_QP_TCG_CR_TO_ADD_NOF_BITS_QUX            (20)
#define SOC_DPP_NOF_EPNI_ISID_QUX                            (32 * 1024)
#define SOC_DPP_SOURCE_ROUTED_CELLS_HEADER_OFFSET_QUX        (32)
#define SOC_DPP_EGQ_QDCT_PD_MAX_VAL_QUX                      (32767)
#define SOC_DPP_EGR_PRGE_NOF_PROG_SEL_TCAM_ENTRIES_QUX       (64)
#define SOC_DPP_NOF_RIF_PROFILES_QUX                         (16)
#define SOC_DPP_FLOW_REGION_FIXED_TYPE0_END_QUX              (112)
#define SOC_DPP_NOF_PM4X25_QUX                               (0)
#define SOC_DPP_NOF_PM4X2P5_QUX                              (7)
#define SOC_DPP_NOF_PM4X10_QUX                               (2)
#define SOC_DPP_NOF_PM4X10Q_QUX                              (0)
#define SOC_DPP_PMH_BASE_LANE_QUX                            (0)
#define SOC_DPP_PML0_BASE_LANE_QUX                           (0)
#define SOC_DPP_PML1_BASE_LANE_QUX                           (0)
#define SOC_DPP_PMX_BASE_LANE_QUX                            (8)
#define SOC_DPP_PML_BASE_LANE_QUX                            (0)
#define SOC_DPP_NOF_PMS_PER_NBI_QUX                          (9)
#define SOC_DPP_NOF_PMS_QUX                                  (9)
#define SOC_DPP_NOF_INSTANCES_NBIL_QUX                       (1)
#define SOC_DPP_NOF_LANES_PER_NBI_QUX                        (36)
#define SOC_DPP_NOF_PORTS_NBIH_QUX                           (0)
#define SOC_DPP_NOF_PORTS_NBIL_QUX                           (36)
#define SOC_DPP_PLL_TYPE_PMH_LAST_PHY_LANE_QUX               (15)
#define SOC_DPP_PLL_TYPE_PML0_LAST_PHY_LANE_QUX              (67)
#define SOC_DPP_PLL_TYPE_PML1_LAST_PHY_LANE_QUX              (123)
#define SOC_DPP_PLL_TYPE_PMX_LAST_PHY_LANE_QUX               (35)
#define SOC_DPP_PLL_TYPE_PML_LAST_PHY_LANE_QUX               (7)
#define SOC_DPP_XAUI_IF_BASE_LANE_QUX                        (1)
#define SOC_DPP_RXAUI_IF_BASE_LANE_QUX                       (1)
#define SOC_DPP_NOF_OUT_VSI_QUX                              (32 * 1024)
#define SOC_DPP_SIZE_OF_PDM_EXTENSION_QUX                    (15)
#define SOC_DPP_OAMP_PE_LFEM_NOF_QUX                         (31)
#define SOC_DPP_SYS_HDRS_FORMAT_CODE_BITS_QUX                (5)
#define SOC_DPP_VALUE_1_OFFSET_BITS_QUX                      (6)
#define SOC_DPP_VALUE_2_OFFSET_BITS_QUX                      (6)
#define SOC_DPP_SYS_HDRS_FORMAT_CODE_PROFILES_QUX            (32)
#define SOC_DPP_VXLAN_TUNNEL_TERM_IN_SEM_MY_VTEP_INDEX_NOF_BITS_QUX (4)
#define SOC_DPP_NOF_PP_PORTS_PER_CORE_QUX                    (256)
#define SOC_DPP_LLVP_PROFILES_COUNT_QUX                      (7)
#define SOC_DPP_METER_POINTER_NOF_BITS_QUX                   (16)
#define SOC_DPP_NOF_INLIF_BANKS_QUX                          (1)
#define SOC_DPP_NOF_LOCAL_LIFS_PER_BANK_QUX                  (24 * 1024)
#define SOC_DPP_MAX_VSQ_RT_CLS_QUX                           (15)
#define SOC_DPP_MAX_VSQ_A_RT_CLS_QUX                         (3)
#define SOC_DPP_NOF_VSQ_A_QUX                                (4)
#define SOC_DPP_NOF_VSQ_B_QUX                                (32)
#define SOC_DPP_NOF_VSQ_C_QUX                                (128)
#define SOC_DPP_NOF_VSQ_D_QUX                                (256)
#define SOC_DPP_NOF_VSQ_E_QUX                                (40)
#define SOC_DPP_NOF_VSQ_F_QUX                                (128)
#define SOC_DPP_MIN_INTERDIGIT_FLOW_QUARTET_QUX              (16 * 1024 / 4)
#define SOC_DPP_VSQ_OCB_ONLY_SUPPORT_QUX                     (0)
#define SOC_DPP_FIELD_LARGE_DIRECT_LU_KEY_MIN_LENGTH_QUX     (12)
#define SOC_DPP_FIELD_LARGE_DIRECT_LU_KEY_MAX_LENGTH_QUX     (16)
#define SOC_DPP_MAX_OAMP_MEP_DB_ENTRY_ID_BITS_QUX            (8)
#define SOC_DPP_FEM_KEY_SELECT_NOP_QUX                       (127)
#define SOC_DPP_GRANULARITY_MODEM_BIT_SHAPER_RATE_QUX        (30518)


int soc_dpp_qux_defines_init(int unit);
int soc_dpp_qux_defines_deinit(int unit);


#else 
#define SOC_DPP_GET_QUX(dpp_define)    0
#endif 
#endif 


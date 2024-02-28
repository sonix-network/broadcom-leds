/*
 * 
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 * FE3200 INTERRUPTS H
 * Auto jenerated by create_regs.pl
 */

#ifndef _FE3200_INTR_H_
#define _FE3200_INTR_H_


int fe3200_interrupts_dfe_control_data_init(int unit);  
void fe3200_interrupts_dfe_control_data_deinit(int unit);
int soc_fe3200_interrupt_all_enable_set(int unit, int enable);
int soc_fe3200_interrupt_all_enable_get(int unit, int *enable);

int soc_fe3200_nof_interrupts(int unit, int *nof_interrupts);
int fe3200_interrupts_array_init(int unit);
void fe3200_interrupts_array_deinit(int unit);
int soc_fe3200_interrupts_init(int unit);
int soc_fe3200_interrupts_deinit(int unit);
int soc_fe3200_interrupts_disable(int unit);
int soc_fe3200_ser_init(int unit);




typedef enum {
    FE3200_INT_RTP_ERROR_ECC = 0,
    FE3200_INT_RTP_DRHP_0_INT_REG = 1,
    FE3200_INT_RTP_DRHP_1_INT_REG = 2,
    FE3200_INT_RTP_DRHP_2_INT_REG = 3,
    FE3200_INT_RTP_DRHP_3_INT_REG = 4,
    FE3200_INT_RTP_CRH_0_INT_REG = 5,
    FE3200_INT_RTP_CRH_1_INT_REG = 6,
    FE3200_INT_RTP_CRH_2_INT_REG = 7,
    FE3200_INT_RTP_CRH_3_INT_REG = 8,
    FE3200_INT_RTP_GENERAL_INT_REG = 9,
    FE3200_INT_RTP_ECC_PARITY_ERR_INT = 10,
    FE3200_INT_RTP_ECC_ECC_1B_ERR_INT = 11,
    FE3200_INT_RTP_ECC_ECC_2B_ERR_INT = 12,
    FE3200_INT_RTP_DRHP_0_DRHP_N_QUERY_EMPTY_MULTICAST_ID_INT = 13,
    FE3200_INT_RTP_DRHP_0_DRHP_N_QUERY_EMPTY_LINK_MAP_INT = 14,
    FE3200_INT_RTP_DRHP_0_DRHP_N_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 15,
    FE3200_INT_RTP_DRHP_0_DRHP_N_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 16,
    FE3200_INT_RTP_DRHP_0_DRHP_N_QUERY_UNREACHABLE_MULTICAST_INT = 17,
    FE3200_INT_RTP_DRHP_1_DRHP_N_QUERY_EMPTY_MULTICAST_ID_INT = 18,
    FE3200_INT_RTP_DRHP_1_DRHP_N_QUERY_EMPTY_LINK_MAP_INT = 19,
    FE3200_INT_RTP_DRHP_1_DRHP_N_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 20,
    FE3200_INT_RTP_DRHP_1_DRHP_N_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 21,
    FE3200_INT_RTP_DRHP_1_DRHP_N_QUERY_UNREACHABLE_MULTICAST_INT = 22,
    FE3200_INT_RTP_DRHP_2_DRHP_N_QUERY_EMPTY_MULTICAST_ID_INT = 23,
    FE3200_INT_RTP_DRHP_2_DRHP_N_QUERY_EMPTY_LINK_MAP_INT = 24,
    FE3200_INT_RTP_DRHP_2_DRHP_N_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 25,
    FE3200_INT_RTP_DRHP_2_DRHP_N_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 26,
    FE3200_INT_RTP_DRHP_2_DRHP_N_QUERY_UNREACHABLE_MULTICAST_INT = 27,
    FE3200_INT_RTP_DRHP_3_DRHP_N_QUERY_EMPTY_MULTICAST_ID_INT = 28,
    FE3200_INT_RTP_DRHP_3_DRHP_N_QUERY_EMPTY_LINK_MAP_INT = 29,
    FE3200_INT_RTP_DRHP_3_DRHP_N_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 30,
    FE3200_INT_RTP_DRHP_3_DRHP_N_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 31,
    FE3200_INT_RTP_DRHP_3_DRHP_N_QUERY_UNREACHABLE_MULTICAST_INT = 32,
    FE3200_INT_RTP_CRH_0_CRH_N_QUERY_EMPTY_LINK_MAP_INT = 33,
    FE3200_INT_RTP_CRH_0_CRH_N_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 34,
    FE3200_INT_RTP_CRH_0_CRH_N_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 35,
    FE3200_INT_RTP_CRH_1_CRH_N_QUERY_EMPTY_LINK_MAP_INT = 36,
    FE3200_INT_RTP_CRH_1_CRH_N_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 37,
    FE3200_INT_RTP_CRH_1_CRH_N_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 38,
    FE3200_INT_RTP_CRH_2_CRH_N_QUERY_EMPTY_LINK_MAP_INT = 39,
    FE3200_INT_RTP_CRH_2_CRH_N_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 40,
    FE3200_INT_RTP_CRH_2_CRH_N_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 41,
    FE3200_INT_RTP_CRH_3_CRH_N_QUERY_EMPTY_LINK_MAP_INT = 42,
    FE3200_INT_RTP_CRH_3_CRH_N_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 43,
    FE3200_INT_RTP_CRH_3_CRH_N_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 44,
    FE3200_INT_RTP_GENERAL_LINK_INTEGRITY_CHANGED_INT = 45,
    FE3200_INT_RTP_GENERAL_UNICAST_TABLE_CHANGED_INT = 46,
    FE3200_INT_RTP_GENERAL_MCID_OUT_OF_RANGE_INT = 47,
    FE3200_INT_DCMC_DCQ_0_LB_CNT_UNDERFLOW_P_0_INT = 48,
    FE3200_INT_DCMC_DCQ_0_LB_CNT_UNDERFLOW_P_1_INT = 49,
    FE3200_INT_DCMC_DCQ_0_LB_CNT_UNDERFLOW_P_2_INT = 50,
    FE3200_INT_DCMC_DCQ_1_LB_CNT_UNDERFLOW_P_0_INT = 51,
    FE3200_INT_DCMC_DCQ_1_LB_CNT_UNDERFLOW_P_1_INT = 52,
    FE3200_INT_DCMC_DCQ_1_LB_CNT_UNDERFLOW_P_2_INT = 53,
    FE3200_INT_DCMC_DCQ_2_LB_CNT_UNDERFLOW_P_0_INT = 54,
    FE3200_INT_DCMC_DCQ_2_LB_CNT_UNDERFLOW_P_1_INT = 55,
    FE3200_INT_DCMC_DCQ_2_LB_CNT_UNDERFLOW_P_2_INT = 56,
    FE3200_INT_DCMC_DCQ_3_LB_CNT_UNDERFLOW_P_0_INT = 57,
    FE3200_INT_DCMC_DCQ_3_LB_CNT_UNDERFLOW_P_1_INT = 58,
    FE3200_INT_DCMC_DCQ_3_LB_CNT_UNDERFLOW_P_2_INT = 59,
    FE3200_INT_DCL_ERROR_ECC = 60,
    FE3200_INT_DCL_CCP_0_SRC_DV_CNG_LINK_INT = 61,
    FE3200_INT_DCL_CCP_1_SRC_DV_CNG_LINK_INT = 62,
    FE3200_INT_DCL_CCP_0_ILL_CELL_INT = 63,
    FE3200_INT_DCL_CCP_1_ILL_CELL_INT = 64,
    FE3200_INT_DCL_CCP_0_CHF_OVF_INT = 65,
    FE3200_INT_DCL_CCP_0_CLF_OVF_INT = 66,
    FE3200_INT_DCL_CCP_1_CHF_OVF_INT = 67,
    FE3200_INT_DCL_CCP_1_CLF_OVF_INT = 68,
    FE3200_INT_DCL_DCL_P_0_TAG_PAR_ERR_INT = 69,
    FE3200_INT_DCL_DCL_P_1_TAG_PAR_ERR_INT = 70,
    FE3200_INT_DCL_DCL_P_2_TAG_PAR_ERR_INT = 71,
    FE3200_INT_DCL_MACA_DATA_CRC_ERR_INT = 72,
    FE3200_INT_DCL_MACB_DATA_CRC_ERR_INT = 73,
    FE3200_INT_DCL_MACC_DATA_CRC_ERR_INT = 74,
    FE3200_INT_DCL_DRP_IP_P_0_INT = 75,
    FE3200_INT_DCL_DRP_IP_P_1_INT = 76,
    FE3200_INT_DCL_DRP_IP_P_2_INT = 77,
    FE3200_INT_DCL_DCL_P_0_LLFC_INT = 78,
    FE3200_INT_DCL_DCL_P_1_LLFC_INT = 79,
    FE3200_INT_DCL_DCL_P_2_LLFC_INT = 80,
    FE3200_INT_DCL_CPU_CELL_FIFO_NE_INT = 81,
    FE3200_INT_DCL_SOV_ERR_P_0_INT = 82,
    FE3200_INT_DCL_SOV_ERR_P_1_INT = 83,
    FE3200_INT_DCL_SOV_ERR_P_2_INT = 84,
    FE3200_INT_DCL_PCP_ERR_INT = 85,
    FE3200_INT_DCL_DRP_CPU_CELL_INT = 86,
    FE3200_INT_DCL_ECC_PARITY_ERR_INT = 87,
    FE3200_INT_DCL_ECC_ECC_1B_ERR_INT = 88,
    FE3200_INT_DCL_ECC_ECC_2B_ERR_INT = 89,
    FE3200_INT_OCCG_TRANSACTION_REG_CMD_FINISH_INT = 90,
    FE3200_INT_OCCG_GEN_DATA_CELL_CMD_FINISH_INT = 91,
    FE3200_INT_OCCG_GEN_CONTROL_CELL_CMD_FINISH_INT = 92,
    FE3200_INT_OCCG_CAPTURE_DATA_CELL_CMD_FINISH_INT = 93,
    FE3200_INT_OCCG_CAPTURE_CONTROL_CELL_CMD_FINISH_INT = 94,
    FE3200_INT_OCCG_TEST_MODE_CMD_FINISH_INT = 95,
    FE3200_INT_CCS_ERROR_ECC = 96,
    FE3200_INT_CCS_CPU_CAPT_CELL_FNE_INT = 97,
    FE3200_INT_CCS_UNRCH_DST_INT = 98,
    FE3200_INT_CCS_CDMA_LP_FIF_OVF_INT = 99,
    FE3200_INT_CCS_CDMB_LP_FIF_OVF_INT = 100,
    FE3200_INT_CCS_CDMC_LP_FIF_OVF_INT = 101,
    FE3200_INT_CCS_CDMD_LP_FIF_OVF_INT = 102,
    FE3200_INT_CCS_GSYNC_DSCRD_INT = 103,
    FE3200_INT_CCS_CRP_PARITY_ERR_INT = 104,
    FE3200_INT_CCS_ECC_ECC_1B_ERR_INT = 105,
    FE3200_INT_CCS_ECC_ECC_2B_ERR_INT = 106,
    FE3200_INT_DCM_ERROR_ECC = 107,
    FE3200_INT_DCM_DRP_P_0_INT = 108,
    FE3200_INT_DCM_DRP_P_1_INT = 109,
    FE3200_INT_DCM_DRP_P_2_INT = 110,
    FE3200_INT_DCM_DRP_IP_P_0_INT = 111,
    FE3200_INT_DCM_DRP_IP_P_1_INT = 112,
    FE3200_INT_DCM_DRP_IP_P_2_INT = 113,
    FE3200_INT_DCM_MC_LP_CELL_DRP_P_0_INT = 114,
    FE3200_INT_DCM_MC_LP_CELL_DRP_P_1_INT = 115,
    FE3200_INT_DCM_MC_LP_CELL_DRP_P_2_INT = 116,
    FE3200_INT_DCM_OUT_OF_SYNC_P_0_INT = 117,
    FE3200_INT_DCM_OUT_OF_SYNC_P_1_INT = 118,
    FE3200_INT_DCM_OUT_OF_SYNC_P_2_INT = 119,
    FE3200_INT_DCM_ECC_PARITY_ERR_INT = 120,
    FE3200_INT_DCM_ECC_ECC_1B_ERR_INT = 121,
    FE3200_INT_DCM_ECC_ECC_2B_ERR_INT = 122,
    FE3200_INT_DCH_ERROR_ECC = 123,
    FE3200_INT_DCH_DCH_P_0_DESCCNTO = 124,
    FE3200_INT_DCH_DCH_P_1_DESCCNTO = 125,
    FE3200_INT_DCH_DCH_P_2_DESCCNTO = 126,
    FE3200_INT_DCH_IFMFO_P_0_INT = 127,
    FE3200_INT_DCH_IFMFO_P_1_INT = 128,
    FE3200_INT_DCH_IFMFO_P_2_INT = 129,
    FE3200_INT_DCH_CPUDATACELLFNE_A_INT = 130,
    FE3200_INT_DCH_CPUDATACELLFNE_B_INT = 131,
    FE3200_INT_DCH_CPUDATACELLFNE_C_INT = 132,
    FE3200_INT_DCH_CPUDATACELLFNE_D_INT = 133,
    FE3200_INT_DCH_UNREACH_DEST_EV_INT = 134,
    FE3200_INT_DCH_ERROR_FILTER_INT = 135,
    FE3200_INT_DCH_TYPE_ERR_INT = 136,
    FE3200_INT_DCH_DCH_UN_EXP_CELL_P_0 = 137,
    FE3200_INT_DCH_ALTO_P_0_INT = 138,
    FE3200_INT_DCH_DCH_UN_EXP_ERROR_P_0 = 139,
    FE3200_INT_DCH_OUT_OF_SYNC_INT_P_0 = 140,
    FE3200_INT_DCH_DCH_UN_EXP_CELL_2_P_0 = 141,
    FE3200_INT_DCH_DCH_UN_EXP_CELL_P_1 = 142,
    FE3200_INT_DCH_ALTO_P_1_INT = 143,
    FE3200_INT_DCH_DCH_UN_EXP_ERROR_P_1 = 144,
    FE3200_INT_DCH_OUT_OF_SYNC_INT_P_1 = 145,
    FE3200_INT_DCH_DCH_UN_EXP_CELL_2_P_1 = 146,
    FE3200_INT_DCH_DCH_UN_EXP_CELL_P_2 = 147,
    FE3200_INT_DCH_ALTO_P_2_INT = 148,
    FE3200_INT_DCH_DCH_UN_EXP_ERROR_P_2 = 149,
    FE3200_INT_DCH_OUT_OF_SYNC_INT_P_2 = 150,
    FE3200_INT_DCH_DCH_UN_EXP_CELL_2_P_2 = 151,
    FE3200_INT_DCH_ECC_PARITY_ERR_INT = 152,
    FE3200_INT_DCH_ECC_ECC_1B_ERR_INT = 153,
    FE3200_INT_DCH_ECC_ECC_2B_ERR_INT = 154,
    FE3200_INT_FSRD_ERROR_ECC = 155,
    FE3200_INT_FSRD_INT_REG_0 = 156,
    FE3200_INT_FSRD_INT_REG_1 = 157,
    FE3200_INT_FSRD_INT_REG_2 = 158,
    FE3200_INT_FSRD_ECC_PARITY_ERR_INT = 159,
    FE3200_INT_FSRD_ECC_ECC_1B_ERR_INT = 160,
    FE3200_INT_FSRD_ECC_ECC_2B_ERR_INT = 161,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_0 = 162,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_1 = 163,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_2 = 164,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_3 = 165,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_0 = 166,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_1 = 167,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_2 = 168,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_3 = 169,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_ENERGY_DETECT_CHANGED_0 = 170,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_ENERGY_DETECT_CHANGED_1 = 171,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_ENERGY_DETECT_CHANGED_2 = 172,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_ENERGY_DETECT_CHANGED_3 = 173,
    FE3200_INT_FSRD_QUAD_0_FSRD_N_TXPLL_LOCK_CHANGED = 174,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_SYNC_STATUS_CHANGED_0 = 175,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_SYNC_STATUS_CHANGED_1 = 176,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_SYNC_STATUS_CHANGED_2 = 177,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_SYNC_STATUS_CHANGED_3 = 178,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_RX_LOCK_CHANGED_0 = 179,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_RX_LOCK_CHANGED_1 = 180,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_RX_LOCK_CHANGED_2 = 181,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_RX_LOCK_CHANGED_3 = 182,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_ENERGY_DETECT_CHANGED_0 = 183,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_ENERGY_DETECT_CHANGED_1 = 184,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_ENERGY_DETECT_CHANGED_2 = 185,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_ENERGY_DETECT_CHANGED_3 = 186,
    FE3200_INT_FSRD_QUAD_1_FSRD_N_TXPLL_LOCK_CHANGED = 187,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_SYNC_STATUS_CHANGED_0 = 188,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_SYNC_STATUS_CHANGED_1 = 189,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_SYNC_STATUS_CHANGED_2 = 190,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_SYNC_STATUS_CHANGED_3 = 191,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_RX_LOCK_CHANGED_0 = 192,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_RX_LOCK_CHANGED_1 = 193,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_RX_LOCK_CHANGED_2 = 194,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_RX_LOCK_CHANGED_3 = 195,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_ENERGY_DETECT_CHANGED_0 = 196,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_ENERGY_DETECT_CHANGED_1 = 197,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_ENERGY_DETECT_CHANGED_2 = 198,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_ENERGY_DETECT_CHANGED_3 = 199,
    FE3200_INT_FSRD_QUAD_2_FSRD_N_TXPLL_LOCK_CHANGED = 200,
    FE3200_INT_FMAC_ERROR_ECC = 201,
    FE3200_INT_FMAC_INT_REG_1 = 202,
    FE3200_INT_FMAC_INT_REG_2 = 203,
    FE3200_INT_FMAC_INT_REG_3 = 204,
    FE3200_INT_FMAC_INT_REG_4 = 205,
    FE3200_INT_FMAC_INT_REG_5 = 206,
    FE3200_INT_FMAC_INT_REG_6 = 207,
    FE3200_INT_FMAC_INT_REG_7 = 208,
    FE3200_INT_FMAC_INT_REG_8 = 209,
    FE3200_INT_FMAC_ECC_PARITY_ERR_INT = 210,
    FE3200_INT_FMAC_ECC_ECC_1B_ERR_INT = 211,
    FE3200_INT_FMAC_ECC_ECC_2B_ERR_INT = 212,
    FE3200_INT_FMAC_FMAC_1_RX_CRC_ERR_N_INT_0 = 213,
    FE3200_INT_FMAC_FMAC_1_RX_CRC_ERR_N_INT_1 = 214,
    FE3200_INT_FMAC_FMAC_1_RX_CRC_ERR_N_INT_2 = 215,
    FE3200_INT_FMAC_FMAC_1_RX_CRC_ERR_N_INT_3 = 216,
    FE3200_INT_FMAC_FMAC_1_WRONG_SIZE_INT_0 = 217,
    FE3200_INT_FMAC_FMAC_1_WRONG_SIZE_INT_1 = 218,
    FE3200_INT_FMAC_FMAC_1_WRONG_SIZE_INT_2 = 219,
    FE3200_INT_FMAC_FMAC_1_WRONG_SIZE_INT_3 = 220,
    FE3200_INT_FMAC_FMAC_2_LOS_INT_0 = 221,
    FE3200_INT_FMAC_FMAC_2_LOS_INT_1 = 222,
    FE3200_INT_FMAC_FMAC_2_LOS_INT_2 = 223,
    FE3200_INT_FMAC_FMAC_2_LOS_INT_3 = 224,
    FE3200_INT_FMAC_FMAC_2_RX_LOST_OF_SYNC_0 = 225,
    FE3200_INT_FMAC_FMAC_2_RX_LOST_OF_SYNC_1 = 226,
    FE3200_INT_FMAC_FMAC_2_RX_LOST_OF_SYNC_2 = 227,
    FE3200_INT_FMAC_FMAC_2_RX_LOST_OF_SYNC_3 = 228,
    FE3200_INT_FMAC_FMAC_3_LNKLVL_AGE_N_INT_0 = 229,
    FE3200_INT_FMAC_FMAC_3_LNKLVL_AGE_N_INT_1 = 230,
    FE3200_INT_FMAC_FMAC_3_LNKLVL_AGE_N_INT_2 = 231,
    FE3200_INT_FMAC_FMAC_3_LNKLVL_AGE_N_INT_3 = 232,
    FE3200_INT_FMAC_FMAC_3_LNKLVL_HALT_N_INT_0 = 233,
    FE3200_INT_FMAC_FMAC_3_LNKLVL_HALT_N_INT_1 = 234,
    FE3200_INT_FMAC_FMAC_3_LNKLVL_HALT_N_INT_2 = 235,
    FE3200_INT_FMAC_FMAC_3_LNKLVL_HALT_N_INT_3 = 236,
    FE3200_INT_FMAC_FMAC_4_OOF_INT_0 = 237,
    FE3200_INT_FMAC_FMAC_4_OOF_INT_1 = 238,
    FE3200_INT_FMAC_FMAC_4_OOF_INT_2 = 239,
    FE3200_INT_FMAC_FMAC_4_OOF_INT_3 = 240,
    FE3200_INT_FMAC_FMAC_4_DEC_ERR_INT_0 = 241,
    FE3200_INT_FMAC_FMAC_4_DEC_ERR_INT_1 = 242,
    FE3200_INT_FMAC_FMAC_4_DEC_ERR_INT_2 = 243,
    FE3200_INT_FMAC_FMAC_4_DEC_ERR_INT_3 = 244,
    FE3200_INT_FMAC_FMAC_5_TRANSMIT_ERR_INT_0 = 245,
    FE3200_INT_FMAC_FMAC_5_TRANSMIT_ERR_INT_1 = 246,
    FE3200_INT_FMAC_FMAC_5_TRANSMIT_ERR_INT_2 = 247,
    FE3200_INT_FMAC_FMAC_5_TRANSMIT_ERR_INT_3 = 248,
    FE3200_INT_FMAC_FMAC_5_RX_CTRL_OVERFLOW_INT_0 = 249,
    FE3200_INT_FMAC_FMAC_5_RX_CTRL_OVERFLOW_INT_1 = 250,
    FE3200_INT_FMAC_FMAC_5_RX_CTRL_OVERFLOW_INT_2 = 251,
    FE3200_INT_FMAC_FMAC_5_RX_CTRL_OVERFLOW_INT_3 = 252,
    FE3200_INT_FMAC_FMAC_6_LNKLVL_AGE_CTX_BN_INT_0 = 253,
    FE3200_INT_FMAC_FMAC_6_LNKLVL_AGE_CTX_BN_INT_1 = 254,
    FE3200_INT_FMAC_FMAC_6_LNKLVL_AGE_CTX_BN_INT_2 = 255,
    FE3200_INT_FMAC_FMAC_6_LNKLVL_AGE_CTX_BN_INT_3 = 256,
    FE3200_INT_FMAC_FMAC_6_LNKLVL_HALT_CTX_BN_INT_0 = 257,
    FE3200_INT_FMAC_FMAC_6_LNKLVL_HALT_CTX_BN_INT_1 = 258,
    FE3200_INT_FMAC_FMAC_6_LNKLVL_HALT_CTX_BN_INT_2 = 259,
    FE3200_INT_FMAC_FMAC_6_LNKLVL_HALT_CTX_BN_INT_3 = 260,
    FE3200_INT_FMAC_FMAC_7_LNKLVL_AGE_CTX_CN_INT_0 = 261,
    FE3200_INT_FMAC_FMAC_7_LNKLVL_AGE_CTX_CN_INT_1 = 262,
    FE3200_INT_FMAC_FMAC_7_LNKLVL_AGE_CTX_CN_INT_2 = 263,
    FE3200_INT_FMAC_FMAC_7_LNKLVL_AGE_CTX_CN_INT_3 = 264,
    FE3200_INT_FMAC_FMAC_7_LNKLVL_HALT_CTX_CN_INT_0 = 265,
    FE3200_INT_FMAC_FMAC_7_LNKLVL_HALT_CTX_CN_INT_1 = 266,
    FE3200_INT_FMAC_FMAC_7_LNKLVL_HALT_CTX_CN_INT_2 = 267,
    FE3200_INT_FMAC_FMAC_7_LNKLVL_HALT_CTX_CN_INT_3 = 268,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_CRC_INT_0 = 269,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_CRC_INT_1 = 270,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_CRC_INT_2 = 271,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_CRC_INT_3 = 272,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_PARITY_INT_0 = 273,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_PARITY_INT_1 = 274,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_PARITY_INT_2 = 275,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_PARITY_INT_3 = 276,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_FAULT_INT_0 = 277,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_FAULT_INT_1 = 278,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_FAULT_INT_2 = 279,
    FE3200_INT_FMAC_FMAC_8_TX_FDRC_IF_FAULT_INT_3 = 280,
    FE3200_INT_ECI_ERROR_ECC = 281,
    FE3200_INT_ECI_MBU_INT = 282,
    FE3200_INT_ECI_UC_PLL_LOCKED_LOST = 283,
    FE3200_INT_ECI_CORE_PLL_LOCKED_LOST = 284,
    FE3200_INT_ECI_MISC_PLL_0_LOCKED_LOST = 285,
    FE3200_INT_ECI_MISC_PLL_1_LOCKED_LOST = 286,
    FE3200_INT_ECI_MISC_PLL_2_LOCKED_LOST = 287,
    FE3200_INT_ECI_MISC_PLL_3_LOCKED_LOST = 288,
    FE3200_INT_ECI_MISC_PLL_4_LOCKED_LOST = 289,
    FE3200_INT_ECI_MISC_PLL_5_LOCKED_LOST = 290,
    FE3200_INT_ECI_MISC_PLL_6_LOCKED_LOST = 291,
    FE3200_INT_ECI_MISC_PLL_7_LOCKED_LOST = 292,
    FE3200_INT_ECI_MISC_PLL_8_LOCKED_LOST = 293,
    FE3200_INT_ECI_MISC_PLL_9_LOCKED_LOST = 294,
    FE3200_INT_ECI_ECC_PARITY_ERR_INT = 295,
    FE3200_INT_ECI_ECC_ECC_1B_ERR_INT = 296,
    FE3200_INT_ECI_ECC_ECC_2B_ERR_INT = 297,
    FE3200_INT_LAST = 298
} fe3200_interrupt_type;

#define _FE3200_INT_LAST 298

#endif 

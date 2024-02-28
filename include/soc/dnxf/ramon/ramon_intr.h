/*
 * 
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 * RAMON INTERRUPTS H
 * Auto jenerated by create_regs.pl
 */

#ifndef _RAMON_INTR_H_
#define _RAMON_INTR_H_

int soc_ramon_nof_interrupts(
    int unit,
    int *nof_interrupts);

int ramon_interrupts_array_init(
    int unit);

void ramon_interrupts_array_deinit(
    int unit);

int soc_ramon_interrupts_init(
    int unit);

int soc_ramon_interrupts_deinit(
    int unit);

int soc_ramon_interrupts_disable(
    int unit);

int soc_ramon_ser_init(
    int unit);

typedef enum
{
    RAMON_INT_LCM_ERROR_ECC = 0,
    RAMON_INT_LCM_LCM_INT_REG = 1,
    RAMON_INT_LCM_DTL_DRP_CPU_CELL_INT = 2,
    RAMON_INT_LCM_DTL_DRP_LCLRT_CPU_CELL_INT = 3,
    RAMON_INT_LCM_ADMIT_DENY_DFL_FULL_INT = 4,
    RAMON_INT_LCM_ECC_ECC_1B_ERR_INT = 5,
    RAMON_INT_LCM_ECC_ECC_2B_ERR_INT = 6,
    RAMON_INT_LCM_LCM_ADMIT_DENY_DUE_SHARED_MEM_INT = 7,
    RAMON_INT_LCM_LCM_ADMIT_DENY_DUE_DTM_INT = 8,
    RAMON_INT_LCM_LCM_ADMIT_DENY_DUE_LATENCY_INT = 9,
    RAMON_INT_LCM_LCM_LCM_CNT_OVERFLOW_INT = 10,
    RAMON_INT_LCM_LCM_LCM_CNT_UNDERFLOW_INT = 11,
    RAMON_INT_CCH_ERROR_ECC = 12,
    RAMON_INT_CCH_CCP_0_SRC_DV_CNG_LINK_INT = 13,
    RAMON_INT_CCH_CCP_1_SRC_DV_CNG_LINK_INT = 14,
    RAMON_INT_CCH_CCP_0_ILL_CELL_INT = 15,
    RAMON_INT_CCH_CCP_1_ILL_CELL_INT = 16,
    RAMON_INT_CCH_CCP_0_CHF_OVF_INT = 17,
    RAMON_INT_CCH_CCP_0_CLF_OVF_INT = 18,
    RAMON_INT_CCH_CCP_1_CHF_OVF_INT = 19,
    RAMON_INT_CCH_CCP_1_CLF_OVF_INT = 20,
    RAMON_INT_CCH_CPU_CAPT_CELL_FNE_INT = 21,
    RAMON_INT_CCH_UNRCH_DST_INT = 22,
    RAMON_INT_CCH_AUTO_DOC_NAME_1 = 23,
    RAMON_INT_CCH_ECC_ECC_1B_ERR_INT = 24,
    RAMON_INT_CCH_ECC_ECC_2B_ERR_INT = 25,
    RAMON_INT_QRH_ERROR_ECC = 26,
    RAMON_INT_QRH_DRH_INT_REG = 27,
    RAMON_INT_QRH_CRH_INT_REG = 28,
    RAMON_INT_QRH_ECC_ECC_1B_ERR_INT = 29,
    RAMON_INT_QRH_ECC_ECC_2B_ERR_INT = 30,
    RAMON_INT_QRH_DRH_DRH_QUERY_EMPTY_MULTICAST_ID_INT = 31,
    RAMON_INT_QRH_DRH_DRH_QUERY_EMPTY_LINK_MAP_INT = 32,
    RAMON_INT_QRH_DRH_DRH_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 33,
    RAMON_INT_QRH_DRH_DRH_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 34,
    RAMON_INT_QRH_DRH_DRH_QUERY_UNREACHABLE_MULTICAST_INT = 35,
    RAMON_INT_QRH_DRH_DRH_MNOL_DROP_INT = 36,
    RAMON_INT_QRH_CRH_CRH_QUERY_EMPTY_LINK_MAP_INT = 37,
    RAMON_INT_QRH_CRH_CRH_QUERY_DESTINATION_ABOVE_MAX_BASE_INDEX_INT = 38,
    RAMON_INT_QRH_CRH_CRH_QUERY_DESTINATION_ABOVE_UPDATE_BASE_INDEX_INT = 39,
    RAMON_INT_DCML_ERROR_ECC = 40,
    RAMON_INT_DCML_ERROR_FPC_FREE = 41,
    RAMON_INT_DCML_ERROR_FPC_ALLOC = 42,
    RAMON_INT_DCML_DFL_CPU_CELL_FIFO_NE_INT = 43,
    RAMON_INT_DCML_CDMA_LP_FIF_OVF_INT = 44,
    RAMON_INT_DCML_CDMB_LP_FIF_OVF_INT = 45,
    RAMON_INT_DCML_CDMC_LP_FIF_OVF_INT = 46,
    RAMON_INT_DCML_CDMD_LP_FIF_OVF_INT = 47,
    RAMON_INT_DCML_CDME_LP_FIF_OVF_INT = 48,
    RAMON_INT_DCML_CDMF_LP_FIF_OVF_INT = 49,
    RAMON_INT_DCML_CDMG_LP_FIF_OVF_INT = 50,
    RAMON_INT_DCML_CDMH_LP_FIF_OVF_INT = 51,
    RAMON_INT_DCML_ECC_ECC_1B_ERR_INT = 52,
    RAMON_INT_DCML_ECC_ECC_2B_ERR_INT = 53,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_0 = 54,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_1 = 55,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_2 = 56,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_3 = 57,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_4 = 58,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_5 = 59,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_6 = 60,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_7 = 61,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_8 = 62,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_9 = 63,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_10 = 64,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_11 = 65,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_12 = 66,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_13 = 67,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_14 = 68,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_15 = 69,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_16 = 70,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_17 = 71,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_18 = 72,
    RAMON_INT_DCML_FPC_FREE_ERROR_FPC_FREE_ERROR_19 = 73,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_0 = 74,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_1 = 75,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_2 = 76,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_3 = 77,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_4 = 78,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_5 = 79,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_6 = 80,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_7 = 81,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_8 = 82,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_9 = 83,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_10 = 84,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_11 = 85,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_12 = 86,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_13 = 87,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_14 = 88,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_15 = 89,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_16 = 90,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_17 = 91,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_18 = 92,
    RAMON_INT_DCML_FPC_ALLOC_ERROR_FPC_ALLOC_ERROR_19 = 93,
    RAMON_INT_FSRD_ERROR_ECC = 94,
    RAMON_INT_FSRD_INT_REG_0 = 95,
    RAMON_INT_FSRD_ECC_ECC_1B_ERR_INT = 96,
    RAMON_INT_FSRD_ECC_ECC_2B_ERR_INT = 97,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_0 = 98,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_1 = 99,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_2 = 100,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_3 = 101,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_4 = 102,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_5 = 103,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_6 = 104,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_SYNC_STATUS_CHANGED_7 = 105,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_0 = 106,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_1 = 107,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_2 = 108,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_3 = 109,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_4 = 110,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_5 = 111,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_6 = 112,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_RX_LOCK_CHANGED_7 = 113,
    RAMON_INT_FSRD_QUAD_0_AUTO_DOC_NAME_0_0 = 114,
    RAMON_INT_FSRD_QUAD_0_AUTO_DOC_NAME_0_1 = 115,
    RAMON_INT_FSRD_QUAD_0_AUTO_DOC_NAME_0_2 = 116,
    RAMON_INT_FSRD_QUAD_0_AUTO_DOC_NAME_0_3 = 117,
    RAMON_INT_FSRD_QUAD_0_AUTO_DOC_NAME_0_4 = 118,
    RAMON_INT_FSRD_QUAD_0_AUTO_DOC_NAME_0_5 = 119,
    RAMON_INT_FSRD_QUAD_0_AUTO_DOC_NAME_0_6 = 120,
    RAMON_INT_FSRD_QUAD_0_AUTO_DOC_NAME_0_7 = 121,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_PLL_0_LOCK_CHANGED = 122,
    RAMON_INT_FSRD_QUAD_0_FSRD_N_PLL_1_LOCK_CHANGED = 123,
    RAMON_INT_ECI_ERROR_ECC = 124,
    RAMON_INT_ECI_AUTO_DOC_NAME_1 = 125,
    RAMON_INT_ECI_UC_PLL_LOCKED_LOST = 126,
    RAMON_INT_ECI_CORE_PLL_LOCKED_LOST = 127,
    RAMON_INT_ECI_MISC_PLL_0_LOCKED_LOST = 128,
    RAMON_INT_ECI_MISC_PLL_1_LOCKED_LOST = 129,
    RAMON_INT_ECI_MISC_PLL_2_LOCKED_LOST = 130,
    RAMON_INT_ECI_MISC_PLL_3_LOCKED_LOST = 131,
    RAMON_INT_ECI_INTERRUPT_REGISTER_FIELD_0 = 132,
    RAMON_INT_ECI_INTERRUPT_REGISTER_FIELD_1 = 133,
    RAMON_INT_ECI_INTERRUPT_REGISTER_FIELD_2 = 134,
    RAMON_INT_ECI_INTERRUPT_REGISTER_FIELD_3 = 135,
    RAMON_INT_ECI_INTERRUPT_REGISTER_FIELD_4 = 136,
    RAMON_INT_ECI_INTERRUPT_REGISTER_FIELD_5 = 137,
    RAMON_INT_ECI_ECC_ECC_1B_ERR_INT = 138,
    RAMON_INT_ECI_ECC_ECC_2B_ERR_INT = 139,
    RAMON_INT_FMAC_ERROR_ECC = 140,
    RAMON_INT_FMAC_INT_REG_1 = 141,
    RAMON_INT_FMAC_INT_REG_2 = 142,
    RAMON_INT_FMAC_INT_REG_3 = 143,
    RAMON_INT_FMAC_INT_REG_4 = 144,
    RAMON_INT_FMAC_INT_REG_5 = 145,
    RAMON_INT_FMAC_INT_REG_6 = 146,
    RAMON_INT_FMAC_INT_REG_7 = 147,
    RAMON_INT_FMAC_INT_REG_8 = 148,
    RAMON_INT_FMAC_AUTO_DOC_NAME_0_0 = 149,
    RAMON_INT_FMAC_AUTO_DOC_NAME_0_1 = 150,
    RAMON_INT_FMAC_AUTO_DOC_NAME_0_2 = 151,
    RAMON_INT_FMAC_AUTO_DOC_NAME_0_3 = 152,
    RAMON_INT_FMAC_RX_RRR_CRL_OVF_DROP_INT_0 = 153,
    RAMON_INT_FMAC_RX_RRR_CRL_OVF_DROP_INT_1 = 154,
    RAMON_INT_FMAC_RX_RRR_CRL_OVF_DROP_INT_2 = 155,
    RAMON_INT_FMAC_RX_RRR_CRL_OVF_DROP_INT_3 = 156,
    RAMON_INT_FMAC_AUTO_DOC_NAME_2_0 = 157,
    RAMON_INT_FMAC_AUTO_DOC_NAME_2_1 = 158,
    RAMON_INT_FMAC_AUTO_DOC_NAME_2_2 = 159,
    RAMON_INT_FMAC_AUTO_DOC_NAME_2_3 = 160,
    RAMON_INT_FMAC_AUTO_DOC_NAME_3_0 = 161,
    RAMON_INT_FMAC_AUTO_DOC_NAME_3_1 = 162,
    RAMON_INT_FMAC_AUTO_DOC_NAME_3_2 = 163,
    RAMON_INT_FMAC_AUTO_DOC_NAME_3_3 = 164,
    RAMON_INT_FMAC_AUTO_DOC_NAME_4_0 = 165,
    RAMON_INT_FMAC_AUTO_DOC_NAME_4_1 = 166,
    RAMON_INT_FMAC_AUTO_DOC_NAME_4_2 = 167,
    RAMON_INT_FMAC_AUTO_DOC_NAME_4_3 = 168,
    RAMON_INT_FMAC_AUTO_DOC_NAME_5_0 = 169,
    RAMON_INT_FMAC_AUTO_DOC_NAME_5_1 = 170,
    RAMON_INT_FMAC_AUTO_DOC_NAME_5_2 = 171,
    RAMON_INT_FMAC_AUTO_DOC_NAME_5_3 = 172,
    RAMON_INT_FMAC_AUTO_DOC_NAME_6_0 = 173,
    RAMON_INT_FMAC_AUTO_DOC_NAME_6_1 = 174,
    RAMON_INT_FMAC_AUTO_DOC_NAME_6_2 = 175,
    RAMON_INT_FMAC_AUTO_DOC_NAME_6_3 = 176,
    RAMON_INT_FMAC_AUTO_DOC_NAME_7_0 = 177,
    RAMON_INT_FMAC_AUTO_DOC_NAME_7_1 = 178,
    RAMON_INT_FMAC_AUTO_DOC_NAME_7_2 = 179,
    RAMON_INT_FMAC_AUTO_DOC_NAME_7_3 = 180,
    RAMON_INT_FMAC_AUTO_DOC_NAME_8_0 = 181,
    RAMON_INT_FMAC_AUTO_DOC_NAME_8_1 = 182,
    RAMON_INT_FMAC_AUTO_DOC_NAME_8_2 = 183,
    RAMON_INT_FMAC_AUTO_DOC_NAME_8_3 = 184,
    RAMON_INT_FMAC_AUTO_DOC_NAME_9_0 = 185,
    RAMON_INT_FMAC_AUTO_DOC_NAME_9_1 = 186,
    RAMON_INT_FMAC_AUTO_DOC_NAME_9_2 = 187,
    RAMON_INT_FMAC_AUTO_DOC_NAME_9_3 = 188,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_0_0 = 189,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_0_1 = 190,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_0_2 = 191,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_0_3 = 192,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_1_0 = 193,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_1_1 = 194,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_1_2 = 195,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_1_3 = 196,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_2_0 = 197,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_2_1 = 198,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_2_2 = 199,
    RAMON_INT_FMAC_INTERRUPT_REGISTER_FIELD_2_3 = 200,
    RAMON_INT_FMAC_ECC_PARITY_ERR_INT = 201,
    RAMON_INT_FMAC_ECC_ECC_1B_ERR_INT = 202,
    RAMON_INT_FMAC_ECC_ECC_2B_ERR_INT = 203,
    RAMON_INT_FMAC_FMAC_1_RX_CRC_ERR_N_INT_0 = 204,
    RAMON_INT_FMAC_FMAC_1_RX_CRC_ERR_N_INT_1 = 205,
    RAMON_INT_FMAC_FMAC_1_RX_CRC_ERR_N_INT_2 = 206,
    RAMON_INT_FMAC_FMAC_1_RX_CRC_ERR_N_INT_3 = 207,
    RAMON_INT_FMAC_FMAC_1_WRONG_SIZE_INT_0 = 208,
    RAMON_INT_FMAC_FMAC_1_WRONG_SIZE_INT_1 = 209,
    RAMON_INT_FMAC_FMAC_1_WRONG_SIZE_INT_2 = 210,
    RAMON_INT_FMAC_FMAC_1_WRONG_SIZE_INT_3 = 211,
    RAMON_INT_FMAC_FMAC_2_LOS_INT_0 = 212,
    RAMON_INT_FMAC_FMAC_2_LOS_INT_1 = 213,
    RAMON_INT_FMAC_FMAC_2_LOS_INT_2 = 214,
    RAMON_INT_FMAC_FMAC_2_LOS_INT_3 = 215,
    RAMON_INT_FMAC_FMAC_2_RX_LOST_OF_SYNC_0 = 216,
    RAMON_INT_FMAC_FMAC_2_RX_LOST_OF_SYNC_1 = 217,
    RAMON_INT_FMAC_FMAC_2_RX_LOST_OF_SYNC_2 = 218,
    RAMON_INT_FMAC_FMAC_2_RX_LOST_OF_SYNC_3 = 219,
    RAMON_INT_FMAC_FMAC_3_LNKLVL_AGE_N_INT_0 = 220,
    RAMON_INT_FMAC_FMAC_3_LNKLVL_AGE_N_INT_1 = 221,
    RAMON_INT_FMAC_FMAC_3_LNKLVL_AGE_N_INT_2 = 222,
    RAMON_INT_FMAC_FMAC_3_LNKLVL_AGE_N_INT_3 = 223,
    RAMON_INT_FMAC_FMAC_3_LNKLVL_HALT_N_INT_0 = 224,
    RAMON_INT_FMAC_FMAC_3_LNKLVL_HALT_N_INT_1 = 225,
    RAMON_INT_FMAC_FMAC_3_LNKLVL_HALT_N_INT_2 = 226,
    RAMON_INT_FMAC_FMAC_3_LNKLVL_HALT_N_INT_3 = 227,
    RAMON_INT_FMAC_FMAC_4_OOF_INT_0 = 228,
    RAMON_INT_FMAC_FMAC_4_OOF_INT_1 = 229,
    RAMON_INT_FMAC_FMAC_4_OOF_INT_2 = 230,
    RAMON_INT_FMAC_FMAC_4_OOF_INT_3 = 231,
    RAMON_INT_FMAC_FMAC_4_DEC_ERR_INT_0 = 232,
    RAMON_INT_FMAC_FMAC_4_DEC_ERR_INT_1 = 233,
    RAMON_INT_FMAC_FMAC_4_DEC_ERR_INT_2 = 234,
    RAMON_INT_FMAC_FMAC_4_DEC_ERR_INT_3 = 235,
    RAMON_INT_FMAC_FMAC_5_TRANSMIT_ERR_INT_0 = 236,
    RAMON_INT_FMAC_FMAC_5_TRANSMIT_ERR_INT_1 = 237,
    RAMON_INT_FMAC_FMAC_5_TRANSMIT_ERR_INT_2 = 238,
    RAMON_INT_FMAC_FMAC_5_TRANSMIT_ERR_INT_3 = 239,
    RAMON_INT_FMAC_FMAC_6_LNKLVL_AGE_CTX_BN_INT_0 = 240,
    RAMON_INT_FMAC_FMAC_6_LNKLVL_AGE_CTX_BN_INT_1 = 241,
    RAMON_INT_FMAC_FMAC_6_LNKLVL_AGE_CTX_BN_INT_2 = 242,
    RAMON_INT_FMAC_FMAC_6_LNKLVL_AGE_CTX_BN_INT_3 = 243,
    RAMON_INT_FMAC_FMAC_6_LNKLVL_HALT_CTX_BN_INT_0 = 244,
    RAMON_INT_FMAC_FMAC_6_LNKLVL_HALT_CTX_BN_INT_1 = 245,
    RAMON_INT_FMAC_FMAC_6_LNKLVL_HALT_CTX_BN_INT_2 = 246,
    RAMON_INT_FMAC_FMAC_6_LNKLVL_HALT_CTX_BN_INT_3 = 247,
    RAMON_INT_FMAC_FMAC_7_LNKLVL_AGE_CTX_CN_INT_0 = 248,
    RAMON_INT_FMAC_FMAC_7_LNKLVL_AGE_CTX_CN_INT_1 = 249,
    RAMON_INT_FMAC_FMAC_7_LNKLVL_AGE_CTX_CN_INT_2 = 250,
    RAMON_INT_FMAC_FMAC_7_LNKLVL_AGE_CTX_CN_INT_3 = 251,
    RAMON_INT_FMAC_FMAC_7_LNKLVL_HALT_CTX_CN_INT_0 = 252,
    RAMON_INT_FMAC_FMAC_7_LNKLVL_HALT_CTX_CN_INT_1 = 253,
    RAMON_INT_FMAC_FMAC_7_LNKLVL_HALT_CTX_CN_INT_2 = 254,
    RAMON_INT_FMAC_FMAC_7_LNKLVL_HALT_CTX_CN_INT_3 = 255,
    RAMON_INT_FMAC_FMAC_8_TX_FDRC_IF_CRC_INT_0 = 256,
    RAMON_INT_FMAC_FMAC_8_TX_FDRC_IF_CRC_INT_1 = 257,
    RAMON_INT_FMAC_FMAC_8_TX_FDRC_IF_CRC_INT_2 = 258,
    RAMON_INT_FMAC_FMAC_8_TX_FDRC_IF_CRC_INT_3 = 259,
    RAMON_INT_FMAC_FMAC_8_AUTO_DOC_NAME_11_0 = 260,
    RAMON_INT_FMAC_FMAC_8_AUTO_DOC_NAME_11_1 = 261,
    RAMON_INT_FMAC_FMAC_8_AUTO_DOC_NAME_11_2 = 262,
    RAMON_INT_FMAC_FMAC_8_AUTO_DOC_NAME_11_3 = 263,
    RAMON_INT_FMAC_FMAC_8_TX_FDRC_IF_FAULT_INT_0 = 264,
    RAMON_INT_FMAC_FMAC_8_TX_FDRC_IF_FAULT_INT_1 = 265,
    RAMON_INT_FMAC_FMAC_8_TX_FDRC_IF_FAULT_INT_2 = 266,
    RAMON_INT_FMAC_FMAC_8_TX_FDRC_IF_FAULT_INT_3 = 267,
    RAMON_INT_RTP_ERROR_ECC = 268,
    RAMON_INT_RTP_GENERAL_INT_REG = 269,
    RAMON_INT_RTP_ECC_ECC_1B_ERR_INT = 270,
    RAMON_INT_RTP_ECC_ECC_2B_ERR_INT = 271,
    RAMON_INT_RTP_GENERAL_LINK_INTEGRITY_CHANGED_INT = 272,
    RAMON_INT_RTP_GENERAL_UNICAST_TABLE_CHANGED_INT = 273,
    RAMON_INT_RTP_GENERAL_MCID_OUT_OF_RANGE_INT = 274,
    RAMON_INT_RTP_GENERAL_GPD_MODE_DETECT = 275,
    RAMON_INT_RTP_GENERAL_MASK_GCI_ON = 276,
    RAMON_INT_MESH_TOPOLOGY_SYNC_LOSS = 277,
    RAMON_INT_MESH_TOPOLOGY_SYNC_TIME_OUT = 278,
    RAMON_INT_OCCG_TRANSACTION_REG_CMD_FINISH_INT = 279,
    RAMON_INT_OCCG_GEN_DATA_CELL_CMD_FINISH_INT = 280,
    RAMON_INT_OCCG_GEN_CONTROL_CELL_CMD_FINISH_INT = 281,
    RAMON_INT_OCCG_CAPTURE_DATA_CELL_CMD_FINISH_INT = 282,
    RAMON_INT_OCCG_CAPTURE_CONTROL_CELL_CMD_FINISH_INT = 283,
    RAMON_INT_OCCG_TEST_MODE_CMD_FINISH_INT = 284,
    RAMON_INT_DCH_ERROR_ECC = 285,
    RAMON_INT_DCH_DCH_P_0_DESCCNTO = 286,
    RAMON_INT_DCH_DCH_P_1_DESCCNTO = 287,
    RAMON_INT_DCH_DCH_P_2_DESCCNTO = 288,
    RAMON_INT_DCH_IFMFO_P_0_INT = 289,
    RAMON_INT_DCH_IFMFO_P_1_INT = 290,
    RAMON_INT_DCH_IFMFO_P_2_INT = 291,
    RAMON_INT_DCH_CPUDATACELLFNE_0_INT = 292,
    RAMON_INT_DCH_CPUDATACELLFNE_1_INT = 293,
    RAMON_INT_DCH_CPUDATACELLFNE_2_INT = 294,
    RAMON_INT_DCH_UNREACH_DEST_EV_INT = 295,
    RAMON_INT_DCH_ERROR_FILTER_INT = 296,
    RAMON_INT_DCH_TYPE_ERR_INT = 297,
    RAMON_INT_DCH_DCH_UN_EXP_CELL_P_0 = 298,
    RAMON_INT_DCH_ALTO_P_0_INT = 299,
    RAMON_INT_DCH_DCH_UN_EXP_ERROR_P_0 = 300,
    RAMON_INT_DCH_OUT_OF_SYNC_INT_P_0 = 301,
    RAMON_INT_DCH_DCH_UN_EXP_CELL_2_P_0 = 302,
    RAMON_INT_DCH_DCH_UN_EXP_CELL_P_1 = 303,
    RAMON_INT_DCH_ALTO_P_1_INT = 304,
    RAMON_INT_DCH_DCH_UN_EXP_ERROR_P_1 = 305,
    RAMON_INT_DCH_OUT_OF_SYNC_INT_P_1 = 306,
    RAMON_INT_DCH_DCH_UN_EXP_CELL_2_P_1 = 307,
    RAMON_INT_DCH_DCH_UN_EXP_CELL_P_2 = 308,
    RAMON_INT_DCH_ALTO_P_2_INT = 309,
    RAMON_INT_DCH_DCH_UN_EXP_ERROR_P_2 = 310,
    RAMON_INT_DCH_OUT_OF_SYNC_INT_P_2 = 311,
    RAMON_INT_DCH_DCH_UN_EXP_CELL_2_P_2 = 312,
    RAMON_INT_DCH_DCH_UN_EXP_CELL_3 = 313,
    RAMON_INT_DCH_DROP_FILTER_INT = 314,
    RAMON_INT_DCH_ECC_ECC_1B_ERR_INT = 315,
    RAMON_INT_DCH_ECC_ECC_2B_ERR_INT = 316,
    RAMON_INT_MCT_ERROR_ECC = 317,
    RAMON_INT_MCT_AUTO_DOC_NAME_0 = 318,
    RAMON_INT_MCT_AUTO_DOC_NAME_1 = 319,
    RAMON_INT_MCT_AUTO_DOC_NAME_2 = 320,
    RAMON_INT_MCT_AUTO_DOC_NAME_3 = 321,
    RAMON_INT_MCT_AUTO_DOC_NAME_4 = 322,
    RAMON_INT_MCT_AUTO_DOC_NAME_5 = 323,
    RAMON_INT_MCT_AUTO_DOC_NAME_6 = 324,
    RAMON_INT_MCT_AUTO_DOC_NAME_7 = 325,
    RAMON_INT_MCT_AUTO_DOC_NAME_8 = 326,
    RAMON_INT_MCT_AUTO_DOC_NAME_9 = 327,
    RAMON_INT_MCT_AUTO_DOC_NAME_10 = 328,
    RAMON_INT_MCT_AUTO_DOC_NAME_11 = 329,
    RAMON_INT_MCT_ECC_ECC_1B_ERR_INT = 330,
    RAMON_INT_MCT_ECC_ECC_2B_ERR_INT = 331,
    RAMON_INT_LAST = 332
} ramon_interrupt_type;

#endif

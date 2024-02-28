/* 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
*/

#ifndef __UI_PURE_DEFI_OAM_API_INCLUDED__
/* { */
#define __UI_PURE_DEFI_OAM_API_INCLUDED__

#include <soc/dpp/SAND/Utils/sand_header.h>

#define UI_GENERAL
#define UI_ETH
#define UI_BFD
#define UI_MPLS

/*
 * Note:
 * the following definitions must range between PARAM_OAM_API_START_RANGE_ID
 * and PARAM_OAM_API_END_RANGE_ID.
 * See ui_pure_defi.h
 */
typedef enum
{
  PARAM_OAM_GENERAL_INFO_SET_INFO_SET_ID = PARAM_OAM_API_START_RANGE_ID,
  PARAM_OAM_GENERAL_INFO_SET_INFO_SET_INFO_CPU_DP_ID,
  PARAM_OAM_GENERAL_INFO_SET_INFO_SET_INFO_CPU_TC_ID,
  PARAM_OAM_GENERAL_INFO_SET_INFO_SET_INFO_CPU_PORT_ID,
  PARAM_OAM_GENERAL_INFO_SET_INFO_SET_INFO_SOURCE_SYS_PORT_ID,
  PARAM_OAM_GENERAL_INFO_GET_INFO_GET_ID,
  PARAM_OAM_MSG_INFO_GET_MSG_INFO_GET_ID,
  PARAM_OAM_API_GENERAL_ID,
  PARAM_OAM_ETH_GLOBAL_INFO_SET_GLOBAL_INFO_SET_ID,
  PARAM_OAM_ETH_GLOBAL_INFO_SET_GLOBAL_INFO_SET_INFO_UP_MEP_MAC_ID,
  PARAM_OAM_ETH_GLOBAL_INFO_SET_GLOBAL_INFO_SET_INFO_DN_MEP_MAC_ID,
  PARAM_OAM_ETH_GLOBAL_INFO_GET_GLOBAL_INFO_GET_ID,
  PARAM_OAM_ETH_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_ID,
  PARAM_OAM_ETH_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_COS_NDX_ID,
  PARAM_OAM_ETH_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_UP_ID,
  PARAM_OAM_ETH_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_DP_ID,
  PARAM_OAM_ETH_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_TC_ID,
  PARAM_OAM_ETH_COS_MAPPING_INFO_GET_COS_MAPPING_INFO_GET_ID,
  PARAM_OAM_ETH_COS_MAPPING_INFO_GET_COS_MAPPING_INFO_GET_COS_NDX_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_ACC_MEP_NDX_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_TST_INFO_DA_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_TST_INFO_NOF_PACKETS_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_TST_INFO_PACKET_SIZE_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_TST_INFO_RATE_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_TST_INFO_VALID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_DLM_INFO_DA_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_DLM_INFO_INTERVAL_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_DLM_INFO_VALID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_CCM_INFO_LM_EN_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_CCM_INFO_CCM_INTERVAL_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FUNC_INFO_CCM_INFO_VALID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FRWD_INFO_DOWN_COS_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FRWD_INFO_DOWN_VID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FRWD_INFO_DOWN_SOURCE_PP_PORT_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FRWD_INFO_UP_COS_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FRWD_INFO_UP_VID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FRWD_INFO_UP_SYS_DEST_PORT_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_FRWD_INFO_UP_VALID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_DIRECTION_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_MD_LEVEL_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_MEP_ID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_MA_ID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_SET_ACC_MEP_INFO_SET_INFO_VALID_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_GET_ACC_MEP_INFO_GET_ID,
  PARAM_OAM_ETH_ACC_MEP_INFO_GET_ACC_MEP_INFO_GET_ACC_MEP_NDX_ID,
  PARAM_OAM_ETH_ACC_MEP_TX_RDI_SET_ACC_MEP_TX_RDI_SET_ID,
  PARAM_OAM_ETH_ACC_MEP_TX_RDI_SET_ACC_MEP_TX_RDI_SET_ACC_MEP_NDX_ID,
  PARAM_OAM_ETH_ACC_MEP_TX_RDI_SET_ACC_MEP_TX_RDI_SET_RDI_ID,
  PARAM_OAM_ETH_ACC_MEP_TX_RDI_GET_ACC_MEP_TX_RDI_GET_ID,
  PARAM_OAM_ETH_ACC_MEP_TX_RDI_GET_ACC_MEP_TX_RDI_GET_ACC_MEP_NDX_ID,
  PARAM_OAM_ETH_REMOTE_MEP_SET_REMOTE_MEP_SET_ID,
  PARAM_OAM_ETH_REMOTE_MEP_SET_REMOTE_MEP_SET_ACC_MEP_NDX_ID,
  PARAM_OAM_ETH_REMOTE_MEP_SET_REMOTE_MEP_SET_REMOTE_MEP_NDX_ID,
  PARAM_OAM_ETH_REMOTE_MEP_SET_REMOTE_MEP_SET_INFO_LOCAL_DEFECT_ID,
  PARAM_OAM_ETH_REMOTE_MEP_SET_REMOTE_MEP_SET_INFO_RDI_RECEIVED_ID,
  PARAM_OAM_ETH_REMOTE_MEP_SET_REMOTE_MEP_SET_INFO_CCM_INTERVAL_ID,
  PARAM_OAM_ETH_REMOTE_MEP_SET_REMOTE_MEP_SET_INFO_VALID_ID,
  PARAM_OAM_ETH_REMOTE_MEP_GET_REMOTE_MEP_GET_ID,
  PARAM_OAM_ETH_REMOTE_MEP_GET_REMOTE_MEP_GET_ACC_MEP_NDX_ID,
  PARAM_OAM_ETH_REMOTE_MEP_GET_REMOTE_MEP_GET_REMOTE_MEP_NDX_ID,
  PARAM_OAM_ETH_MEP_DELAY_MEASUREMENT_GET_MEP_DELAY_MEASUREMENT_GET_ID,
  PARAM_OAM_ETH_MEP_DELAY_MEASUREMENT_GET_MEP_DELAY_MEASUREMENT_GET_ACC_MEP_NDX_ID,
  PARAM_OAM_ETH_MEP_LOSS_MEASUREMENT_GET_MEP_LOSS_MEASUREMENT_GET_ID,
  PARAM_OAM_ETH_MEP_LOSS_MEASUREMENT_GET_MEP_LOSS_MEASUREMENT_GET_ACC_MEP_NDX_ID,
  PARAM_OAM_ETH_MEP_TST_PACKET_COUNTER_GET_MEP_TST_PACKET_COUNTER_GET_ID,
  PARAM_OAM_ETH_MEP_TST_PACKET_COUNTER_CLEAR_MEP_TST_PACKET_COUNTER_CLEAR_ID,
  PARAM_OAM_API_ETH_ID,
  PARAM_OAM_BFD_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_ID,
  PARAM_OAM_BFD_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_COS_NDX_ID,
  PARAM_OAM_BFD_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_PWE_EXP_ID,
  PARAM_OAM_BFD_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_TNL_EXP_ID,
  PARAM_OAM_BFD_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_DP_ID,
  PARAM_OAM_BFD_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_TC_ID,
  PARAM_OAM_BFD_COS_MAPPING_INFO_GET_COS_MAPPING_INFO_GET_ID,
  PARAM_OAM_BFD_COS_MAPPING_INFO_GET_COS_MAPPING_INFO_GET_COS_NDX_ID,
  PARAM_OAM_BFD_TTL_MAPPING_INFO_SET_TTL_MAPPING_INFO_SET_ID,
  PARAM_OAM_BFD_TTL_MAPPING_INFO_SET_TTL_MAPPING_INFO_SET_TTL_NDX_ID,
  PARAM_OAM_BFD_TTL_MAPPING_INFO_SET_TTL_MAPPING_INFO_SET_INFO_PWE_TTL_ID,
  PARAM_OAM_BFD_TTL_MAPPING_INFO_SET_TTL_MAPPING_INFO_SET_INFO_TNL_TTL_ID,
  PARAM_OAM_BFD_TTL_MAPPING_INFO_GET_TTL_MAPPING_INFO_GET_ID,
  PARAM_OAM_BFD_TTL_MAPPING_INFO_GET_TTL_MAPPING_INFO_GET_TTL_NDX_ID,
  PARAM_OAM_BFD_IP_MAPPING_INFO_SET_IP_MAPPING_INFO_SET_ID,
  PARAM_OAM_BFD_IP_MAPPING_INFO_SET_IP_MAPPING_INFO_SET_IP_NDX_ID,
  PARAM_OAM_BFD_IP_MAPPING_INFO_SET_IP_MAPPING_INFO_SET_INFO_IP_ID,
  PARAM_OAM_BFD_IP_MAPPING_INFO_GET_IP_MAPPING_INFO_GET_ID,
  PARAM_OAM_BFD_IP_MAPPING_INFO_GET_IP_MAPPING_INFO_GET_IP_NDX_ID,
  PARAM_OAM_BFD_MY_DISCRIMINATOR_RANGE_SET_MY_DISCRIMINATOR_RANGE_SET_ID,
  PARAM_OAM_BFD_MY_DISCRIMINATOR_RANGE_SET_MY_DISCRIMINATOR_RANGE_SET_DISC_RANGE_END_ID,
  PARAM_OAM_BFD_MY_DISCRIMINATOR_RANGE_SET_MY_DISCRIMINATOR_RANGE_SET_DISC_RANGE_START_ID,
  PARAM_OAM_BFD_MY_DISCRIMINATOR_RANGE_SET_MY_DISCRIMINATOR_RANGE_SET_DISC_RANGE_BASE_ID,
  PARAM_OAM_BFD_MY_DISCRIMINATOR_RANGE_GET_MY_DISCRIMINATOR_RANGE_GET_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_MY_DISCRIMINATOR_NDX_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_IP_INFO_TTL_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_IP_INFO_COS_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_IP_INFO_DST_IP_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_IP_INFO_SRC_IP_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_WITH_IP_INFO_TTL_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_WITH_IP_INFO_COS_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_WITH_IP_INFO_PWE_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_WITH_IP_INFO_EEP_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_WITH_IP_INFO_SRC_IP_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_INFO_TTL_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_INFO_COS_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_INFO_PWE_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_PWE_INFO_EEP_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_TUNNEL_INFO_TTL_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_TUNNEL_INFO_COS_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_FW_INFO_MPLS_TUNNEL_INFO_EEP_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_NG_INFO_MIN_TX_INTERVAL_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_NG_INFO_MIN_RX_INTERVAL_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_NG_INFO_DETECT_MULT_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_BFD_TYPE_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_DISCRIMINATOR_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_TX_RATE_ID,
  PARAM_OAM_BFD_TX_INFO_SET_TX_INFO_SET_INFO_VALID_ID,
  PARAM_OAM_BFD_TX_INFO_GET_TX_INFO_GET_ID,
  PARAM_OAM_BFD_TX_INFO_GET_TX_INFO_GET_MY_DISCRIMINATOR_NDX_ID,
  PARAM_OAM_BFD_RX_INFO_SET_RX_INFO_SET_ID,
  PARAM_OAM_BFD_RX_INFO_SET_RX_INFO_SET_MY_DISCRIMINATOR_NDX_ID,
  PARAM_OAM_BFD_RX_INFO_SET_RX_INFO_SET_INFO_DEFECT_ID,
  PARAM_OAM_BFD_RX_INFO_SET_RX_INFO_SET_INFO_LIFE_TIME_ID,
  PARAM_OAM_BFD_RX_INFO_GET_RX_INFO_GET_ID,
  PARAM_OAM_BFD_RX_INFO_GET_RX_INFO_GET_MY_DISCRIMINATOR_NDX_ID,
  PARAM_OAM_API_BFD_ID,
  PARAM_OAM_MPLS_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_ID,
  PARAM_OAM_MPLS_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_COS_NDX_ID,
  PARAM_OAM_MPLS_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_EXP_ID,
  PARAM_OAM_MPLS_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_DP_ID,
  PARAM_OAM_MPLS_COS_MAPPING_INFO_SET_COS_MAPPING_INFO_SET_INFO_TC_ID,
  PARAM_OAM_MPLS_COS_MAPPING_INFO_GET_COS_MAPPING_INFO_GET_ID,
  PARAM_OAM_MPLS_COS_MAPPING_INFO_GET_COS_MAPPING_INFO_GET_COS_NDX_ID,
  PARAM_OAM_MPLS_TTL_MAPPING_INFO_SET_TTL_MAPPING_INFO_SET_ID,
  PARAM_OAM_MPLS_TTL_MAPPING_INFO_SET_TTL_MAPPING_INFO_SET_TTL_NDX_ID,
  PARAM_OAM_MPLS_TTL_MAPPING_INFO_SET_TTL_MAPPING_INFO_SET_INFO_TTL_ID,
  PARAM_OAM_MPLS_TTL_MAPPING_INFO_GET_TTL_MAPPING_INFO_GET_ID,
  PARAM_OAM_MPLS_TTL_MAPPING_INFO_GET_TTL_MAPPING_INFO_GET_TTL_NDX_ID,
  PARAM_OAM_MPLS_IP_MAPPING_INFO_SET_IP_MAPPING_INFO_SET_ID,
  PARAM_OAM_MPLS_IP_MAPPING_INFO_SET_IP_MAPPING_INFO_SET_IP_NDX_ID,
  PARAM_OAM_MPLS_IP_MAPPING_INFO_SET_IP_MAPPING_INFO_SET_IS_IPV6_ID,
  PARAM_OAM_MPLS_IP_MAPPING_INFO_SET_IP_MAPPING_INFO_SET_INFO_IPV6_IP_ID,
  PARAM_OAM_MPLS_IP_MAPPING_INFO_SET_IP_MAPPING_INFO_SET_INFO_IPV4_IP_ID,
  PARAM_OAM_MPLS_IP_MAPPING_INFO_GET_IP_MAPPING_INFO_GET_ID,
  PARAM_OAM_MPLS_IP_MAPPING_INFO_GET_IP_MAPPING_INFO_GET_IP_NDX_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_TNL_RANGE_ENABLE_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_TNL_RANGE_END_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_TNL_RANGE_START_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_TNL_RANGE_BASE_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_PWE_RANGE_ENABLE_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_PWE_RANGE_END_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_PWE_RANGE_START_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_SET_LABEL_RANGES_SET_PWE_RANGE_BASE_ID,
  PARAM_OAM_MPLS_LABEL_RANGES_GET_LABEL_RANGES_GET_ID,
  PARAM_OAM_MPLS_CONFIGURABLE_FFD_RATE_SET_CONFIGURABLE_FFD_RATE_SET_ID,
  PARAM_OAM_MPLS_CONFIGURABLE_FFD_RATE_SET_CONFIGURABLE_FFD_RATE_SET_RATE_NDX_ID,
  PARAM_OAM_MPLS_CONFIGURABLE_FFD_RATE_SET_CONFIGURABLE_FFD_RATE_SET_INTERVAL_ID,
  PARAM_OAM_MPLS_CONFIGURABLE_FFD_RATE_GET_CONFIGURABLE_FFD_RATE_GET_ID,
  PARAM_OAM_MPLS_CONFIGURABLE_FFD_RATE_GET_CONFIGURABLE_FFD_RATE_GET_RATE_NDX_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_MOT_NDX_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_DEFECT_INFO_FDI_EN_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_DEFECT_INFO_BDI_EN_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_DEFECT_INFO_DEFECT_LOCATION_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_DEFECT_INFO_DEFECT_TYPE_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_PACKET_INFO_LSP_ID_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_PACKET_INFO_LSR_ID_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_PACKET_INFO_EEP_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_PACKET_INFO_TTL_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_PACKET_INFO_COS_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_PACKET_INFO_SYSTEM_PORT_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_TYPE_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_SET_LSP_TX_INFO_SET_INFO_VALID_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_GET_LSP_TX_INFO_GET_ID,
  PARAM_OAM_MPLS_LSP_TX_INFO_GET_LSP_TX_INFO_GET_MOT_NDX_ID,
  PARAM_OAM_MPLS_LSP_RX_INFO_SET_LSP_RX_INFO_SET_ID,
  PARAM_OAM_MPLS_LSP_RX_INFO_SET_LSP_RX_INFO_SET_MOR_NDX_ID,
  PARAM_OAM_MPLS_LSP_RX_INFO_SET_LSP_RX_INFO_SET_INFO_IS_FFD_ID,
  PARAM_OAM_MPLS_LSP_RX_INFO_SET_LSP_RX_INFO_SET_INFO_VALID_ID,
  PARAM_OAM_MPLS_LSP_RX_INFO_GET_LSP_RX_INFO_GET_ID,
  PARAM_OAM_MPLS_LSP_RX_INFO_GET_LSP_RX_INFO_GET_MOR_NDX_ID,
  PARAM_OAM_API_MPLS_ID,
}PARAM_OAM_API_IDS;
/* } */

#include <soc/dpp/SAND/Utils/sand_footer.h>

/* } __UI_PURE_DEFI_OAM_API_INCLUDED__*/
#endif

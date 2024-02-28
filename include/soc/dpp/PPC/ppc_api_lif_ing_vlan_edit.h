/* 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
*/


#ifndef __SOC_PPC_API_LIF_ING_VLAN_EDIT_INCLUDED__

#define __SOC_PPC_API_LIF_ING_VLAN_EDIT_INCLUDED__




#include <soc/dpp/SAND/Utils/sand_header.h>

#include <soc/dpp/SAND/Management/sand_general_macros.h>
#include <soc/dpp/SAND/Management/sand_error_code.h>

#include <soc/dpp/PPC/ppc_api_general.h>






#define SOC_PPC_NOF_INGRESS_VLAN_EDIT_ACTION_IDS_ARAD           (64)
#define SOC_PPC_NOF_INGRESS_VLAN_EDIT_RESERVED_ACTION_IDS_ARAD  (4)


#define SOC_PPC_NOF_INGRESS_VLAN_EDIT_ACTION_IDS                (SOC_PPC_NOF_INGRESS_VLAN_EDIT_ACTION_IDS_ARAD)









typedef enum
{
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC_EMPTY = 0,
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC_OUTER_TAG = 1,
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC_INNER_TAG = 2,
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC_AC_EDIT_INFO = 3,
  
  SOC_PPC_NOF_LIF_ING_VLAN_EDIT_TAG_VID_SRCS_PB = 4,
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC_AC_EDIT_INFO_2 = SOC_PPC_NOF_LIF_ING_VLAN_EDIT_TAG_VID_SRCS_PB,
  
  SOC_PPC_NOF_LIF_ING_VLAN_EDIT_TAG_VID_SRCS_ARAD = 5


}SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC;

typedef enum
{
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRC_NONE = 0,
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRC_OUTER_TAG = 1,
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRC_INNER_TAG = 2,
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRC_NEW = 3,
  
  SOC_PPC_NOF_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRCS = 4
}SOC_PPC_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRC;

typedef enum
{
  
  SOC_PPC_VLAN_EDIT_TAG_TPID_SRC_GLB_0 = 0,
  SOC_PPC_VLAN_EDIT_TAG_TPID_SRC_GLB_1 = 1,
  SOC_PPC_VLAN_EDIT_TAG_TPID_SRC_GLB_2 = 2,
  SOC_PPC_VLAN_EDIT_TAG_TPID_SRC_GLB_3 = 3,
  
  SOC_PPC_VLAN_EDIT_TAG_TPID_SRC_OUTER = 4,
  
  SOC_PPC_VLAN_EDIT_TAG_TPID_SRC_INNER = 5
}SOC_PPC_VLAN_EDIT_TAG_TPID_SRC;


typedef struct
{
  SOC_SAND_MAGIC_NUM_VAR
  
  uint32 tpid_index;
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC vid_source;
  
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRC pcp_dei_source;

} SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_TAG_BUILD_INFO;

typedef struct
{
  SOC_SAND_MAGIC_NUM_VAR
  
  SOC_SAND_PP_ETHERNET_FRAME_VLAN_FORMAT tag_format;
  
  uint32 edit_profile;

} SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_KEY;

typedef struct
{
  SOC_SAND_MAGIC_NUM_VAR
  
  uint8 tags_to_remove;
  
  uint32 tpid_profile;
  
  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_TAG_BUILD_INFO inner_tag;
  
  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_TAG_BUILD_INFO outer_tag;

} SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_INFO;










void
  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_TAG_BUILD_INFO_clear(
    SOC_SAND_OUT SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_TAG_BUILD_INFO *info
  );

void
  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_KEY_clear(
    SOC_SAND_OUT SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_KEY *info
  );

void
  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_INFO_clear(
    SOC_SAND_OUT SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_INFO *info
  );

#if SOC_PPC_DEBUG_IS_LVL1

const char*
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC_to_string(
    SOC_SAND_IN  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_VID_SRC enum_val
  );

const char*
  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRC_to_string(
    SOC_SAND_IN  SOC_PPC_LIF_ING_VLAN_EDIT_TAG_PCP_DEI_SRC enum_val
  );

void
  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_TAG_BUILD_INFO_print(
    SOC_SAND_IN  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_TAG_BUILD_INFO *info
  );

void
  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_KEY_print(
    SOC_SAND_IN  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_KEY *info
  );

void
  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_INFO_print(
    SOC_SAND_IN  SOC_PPC_LIF_ING_VLAN_EDIT_COMMAND_INFO *info
  );

#endif 



#include <soc/dpp/SAND/Utils/sand_footer.h>


#endif


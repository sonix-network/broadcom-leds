
/* *INDENT-OFF* */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_INSTRU_H_

#define _DNX_DATA_MAX_INSTRU_H_




#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX family only!"
#endif


#define DNX_DATA_MAX_INSTRU_IPT_PROFILE_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_IPT_PROFILE_SIZE
#define DNX_DATA_MAX_INSTRU_IPT_PROFILE_SIZE (6)


#define DNX_DATA_MAX_INSTRU_IPT_METADATA_BITMAP_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_IPT_METADATA_BITMAP_SIZE
#define DNX_DATA_MAX_INSTRU_IPT_METADATA_BITMAP_SIZE (10)


#define DNX_DATA_MAX_INSTRU_IPT_METADATA_EDIT_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_IPT_METADATA_EDIT_SIZE
#define DNX_DATA_MAX_INSTRU_IPT_METADATA_EDIT_SIZE (6)


#define DNX_DATA_MAX_INSTRU_IPT_NODE_ID_PADDING_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_IPT_NODE_ID_PADDING_SIZE
#define DNX_DATA_MAX_INSTRU_IPT_NODE_ID_PADDING_SIZE (5)


#define DNX_DATA_MAX_INSTRU_IPT_TELEMETRY_QUEUE_OCC_CHECK (1)

#undef DNX_DATA_MAX_INSTRU_IPT_TELEMETRY_QUEUE_OCC_CHECK
#define DNX_DATA_MAX_INSTRU_IPT_TELEMETRY_QUEUE_OCC_CHECK (1)


#define DNX_DATA_MAX_INSTRU_IPT_TELEMETRY_QUEUE_OCC_MAX (1)

#undef DNX_DATA_MAX_INSTRU_IPT_TELEMETRY_QUEUE_OCC_MAX
#define DNX_DATA_MAX_INSTRU_IPT_TELEMETRY_QUEUE_OCC_MAX (4095)


#define DNX_DATA_MAX_INSTRU_SFLOW_MAX_NOF_SFLOW_ENCAPS (1)

#undef DNX_DATA_MAX_INSTRU_SFLOW_MAX_NOF_SFLOW_ENCAPS
#define DNX_DATA_MAX_INSTRU_SFLOW_MAX_NOF_SFLOW_ENCAPS (16)


#define DNX_DATA_MAX_INSTRU_SFLOW_NOF_SFLOW_RAW_ENTRIES_PER_STACK (1)

#undef DNX_DATA_MAX_INSTRU_SFLOW_NOF_SFLOW_RAW_ENTRIES_PER_STACK
#define DNX_DATA_MAX_INSTRU_SFLOW_NOF_SFLOW_RAW_ENTRIES_PER_STACK (2)


#define DNX_DATA_MAX_INSTRU_IFA_INGRESS_TOD_FEATURE (1)

#undef DNX_DATA_MAX_INSTRU_IFA_INGRESS_TOD_FEATURE
#define DNX_DATA_MAX_INSTRU_IFA_INGRESS_TOD_FEATURE (1)


#define DNX_DATA_MAX_INSTRU_IFA_MAX_LENGHT_CHECK_FOR_IFA2 (1)

#undef DNX_DATA_MAX_INSTRU_IFA_MAX_LENGHT_CHECK_FOR_IFA2
#define DNX_DATA_MAX_INSTRU_IFA_MAX_LENGHT_CHECK_FOR_IFA2 (1)


#define DNX_DATA_MAX_INSTRU_IFA_IFA2_IS_IN_HL (1)

#undef DNX_DATA_MAX_INSTRU_IFA_IFA2_IS_IN_HL
#define DNX_DATA_MAX_INSTRU_IFA_IFA2_IS_IN_HL (0)


#define DNX_DATA_MAX_INSTRU_IFA_IFA2_IS_SUPPORTED (1)

#undef DNX_DATA_MAX_INSTRU_IFA_IFA2_IS_SUPPORTED
#define DNX_DATA_MAX_INSTRU_IFA_IFA2_IS_SUPPORTED (1)


#define DNX_DATA_MAX_INSTRU_IPFIX_IPFIX_V2 (1)

#undef DNX_DATA_MAX_INSTRU_IPFIX_IPFIX_V2
#define DNX_DATA_MAX_INSTRU_IPFIX_IPFIX_V2 (0)


#define DNX_DATA_MAX_INSTRU_HBH_PT_INGRESS_1588_TOD_LSB_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_HBH_PT_INGRESS_1588_TOD_LSB_SIZE
#define DNX_DATA_MAX_INSTRU_HBH_PT_INGRESS_1588_TOD_LSB_SIZE (34)


#define DNX_DATA_MAX_INSTRU_EVENTOR_RX_EVPCK_HEADER_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_RX_EVPCK_HEADER_SIZE
#define DNX_DATA_MAX_INSTRU_EVENTOR_RX_EVPCK_HEADER_SIZE (16)


#define DNX_DATA_MAX_INSTRU_EVENTOR_TX_BUILDER_MAX_HEADER_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_TX_BUILDER_MAX_HEADER_SIZE
#define DNX_DATA_MAX_INSTRU_EVENTOR_TX_BUILDER_MAX_HEADER_SIZE (124)


#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_CONTEXTS (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_NOF_CONTEXTS
#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_CONTEXTS (16)


#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_CONTEXTS_BITS (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_NOF_CONTEXTS_BITS
#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_CONTEXTS_BITS (4)


#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_BUILDERS (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_NOF_BUILDERS
#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_BUILDERS (16)


#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_BUILDERS_BITS (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_NOF_BUILDERS_BITS
#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_BUILDERS_BITS (4)


#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_SRAM_BANKS (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_NOF_SRAM_BANKS
#define DNX_DATA_MAX_INSTRU_EVENTOR_NOF_SRAM_BANKS (8)


#define DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANK_BITS (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANK_BITS
#define DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANK_BITS (3)


#define DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANKS_FULL_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANKS_FULL_SIZE
#define DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANKS_FULL_SIZE (16384)


#define DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANKS_NET_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANKS_NET_SIZE
#define DNX_DATA_MAX_INSTRU_EVENTOR_SRAM_BANKS_NET_SIZE (13312)


#define DNX_DATA_MAX_INSTRU_EVENTOR_BUILDER_MAX_BUFFER_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_BUILDER_MAX_BUFFER_SIZE
#define DNX_DATA_MAX_INSTRU_EVENTOR_BUILDER_MAX_BUFFER_SIZE (1600)


#define DNX_DATA_MAX_INSTRU_EVENTOR_RX_MAX_BUFFER_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_RX_MAX_BUFFER_SIZE
#define DNX_DATA_MAX_INSTRU_EVENTOR_RX_MAX_BUFFER_SIZE (1600)


#define DNX_DATA_MAX_INSTRU_EVENTOR_AXI_SRAM_OFFSET (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_AXI_SRAM_OFFSET
#define DNX_DATA_MAX_INSTRU_EVENTOR_AXI_SRAM_OFFSET (3892314112)


#define DNX_DATA_MAX_INSTRU_EVENTOR_IS_EXTRA_WORDS_COPY (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_IS_EXTRA_WORDS_COPY
#define DNX_DATA_MAX_INSTRU_EVENTOR_IS_EXTRA_WORDS_COPY (1)


#define DNX_DATA_MAX_INSTRU_EVENTOR_IS_RX_EN (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_IS_RX_EN
#define DNX_DATA_MAX_INSTRU_EVENTOR_IS_RX_EN (1)


#define DNX_DATA_MAX_INSTRU_EVENTOR_TX_BUILDER_LIMITATION_1 (1)

#undef DNX_DATA_MAX_INSTRU_EVENTOR_TX_BUILDER_LIMITATION_1
#define DNX_DATA_MAX_INSTRU_EVENTOR_TX_BUILDER_LIMITATION_1 (1)


#define DNX_DATA_MAX_INSTRU_SYNCED_TRIGGERS_SYNCED_TRIGGER_VERSION (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_TRIGGERS_SYNCED_TRIGGER_VERSION
#define DNX_DATA_MAX_INSTRU_SYNCED_TRIGGERS_SYNCED_TRIGGER_VERSION (1)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTED_TO_NS_THROUGH_TIME_RATIO (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTED_TO_NS_THROUGH_TIME_RATIO
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTED_TO_NS_THROUGH_TIME_RATIO (1)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTING_CLK_BITS (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTING_CLK_BITS
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTING_CLK_BITS (10)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTING_NS_BITS (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTING_NS_BITS
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_PERIOD_ADJUSTING_NS_BITS (10)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_INTERVAL_PERIOD_SIZE_HW (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_INTERVAL_PERIOD_SIZE_HW
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_INTERVAL_PERIOD_SIZE_HW (64)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_MAX_INTERVAL_PERIOD_SIZE (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_MAX_INTERVAL_PERIOD_SIZE
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_MAX_INTERVAL_PERIOD_SIZE (48)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_CGM_MAX_NOF_INTERVALS (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_CGM_MAX_NOF_INTERVALS
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_CGM_MAX_NOF_INTERVALS (16)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NIF_MAX_NOF_INTERVALS (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NIF_MAX_NOF_INTERVALS
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NIF_MAX_NOF_INTERVALS (16)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_CGM_WRITE_COUNTER_WRAP_AROUND (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_CGM_WRITE_COUNTER_WRAP_AROUND
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_CGM_WRITE_COUNTER_WRAP_AROUND (1024)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NIF_WRITE_COUNTER_WRAP_AROUND (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NIF_WRITE_COUNTER_WRAP_AROUND
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NIF_WRITE_COUNTER_WRAP_AROUND (1024)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_BYTES_IN_WORD (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_BYTES_IN_WORD
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_BYTES_IN_WORD (16)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_PMS_FOR_PFC (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_PMS_FOR_PFC
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_PMS_FOR_PFC (2)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_PORTS_FOR_PFC (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_PORTS_FOR_PFC
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_PORTS_FOR_PFC (8)


#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_TCS_PER_PORT (1)

#undef DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_TCS_PER_PORT
#define DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_NOF_TCS_PER_PORT (2)


#define DNX_DATA_MAX_INSTRU_ALTERNATE_MARKING_NOF_L_BIT_PERIOD_PROFILE (1)




#endif 


/* *INDENT-OFF* */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */
#ifndef _DNX_DATA_MAX_SAT_H_

#define _DNX_DATA_MAX_SAT_H_




#ifndef BCM_DNX_SUPPORT
#error "This file is for use by DNX family only!"
#endif


#define DNX_DATA_MAX_SAT_GENERAL_GRANULARITY (1)

#undef DNX_DATA_MAX_SAT_GENERAL_GRANULARITY
#define DNX_DATA_MAX_SAT_GENERAL_GRANULARITY (64000)


#define DNX_DATA_MAX_SAT_GENERAL_ACCUM_COUNT_NOT_COLLECT_DURING_UNAVALIABLE_STATUS (1)

#undef DNX_DATA_MAX_SAT_GENERAL_ACCUM_COUNT_NOT_COLLECT_DURING_UNAVALIABLE_STATUS
#define DNX_DATA_MAX_SAT_GENERAL_ACCUM_COUNT_NOT_COLLECT_DURING_UNAVALIABLE_STATUS (1)


#define DNX_DATA_MAX_SAT_GENERATOR_NOF_EVC_IDS (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_NOF_EVC_IDS
#define DNX_DATA_MAX_SAT_GENERATOR_NOF_EVC_IDS (8)


#define DNX_DATA_MAX_SAT_GENERATOR_NOF_GTF_IDS (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_NOF_GTF_IDS
#define DNX_DATA_MAX_SAT_GENERATOR_NOF_GTF_IDS (64)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_HEADER_MAX_LENGTH (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_HEADER_MAX_LENGTH
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_HEADER_MAX_LENGTH (128)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_LENGTH_MAX_PATN (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_LENGTH_MAX_PATN
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_LENGTH_MAX_PATN (7)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_MAX_SEQ_PERIOD (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_MAX_SEQ_PERIOD
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_MAX_SEQ_PERIOD (4)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_STAMP_MAX_INC_STEP (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_STAMP_MAX_INC_STEP
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_STAMP_MAX_INC_STEP (127)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_STAMP_MAX_INC_PERIOD (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_STAMP_MAX_INC_PERIOD
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_STAMP_MAX_INC_PERIOD (3)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_BW_MAX_VALUE (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_BW_MAX_VALUE
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_BW_MAX_VALUE (17179607)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_RATE_MAX (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_RATE_MAX
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_RATE_MAX (400000000)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PPS_RATE_MAX (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_PPS_RATE_MAX
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PPS_RATE_MAX (500000000)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_HEADER_ENTRIES (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_HEADER_ENTRIES
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_HEADER_ENTRIES (32)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_HEADER_LENGTH (1)

#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_LEN_PATTEN_SIZE (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_LEN_PATTEN_SIZE
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_PKT_LEN_PATTEN_SIZE (96)


#define DNX_DATA_MAX_SAT_GENERATOR_GTF_MIN_PKT_LEN (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_GTF_MIN_PKT_LEN
#define DNX_DATA_MAX_SAT_GENERATOR_GTF_MIN_PKT_LEN (65)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_64B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_64B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_64B (293000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_128B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_128B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_128B (344000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_256B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_256B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_256B (375000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_512B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_512B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_512B (387000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1024B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1024B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1024B (393000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1280B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1280B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1280B (395000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1518B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1518B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_1518B (395000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_9000B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_9000B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_BIT_RATE_IN_9000B (400000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_64B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_64B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_64B (500000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_128B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_128B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_128B (333000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_256B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_256B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_256B (179000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_512B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_512B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_512B (93600000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1024B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1024B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1024B (47800000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1280B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1280B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1280B (38400000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1518B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1518B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_1518B (32400000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_9000B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_9000B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_PACKET_RATE_IN_9000B (5540000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_64B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_64B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_64B (423000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_128B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_128B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_128B (275000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_256B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_256B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_256B (162000000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_512B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_512B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_512B (22200000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1024B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1024B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1024B (11600000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1280B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1280B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1280B (9450000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1518B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1518B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_1518B (8020000)


#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_9000B (1)

#undef DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_9000B
#define DNX_DATA_MAX_SAT_GENERATOR_MAX_CTF_RECV_PACKET_RATE_IN_9000B (1380000)


#define DNX_DATA_MAX_SAT_COLLECTOR_NOF_CTF_IDS (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_NOF_CTF_IDS
#define DNX_DATA_MAX_SAT_COLLECTOR_NOF_CTF_IDS (128)


#define DNX_DATA_MAX_SAT_COLLECTOR_NOF_OAM_IDS (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_NOF_OAM_IDS
#define DNX_DATA_MAX_SAT_COLLECTOR_NOF_OAM_IDS (64)


#define DNX_DATA_MAX_SAT_COLLECTOR_MEF_PAYLOAD_OFFSET (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_MEF_PAYLOAD_OFFSET
#define DNX_DATA_MAX_SAT_COLLECTOR_MEF_PAYLOAD_OFFSET (41)


#define DNX_DATA_MAX_SAT_COLLECTOR_MEF_SEQ_NUM_OFFSET (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_MEF_SEQ_NUM_OFFSET
#define DNX_DATA_MAX_SAT_COLLECTOR_MEF_SEQ_NUM_OFFSET (30)


#define DNX_DATA_MAX_SAT_COLLECTOR_MEF_TIME_STAMP_OFFSET (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_MEF_TIME_STAMP_OFFSET
#define DNX_DATA_MAX_SAT_COLLECTOR_MEF_TIME_STAMP_OFFSET (0)


#define DNX_DATA_MAX_SAT_COLLECTOR_MEF_CRC_BYTE_OFFSET (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_MEF_CRC_BYTE_OFFSET
#define DNX_DATA_MAX_SAT_COLLECTOR_MEF_CRC_BYTE_OFFSET (20)


#define DNX_DATA_MAX_SAT_COLLECTOR_Y1731_PAYLOAD_OFFSET (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_Y1731_PAYLOAD_OFFSET
#define DNX_DATA_MAX_SAT_COLLECTOR_Y1731_PAYLOAD_OFFSET (0)


#define DNX_DATA_MAX_SAT_COLLECTOR_Y1731_SEQ_NUM_OFFSET (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_Y1731_SEQ_NUM_OFFSET
#define DNX_DATA_MAX_SAT_COLLECTOR_Y1731_SEQ_NUM_OFFSET (0)


#define DNX_DATA_MAX_SAT_COLLECTOR_Y1731_TIME_STAMP_OFFSET (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_Y1731_TIME_STAMP_OFFSET
#define DNX_DATA_MAX_SAT_COLLECTOR_Y1731_TIME_STAMP_OFFSET (22)


#define DNX_DATA_MAX_SAT_COLLECTOR_Y1731_CRC_BYTE_OFFSET (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_Y1731_CRC_BYTE_OFFSET
#define DNX_DATA_MAX_SAT_COLLECTOR_Y1731_CRC_BYTE_OFFSET (20)


#define DNX_DATA_MAX_SAT_COLLECTOR_CTF_BINS_LIMIT_ENTRIES (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_CTF_BINS_LIMIT_ENTRIES
#define DNX_DATA_MAX_SAT_COLLECTOR_CTF_BINS_LIMIT_ENTRIES (9)


#define DNX_DATA_MAX_SAT_COLLECTOR_TRAP_ID_ENTRIES (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_TRAP_ID_ENTRIES
#define DNX_DATA_MAX_SAT_COLLECTOR_TRAP_ID_ENTRIES (3)


#define DNX_DATA_MAX_SAT_COLLECTOR_TRAP_DATA_ENTRIES (1)

#undef DNX_DATA_MAX_SAT_COLLECTOR_TRAP_DATA_ENTRIES
#define DNX_DATA_MAX_SAT_COLLECTOR_TRAP_DATA_ENTRIES (64)





#endif 


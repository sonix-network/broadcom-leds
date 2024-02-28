/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 */

#ifndef __BCM_LATENCY_MONITOR_H__
#define __BCM_LATENCY_MONITOR_H__

#include <bcm/types.h>

/* Latency Monitor operation mode. */
typedef enum bcm_latency_monitor_mode_e {
    bcmLatencyMonitorAccrueMode = 0,    /* Histogram data is accumulated per
                                           queue per bucket */
    bcmLatencyMonitorTimeSeriesMode = 1, /* Histogram data retains the time
                                           series info */
    bcmLatencyMonitorFlexCtrMode = 2    /* Histogram data process is controlled
                                           via FlexCtr APIs. When the mode is
                                           selected, histogram data
                                           configuration and counter collecting
                                           APIs will not be supported. */
} bcm_latency_monitor_mode_t;

/* Latency Monitor count mode (cut-through/store-and-Forward/All). */
typedef enum bcm_latency_monitor_count_mode_e {
    bcmLatencyMonitorCutThrough = 0,    /* Count only cut through packets. */
    bcmLatencyMonitorStoreAndForward = 1, /* Count only store and forward packets. */
    bcmLatencyMonitorCountAll = 2       /* Count all types of packets. */
} bcm_latency_monitor_count_mode_t;

/* Latency Monitor status */
typedef enum bcm_latency_monitor_status_e {
    bcmLatencyMonitorStatusUninit = 0,  /* Latency Monitor is in Uninitialized
                                           state. */
    bcmLatencyMonitorStatusIdle = 1,    /* Latency Monitor is in Idle state. */
    bcmLatencyMonitorStatusRunning = 2, /* Latency Monitor is in Running state. */
    bcmLatencyMonitorStatusError = 3    /* Latency Monitor is in Faulty state. */
} bcm_latency_monitor_status_t;

/* Per COSQ latency limit configuration structure */
typedef struct bcm_latency_monitor_cosq_info_s {
    uint8 bucket_count;                 /* Number of histogram buckets for a
                                           given cosq. */
    uint8 latency_index_array[BCM_MAX_HISTOGRAM_BUCKET_COUNT-1]; /* Array of indexes in to the latency
                                           limit table. The indexed value is the
                                           upper latency limit for the
                                           corresponding bucket. */
} bcm_latency_monitor_cosq_info_t;

/* Histogram for a given cosq id. */
typedef struct bcm_latency_monitor_histogram_s {
    uint8 histogram_size;               /* Number of histogram counters for a
                                           given cosq. */
    uint64 histogram[BCM_MAX_HISTOGRAM_BUCKET_COUNT]; /* Array of histogram counters */
} bcm_latency_monitor_histogram_t;

/* Latency Monitor status informations. */
typedef struct bcm_latency_monitor_info_s {
    bcm_latency_monitor_status_t monitor_status; /* Monitor status */
    void *sw_buf_addr;                  /* Base address of 64 bits wide (Bit
                                           Field 0:27 Packet Counter, Bit field
                                           28:63 is Byte Counter) software ring
                                           buffer (Valid in Time Series Mode
                                           only). */
    uint32 sw_buf_size;                 /* Size of Software ring buffer in terms
                                           of 64 bit width (Valid in Time Series
                                           Mode only). */
    uint32 sw_buf_wr_idx;               /* Index in to the software ring buffer
                                           pointing to last counter write
                                           operation (Valid in Time Series Mode
                                           only). */
} bcm_latency_monitor_info_t;

/* 
 * User application call back function on update of counter info in
 * software ring buffer (Valid in TIME_SERIES mode only).
 */
typedef int (*bcm_latency_monitor_cb)(
    int unit, 
    uint8 monitor_id, 
    bcm_latency_monitor_status_t monitor_status, 
    void *sw_buf_addr, 
    uint32 sw_buf_size, 
    uint32 sw_buf_wr_idx);

/* Monitor configuration structure */
typedef struct bcm_latency_monitor_config_s {
    bcm_latency_monitor_mode_t mode;    /* Monitor operation mode. */
    bcm_pbmp_t src_pbmp;                /* Ingress Port Bit Map */
    bcm_pbmp_t dest_pbmp;               /* Egress Port Bit Map */
    uint32 time_step;                   /* Time series step value in Micro Sec.
                                           (Min 100 ms). */
    bcm_latency_monitor_count_mode_t count_mode; /* cut-though or store-and-Forward or
                                           Count All */
    uint32 histogram_set_count;         /* Max number of histogram sets to
                                           accomodate in Software Ring Buffer
                                           (Minimum is 10). */
    bcm_latency_monitor_cb cb;          /* User callback function on
                                           availability of counter info in the
                                           software ring buffer. */
} bcm_latency_monitor_config_t;

/* Initialize the Monitor configuration structure. */
extern void bcm_latency_monitor_config_t_init(
    bcm_latency_monitor_config_t *config);

/* Initialize the COSQ latency limit configuration structure. */
extern void bcm_latency_monitor_cosq_info_t_init(
    bcm_latency_monitor_cosq_info_t *config);

/* Initialize the latency monitor histogram structure. */
extern void bcm_latency_monitor_histogram_t_init(
    bcm_latency_monitor_histogram_t *histogram);

/* Initialize the latency monitor info structure. */
extern void bcm_latency_monitor_info_t_init(
    bcm_latency_monitor_info_t *monitor_info);

#ifndef BCM_HIDE_DISPATCHABLE

/* Initialize a latency monitor with the given configuration. */
extern int bcm_latency_monitor_config_set(
    int unit, 
    uint8 monitor_id, 
    bcm_latency_monitor_config_t *config);

/* Get configuration informations for a given Latency Monitor. */
extern int bcm_latency_monitor_config_get(
    int unit, 
    uint8 monitor_id, 
    bcm_latency_monitor_config_t *config);

/* Programs latency limit device table. */
extern int bcm_latency_monitor_latency_limit_table_set(
    int unit, 
    uint8 table_size, 
    uint32 *latency_limit_table);

/* Gets values programmed in latency limit device table. */
extern int bcm_latency_monitor_latency_limit_table_get(
    int unit, 
    uint8 table_size, 
    uint32 *latency_limit_table);

/* Configures latency upper limits of each bucket for a given COS queue. */
extern int bcm_latency_monitor_cosq_config_set(
    int unit, 
    uint8 monitor_id, 
    uint8 cosq, 
    bcm_latency_monitor_cosq_info_t cosq_info);

/* Gets latency upper limits of each bucket for a given COS queue. */
extern int bcm_latency_monitor_cosq_config_get(
    int unit, 
    uint8 monitor_id, 
    uint8 cosq, 
    bcm_latency_monitor_cosq_info_t *cosq_info);

/* Enable or Disable a given monitor. */
extern int bcm_latency_monitor_enable(
    int unit, 
    uint8 monitor_id, 
    uint8 enable);

/* Gets histogram counters for a given monitor id and cosq id. */
extern int bcm_latency_monitor_histogram_get(
    int unit, 
    uint8 monitor_id, 
    uint8 cosq, 
    uint8 byte_counter_flag, 
    bcm_latency_monitor_histogram_t *histogram);

/* For a given monitor_id, the API returns monitor status information. */
extern int bcm_latency_monitor_info_get(
    int unit, 
    uint8 monitor_id, 
    bcm_latency_monitor_info_t *monitor_info);

#endif /* BCM_HIDE_DISPATCHABLE */

/* Latency Monitor information passed to the registered callback handler */
typedef struct bcm_latency_monitor_cb_info_s {
    int monitor_id;                     /* Monitor Id. */
    bcm_latency_monitor_status_t monitor_status; /* Monitor Status. */
    void *sw_buf_addr;                  /* Base address of 64 bits wide (Bit
                                           Field 0:27 Packet Counter, Bit field
                                           28:63 is Byte Counter) software ring
                                           buffer. */
    uint32 sw_buf_size;                 /* Size of Software ring buffer in terms
                                           of 64 bit width. */
    uint32 sw_buf_wr_idx;               /* Index in to the software ring buffer
                                           pointing to last counter write
                                           operation. */
} bcm_latency_monitor_cb_info_t;

typedef void (*bcm_latency_monitor_callback_fn)(
    int unit, 
    bcm_latency_monitor_cb_info_t *latency_monitor_info, 
    void *userdata);

#ifndef BCM_HIDE_DISPATCHABLE

/* 
 * The API is used by the application to register a callback routine that
 * gets called by SDK when there is update of software ring buffer with
 * histogram data. User application implements the callback handler and
 * the processing in the callback handler should be minimal as the
 * calling thread would be blocked when this callback is invoked.
 */
extern int bcm_latency_monitor_register(
    int unit, 
    int monitor_id, 
    bcm_latency_monitor_callback_fn fn, 
    void *user_data);

/* 
 * The API is used by the application to unregister the callback routine
 * that gets called by SDK when there is update of software ring buffer
 * with histogram data. The API fails if the monitor is in running state.
 * User is expected to disable monitor before calling this API.
 */
extern int bcm_latency_monitor_unregister(
    int unit, 
    int monitor_id, 
    bcm_latency_monitor_callback_fn fn);

/* 
 * Release all the resource allocated for a given monitor (Effective only
 * when the monitor is in Disable/Error state).
 */
extern int bcm_latency_monitor_destroy(
    int unit, 
    uint8 monitor_id);

/* Initialize the Latency monitor subsystem. */
extern int bcm_latency_monitor_init(
    int unit);

/* Shut down the latency_monitor subsystem. */
extern int bcm_latency_monitor_detach(
    int unit);

/* Attach state counter ID to a given latency monitor ID. */
extern int bcm_latency_monitor_stat_attach(
    int unit, 
    uint8 monitor_id, 
    uint32 stat_counter_id);

/* Detach state counter ID to a given latency monitor ID. */
extern int bcm_latency_monitor_stat_detach(
    int unit, 
    uint8 monitor_id);

/* Attach state counter ID to a given latency monitor ID. */
extern int bcm_latency_monitor_stat_id_get(
    int unit, 
    uint8 monitor_id, 
    uint32 *stat_counter_id);

#endif /* BCM_HIDE_DISPATCHABLE */

#endif /* __BCM_LATENCY_MONITOR_H__ */

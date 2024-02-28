/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 */

#ifndef __BCM_TX_H__
#define __BCM_TX_H__

#include <bcm/pkt.h>

/* Setup a packet for default transmit on the given unit. */
typedef int (*bcm_tx_pkt_setup_f)(
    int unit, 
    bcm_pkt_t *tx_pkt);

/* Function prototype to send out a packet. */
typedef int (*bcm_tx_f)(
    int unit, 
    bcm_pkt_t *tx_pkt, 
    void *cookie);

/* Function prototype to send out an array of packets. */
typedef int (*bcm_tx_array_f)(
    int unit, 
    bcm_pkt_t **pkt_array, 
    int count, 
    bcm_pkt_cb_f all_done_cb, 
    void *cookie);

/* Function prototype to send out a list of packets. */
typedef int (*bcm_tx_list_f)(
    int unit, 
    bcm_pkt_t *pkt_list, 
    bcm_pkt_cb_f all_done_cb, 
    void *cookie);

#ifndef BCM_HIDE_DISPATCHABLE

/* Initialize the BCM TX software module. */
extern int bcm_tx_init(
    int unit);

/* Clean up resources created during TX initialization */
extern int bcm_tx_cleanup(
    int unit);

/* Transmit one or more packets. */
extern int bcm_tx(
    int unit, 
    bcm_pkt_t *tx_pkt, 
    void *cookie);

/* Transmit one or more packets. */
extern int bcm_tx_array(
    int unit, 
    bcm_pkt_t **pkt, 
    int count, 
    bcm_pkt_cb_f all_done_cb, 
    void *cookie);

/* Transmit one or more packets. */
extern int bcm_tx_list(
    int unit, 
    bcm_pkt_t *pkt, 
    bcm_pkt_cb_f all_done_cb, 
    void *cookie);

/* Set up a packet for transmit. */
extern int bcm_tx_pkt_setup(
    int unit, 
    bcm_pkt_t *tx_pkt);

/* 
 * Update a packet based on a look up of the Layer 2 Forwarding Database
 * (deprecated, unimplemented).
 */
extern int bcm_tx_pkt_l2_map(
    int unit, 
    bcm_pkt_t *pkt, 
    bcm_mac_t dest_mac, 
    int vid);

#endif /* BCM_HIDE_DISPATCHABLE */

/* 
 * TX Tunneling:
 * 
 * This is the prototype to forward a packet to a remote CPU for transmit
 * on a remote device. A function of this type may be registered with BCM
 * TX to allow automatic forwarding to remote unit numbers.
 */
#if defined(BCM_RPC_SUPPORT)
typedef int (*bcm_tx_cpu_tunnel_f)(
    bcm_pkt_t *pkt, 
    int dest_unit, 
    int remote_port, 
    uint32 flags, 
    bcm_cpu_tunnel_mode_t mode);
#endif

#if defined(BCM_RPC_SUPPORT)
/* Encapsulate and forward a packet to a different CPU. */
extern int bcm_tx_cpu_tunnel_get(
    bcm_tx_cpu_tunnel_f *f);
#endif

#if defined(BCM_RPC_SUPPORT)
/* Encapsulate and forward a packet to a different CPU. */
extern int bcm_tx_cpu_tunnel_set(
    bcm_tx_cpu_tunnel_f f);
#endif

#if defined(BCM_RPC_SUPPORT)
/* Encapsulate and forward a packet to a different CPU. */
extern int bcm_tx_cpu_tunnel(
    bcm_pkt_t *pkt, 
    int dest_unit, 
    int remote_port, 
    uint32 flags, 
    bcm_cpu_tunnel_mode_t mode);
#endif

#if defined(BCM_RPC_SUPPORT)
/* DEPRECATED:  bcm_tx_tunnel. Use bcm_tx_cpu_tunnel */
#define bcm_tx_tunnel           bcm_tx_cpu_tunnel 
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(BROADCOM_DEBUG)
/* bcm_tx_dv_dump */
extern int bcm_tx_dv_dump(
    int unit, 
    void *dv_p);
#endif

#if defined(BROADCOM_DEBUG)
/* bcm_tx_show */
extern int bcm_tx_show(
    int unit);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#endif /* __BCM_TX_H__ */

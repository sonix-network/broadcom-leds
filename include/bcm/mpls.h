/*
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 */

#ifndef __BCM_MPLS_H__
#define __BCM_MPLS_H__

#include <bcm/types.h>
#include <bcm/multicast.h>
#include <bcm/policer.h>
#include <bcm/qos.h>
#include <bcm/vlan.h>
#include <bcm/switch.h>

#if defined(INCLUDE_L3)
/* MPLS EXP Map Structure. */
typedef struct bcm_mpls_exp_map_s {
    int priority;       /* Internal priority. */
    bcm_color_t color;  /* Color. */
    uint8 dscp;         /* Diff Serv Code Point. */
    uint8 exp;          /* EXP value. */
    uint8 pkt_pri;      /* Packet priority value. */
    uint8 pkt_cfi;      /* Packet CFI value. */
} bcm_mpls_exp_map_t;
#endif

/* MPLS Egress Label flags. */
#define BCM_MPLS_EGRESS_LABEL_TTL_SET       0x00000001 
#define BCM_MPLS_EGRESS_LABEL_TTL_COPY      0x00000002 
#define BCM_MPLS_EGRESS_LABEL_TTL_DECREMENT 0x00000004 
#define BCM_MPLS_EGRESS_LABEL_EXP_SET       0x00000008 
#define BCM_MPLS_EGRESS_LABEL_EXP_REMARK    0x00000010 
#define BCM_MPLS_EGRESS_LABEL_EXP_COPY      0x00000020 
#define BCM_MPLS_EGRESS_LABEL_PRI_SET       0x00000040 
#define BCM_MPLS_EGRESS_LABEL_PRI_REMARK    0x00000080 
#define BCM_MPLS_EGRESS_LABEL_DROP          0x00000100 
#define BCM_MPLS_EGRESS_LABEL_PHP_IPV4      0x00000200 
#define BCM_MPLS_EGRESS_LABEL_PHP_IPV6      0x00000400 
#define BCM_MPLS_EGRESS_LABEL_PHP_L2        0x00000800 
#define BCM_MPLS_EGRESS_LABEL_ENTROPY_ENABLE 0x00001000 /* Enable Entropy for
                                                          outgoing Tunnel-label
                                                          and PW-label */
#define BCM_MPLS_EGRESS_LABEL_ACTION_VALID  0x00002000 /* When set action is
                                                          taken from action
                                                          field */
#define BCM_MPLS_EGRESS_LABEL_REPLACE       0x00004000 /* Replace existing
                                                          entry. */
#define BCM_MPLS_EGRESS_LABEL_WITH_ID       0x00008000 /* Add using the
                                                          specified ID. */
#define BCM_MPLS_EGRESS_LABEL_WIDE          0x00010000 /* Set wide entry in
                                                          egress. */
#define BCM_MPLS_EGRESS_LABEL_IML           0x00020000 /* Label is EVPN Implicit
                                                          Multicast. */
#define BCM_MPLS_EGRESS_LABEL_PROTECTION    0x00040000 /* Egress Protection
                                                          object. */
#define BCM_MPLS_EGRESS_LABEL_PRESERVE      0x00080000 /* Label used for swap is
                                                          preserved. */
#define BCM_MPLS_EGRESS_LABEL_ENTROPY_INDICATION_ENABLE 0x00100000 /* Add Entropy Indication
                                                          label for outgoing
                                                          Tunnel-label */
#define BCM_MPLS_EGRESS_LABEL_EVPN          0x00200000 /* Create an EVPN tunnel */
#define BCM_MPLS_EGRESS_LABEL_ECN_TO_EXP_MAP 0x00400000 /* Use a specified
                                                          ECN_TO_EXP mapping to
                                                          derive MPLS EXP. */
#define BCM_MPLS_EGRESS_LABEL_INT_CN_TO_EXP_MAP 0x00800000 /* Use a specified
                                                          INT_CN_TO_EXP mapping
                                                          to derive MPLS EXP. */
#define BCM_MPLS_EGRESS_LABEL_ECN_EXP_MAP_TRUST 0x01000000 /* Trust ECN mapping. */
#define BCM_MPLS_EGRESS_LABEL_ROE_BARE_MPLS 0x02000000 /* Encapsulate ROE frame
                                                          with MPLS labels
                                                          without inner L2
                                                          headers. */
#define BCM_MPLS_EGRESS_LABEL_TANDEM        0x04000000 /* Create tandem tunnel
                                                          entry. */
#define BCM_MPLS_EGRESS_LABEL_STAT_ENABLE   0x08000000 /* Indicates statistics
                                                          enabled. */
#define BCM_MPLS_EGRESS_LABEL_VIRTUAL_EGRESS_POINTED 0x10000000 /* Indicate MPLS egress
                                                          tunnel is pointed from
                                                          EEDB only and not from
                                                          FWD/ACL Dbs */
#define BCM_MPLS_EGRESS_LABEL_CONTROL_WORD  0x20000000 /* Outgoing EVPN labels
                                                          use control word */
#define BCM_MPLS_EGRESS_LABEL_ALTERNATE_MARKING 0x40000000 /* Configure RFC8321
                                                          Alternate Marking
                                                          entry */
#define BCM_MPLS_EGRESS_LABEL_ALTERNATE_MARKING_LOSS_SET 0x80000000 /* Set loss bit of
                                                          Alternate Marking Flow
                                                          Id label */

/* MPLS Egress Label second flags group . */
#define BCM_MPLS_EGRESS_LABEL_FLAGS2_SVTAG_ENABLE 0x00000001 /* Enable the SVTAG
                                                          lookup for the MPLS
                                                          tunnel. */
#define BCM_MPLS_EGRESS_LABEL_FLAGS2_ESI_INTF_NAMESPACE 0x00000002 /* EVPN ESI label is
                                                          retrieved in interface
                                                          namespace. */
#define BCM_MPLS_EGRESS_LABEL_FLAGS2_NO_TPID_CLASS 0x00000004 /* TPID class is not
                                                          needed for this
                                                          object. */

/* MPLS label egress actions. */
typedef enum bcm_mpls_egress_action_e {
    BCM_MPLS_EGRESS_ACTION_SWAP = 0, 
    BCM_MPLS_EGRESS_ACTION_PHP  = 1, 
    BCM_MPLS_EGRESS_ACTION_PUSH = 2, 
    BCM_MPLS_EGRESS_ACTION_NOP  = 3, 
    BCM_MPLS_EGRESS_ACTION_SWAP_OR_PUSH = 4 
} bcm_mpls_egress_action_t;

/* Special Label Control Types. */
typedef enum bcm_mpls_special_label_push_type_e {
    bcmMplsSpecialLabelPushNone                         = 0, 
    bcmMplsSpecialLabelPushSpecial                      = 1, 
    bcmMplsSpecialLabelPushEntropy                      = 2, 
    bcmMplsSpecialLabelPushSpecialPlusEntropy           = 3, 
    bcmMplsSpecialLabelPushMeaningful1                  = 4, 
    bcmMplsSpecialLabelPushMeaningful2                  = 5, 
    bcmMplsSpecialLabelPushMeaningful3                  = 6, 
    bcmMplsSpecialLabelPushMeaningful13                 = 7, 
    bcmMplsSpecialLabelPushMeaningful12                 = 8, 
    bcmMplsSpecialLabelPushMeaningful23                 = 9, 
    bcmMplsSpecialLabelPushMeaningful123                = 10 
} bcm_mpls_special_label_push_type_t;

/* Special Label Types. */
typedef enum bcm_mpls_special_label_type_e {
    bcmMplsSpecialLabelTypeNone                         = 0, 
    bcmMplsSpecialLabelTypeGal                          = 1, 
    bcmMplsSpecialLabelTypeRal                          = 2, 
    bcmMplsSpecialLabelTypeSpecial                      = 3, 
    bcmMplsSpecialLabelTypeEntropy                      = 4, 
    bcmMplsSpecialLabelTypeFrr                          = 5 
} bcm_mpls_special_label_type_t;

/* bcm_mpls_egress_label_s */
typedef struct bcm_mpls_egress_label_s {
    uint32 flags;                       /* BCM_MPLS_EGRESS_LABEL_xxx. */
    uint32 flags2;                      /* BCM_MPLS_EGRESS_LABEL_FLAGS2_xxx. */
    bcm_mpls_label_t label; 
    int qos_map_id;                     /* EXP map ID. */
    uint8 exp; 
    uint8 ttl; 
    uint8 pkt_pri; 
    uint8 pkt_cfi; 
    bcm_if_t tunnel_id;                 /* Tunnel Interface. */
    bcm_if_t l3_intf_id;                /* l3 Interface ID. */
    bcm_mpls_egress_action_t action;    /* MPLS label action, relevant when
                                           BCM_MPLS_EGRESS_LABEL_ACTION_VALID is
                                           set. */
    int ecn_map_id;                     /* Ecn map id for IP ECN to EXP mapping. */
    int int_cn_map_id;                  /* Ecn map id for INT_CN to EXP mapping. */
    bcm_failover_t egress_failover_id;  /* Failover object index for Egress
                                           Protection. */
    bcm_if_t egress_failover_if_id;     /* Failover MPLS Tunnel identifier for
                                           Egress Protection. */
    int outlif_counting_profile;        /* Out LIF counting profile */
    bcm_mpls_special_label_push_type_t spl_label_push_type; /* Special label push type */
    bcm_encap_access_t encap_access;    /* Encapsulation Access stage */
    bcm_qos_egress_model_t egress_qos_model; /* egress qos and ttl model */
    int estimated_encap_size;           /* Estimated encapsulation size expected
                                           by this object including the next
                                           interfaces that are pointed from it */
} bcm_mpls_egress_label_t;

#if defined(INCLUDE_L3)
/* MPLS port match criteria. */
typedef enum bcm_mpls_port_match_e {
    BCM_MPLS_PORT_MATCH_INVALID = 0,    /* Illegal. */
    BCM_MPLS_PORT_MATCH_NONE = 1,       /* No source match criteria. */
    BCM_MPLS_PORT_MATCH_PORT = 2,       /* {Module, Port} or Trunk. */
    BCM_MPLS_PORT_MATCH_PORT_VLAN = 3,  /* Mod/port/trunk + outer VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_INNER_VLAN = 4, /* Mod/port/trunk + inner VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_VLAN_STACKED = 5, /* Mod/port/trunk + outer/inner VLAN ID. */
    BCM_MPLS_PORT_MATCH_VLAN_PRI = 6,   /* Mod/port/trunk + VLAN-PRI + VLAN-CFI. */
    BCM_MPLS_PORT_MATCH_LABEL = 7,      /* MPLS label. */
    BCM_MPLS_PORT_MATCH_LABEL_PORT = 8, /* MPLS label + Mod/port/trunk. */
    BCM_MPLS_PORT_MATCH_LABEL_VLAN = 9, /* MPLS label + VLAN. */
    BCM_MPLS_PORT_MATCH_PORT_SUBPORT_PKT_VID = 10, /* Mod/port/trunk + LLTAG VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_SUBPORT_PKT_VID_OUTER_VLAN = 11, /* Mod/port/trunk + LLTAG VLAN ID +
                                           outer VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_SUBPORT_PKT_VID_INNER_VLAN = 12, /* Mod/port/trunk + LLTAG VLAN ID +
                                           inner VLAN ID. */
    BCM_MPLS_PORT_MATCH_SHARE = 13,     /* Multiple match criteria Share one
                                           MPLS logical port. */
    BCM_MPLS_PORT_MATCH_PORT_VLAN_TAG = 14, /* Mod/port/trunk + Outer VLAN-PRI +
                                           Outer VLAN-CFI + Outer VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_INNER_VLAN_TAG = 15, /* Mod/port/trunk + Inner VLAN-PRI +
                                           Inner VLAN-CFI + Inner VLAN ID. */
    BCM_MPLS_PORT_MATCH_VLAN = 16,      /* Outer VLAN ID only. */
    BCM_MPLS_PORT_MATCH_LABEL_CONTEXT_LABEL = 17, /* Context MPLS label + VC label. */
    BCM_MPLS_PORT_MATCH_LABEL_L3_INGRESS_INTF = 18, /* L3 interface ID + VC label. */
    BCM_MPLS_PORT_MATCH_LABEL_PORT_GROUP = 19, /* MPLS label + Port group. */
    BCM_MPLS_PORT_MATCH_PORT_GROUP_VLAN = 20, /* Port group + outer VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_GROUP_INNER_VLAN = 21, /* Port group + inner VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_GROUP_VLAN_STACKED = 22, /* Port group + outer/inner VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_GROUP_DEFAULT_VLAN = 23, /* Port group + default VLAN ID. */
    BCM_MPLS_PORT_MATCH_PORT_GROUP_DEFAULT_VPN = 24, /* Port group + default VPN ID. */
    BCM_MPLS_PORT_MATCH_COUNT = 25      /* Must be last. */
} bcm_mpls_port_match_t;
#endif

#if defined(INCLUDE_L3)
/* MPLS interface flags. */
#define BCM_MPLS_PORT_REPLACE               0x00000001 /* Replace existing
                                                          entry. */
#define BCM_MPLS_PORT_WITH_ID               0x00000002 /* Add using the
                                                          specified ID. */
#define BCM_MPLS_PORT_ENCAP_WITH_ID         0x00000004 /* Use the specified
                                                          encap id to allocate
                                                          and setup
                                                          encapsulation. */
#define BCM_MPLS_PORT_EGRESS_UNTAGGED       0x00000008 /* Indicates tag is
                                                          stripped on logical
                                                          port egress. */
#define BCM_MPLS_PORT_DROP                  0x00000010 /* Drop matching packets. */
#define BCM_MPLS_PORT_NETWORK               0x00000020 /* Network-facing
                                                          interface. */
#define BCM_MPLS_PORT_CONTROL_WORD          0x00000040 /* Use control word
                                                          (VPWS). */
#define BCM_MPLS_PORT_SEQUENCED             0x00000080 /* Use sequence number
                                                          (VPWS). */
#define BCM_MPLS_PORT_COUNTED               0x00000100 /* Maintain packet/byte
                                                          counts. */
#define BCM_MPLS_PORT_INT_PRI_SET           0x00000200 /* Use specified int_pri
                                                          value for internal
                                                          priority. */
#define BCM_MPLS_PORT_INT_PRI_MAP           0x00000400 /* Use specified exp_map
                                                          to derive internal
                                                          priority. */
#define BCM_MPLS_PORT_COLOR_MAP             0x00000800 /* Use specified exp_map
                                                          to derive internal
                                                          color. */
#define BCM_MPLS_PORT_EGRESS_TUNNEL         0x00001000 /* Specified egress
                                                          tunnel interface is
                                                          valid. */
#define BCM_MPLS_PORT_NO_EGRESS_TUNNEL_ENCAP 0x00002000 /* Specified egress
                                                          tunnel interface is
                                                          valid.
                                                                                
                                                           Do not encapsulate
                                                          outer MAC but update
                                                          MAC Address on the
                                                          packet. */
#define BCM_MPLS_PORT_SERVICE_TAGGED        0x00004000 /* Service tag mode. */
#define BCM_MPLS_PORT_SERVICE_VLAN_ADD      0x00008000 /* Add SD-tag. */
#define BCM_MPLS_PORT_SERVICE_VLAN_REPLACE  0x00010000 /* Replace VLAN not TPID. */
#define BCM_MPLS_PORT_SERVICE_VLAN_DELETE   0x00020000 /* Delete VLAN tag. */
#define BCM_MPLS_PORT_SERVICE_VLAN_TPID_REPLACE 0x00040000 /* Replace VLAN and TPID. */
#define BCM_MPLS_PORT_SERVICE_VLAN_PRI_TPID_REPLACE 0x00080000 /* Replace VLAN, VLAN-PRI
                                                          and TPID. */
#define BCM_MPLS_PORT_SERVICE_VLAN_PRI_REPLACE 0x00100000 /* Replace VLAN and
                                                          VLAN-PRI. */
#define BCM_MPLS_PORT_SERVICE_PRI_REPLACE   0x00200000 /* Replace VLAN-PRI only. */
#define BCM_MPLS_PORT_SERVICE_TPID_REPLACE  0x00400000 /* Replace TPID only. */
#define BCM_MPLS_PORT_INNER_VLAN_PRESERVE   0x00800000 /* Preserve the inner or
                                                          customer VLAN tag */
#define BCM_MPLS_PORT_FAILOVER              0x01000000 /* Failover Port */
#define BCM_MPLS_PORT_INNER_VLAN_ADD        0x02000000 /* Insert Native VLAN tag
                                                          for untagged pcakets */
#define BCM_MPLS_PORT_ENTROPY_ENABLE        0x04000000 /* Enable MPLS Entropy
                                                          Label for L2-VPN */
#define BCM_MPLS_PORT_PW_FAILOVER           0x08000000 /* Port for PW Redundancy */
#define BCM_MPLS_PORT_EXTENDED              0x10000000 /* Use the extended P2P
                                                          service */
#define BCM_MPLS_PORT_WITH_GAL              0x20000000 /* indicating OAMoGALoPWE
                                                          is supported. */
#define BCM_MPLS_PORT_LOCAL_PROTECTION      0x40000000 /* Local protection
                                                          according to link
                                                          status. */
#define BCM_MPLS_PORT_FORWARD_GROUP         0x80000000 /* Enable VLAN-Port
                                                          property FORWARD_GROUP
                                                          to MPLS-Port */
#endif

#if defined(INCLUDE_L3)
/* More MPLS interface flags. */
#define BCM_MPLS_PORT2_INGRESS_ONLY         0x00000001 /* Indicates ingress
                                                          settings */
#define BCM_MPLS_PORT2_EGRESS_ONLY          0x00000002 /* Indicates egress
                                                          settings */
#define BCM_MPLS_PORT2_EGRESS_PROTECTION    0x00000004 /* Egress protection
                                                          object */
#define BCM_MPLS_PORT2_TUNNEL_PUSH_INFO     0x00000008 /* Allocate MPLS Push
                                                          profile information */
#define BCM_MPLS_PORT2_LEARN_ENCAP          0x00000010 /* Learning information
                                                          is a pointer to
                                                          encapsulation database
                                                          entry */
#define BCM_MPLS_PORT2_CASCADED             0x00000020 /* Set in case the mpls
                                                          port is over overlay */
#define BCM_MPLS_PORT2_INGRESS_WIDE         0x00000040 /* use Wide mode
                                                          (additional data) */
#define BCM_MPLS_PORT2_TUNNEL_HEADER_EGRESS_VLAN_TRANSLATION 0x00000080 /* If set, MPLS tunnel
                                                          header's VLAN will be
                                                          translated; else,
                                                          payload's VLAN will be
                                                          translated. */
#define BCM_MPLS_PORT2_PROXY_MODE           0x00000100 /* Act as proxy mode, and
                                                          do packet
                                                          modifications for HG
                                                          output port on
                                                          stacking mode */
#define BCM_MPLS_PORT2_INGRESS_ENTROPY_ENABLE 0x00000200 /* If set, enables
                                                          termination of entropy
                                                          label following the
                                                          ingressing match label */
#define BCM_MPLS_PORT2_ENCAP_OPTIMIZED      0x00000400 /* Indicate that FEC
                                                          should be set as
                                                          format C (EEI) */
#define BCM_MPLS_PORT2_QOS_NONE             0x00000800 /* Indicate that no QOS
                                                          configuration on the
                                                          MPLS port. */
#define BCM_MPLS_PORT2_INGRESS_ECN_MAP      0x00001000 /* Use specified
                                                          EXP_TO_ECN map to
                                                          derive IP ECN. */
#define BCM_MPLS_PORT2_KEEP_TTL             0x00002000 /* Retain incoming TTL by
                                                          disabling decrement
                                                          for MPLS flows. */
#define BCM_MPLS_PORT2_LEARN_ENCAP_EEI      0x00004000 /* Learning information
                                                          is two pointers to
                                                          encapsulation database
                                                          entries. FEC should be
                                                          set as format
                                                          B(OutLIF). */
#define BCM_MPLS_PORT2_OUTER_TTL            0x00008000 /* TTL flag used to
                                                          indicate if TTL is
                                                          taken from PIPE or
                                                          UNIFORM. */
#define BCM_MPLS_PORT2_OUTER_EXP            0x00010000 /* QOS flag used to
                                                          indicate if QOS is
                                                          taken from PIPE or
                                                          UNIFORM. */
#define BCM_MPLS_PORT2_SERVICE_CFI_REPLACE  0x00020000 /* Replace CFI. */
#define BCM_MPLS_PORT2_WITH_LSP_OAM         0x00040000 /* Add POP action while
                                                          creating the VC label
                                                          treat the packet as
                                                          LSP-OAM */
#define BCM_MPLS_PORT2_STAT_ENABLE          0x00080000 /* Indicates statistics
                                                          enabled. */
#define BCM_MPLS_PORT2_SERVICE_TAGGED_INDEXED 0x00100000 /* Indicates service tag
                                                          with indexed (Gliful)
                                                          Native AC. */
#define BCM_MPLS_PORT2_ALLOC_SYMMETRIC      0x00200000 /* Indicate that MPLS
                                                          Port ID allocation
                                                          (ingress or egress)
                                                          will return a GPORT
                                                          which is free in both
                                                          ingress and egress. */
#define BCM_MPLS_PORT2_CROSS_CONNECT        0x00400000 /* P2P L2 service (VPWS). */
#define BCM_MPLS_PORT2_PLATFORM_NAMESPACE   0x00800000 /* If set, MPLS Port is
                                                          working in network
                                                          namespace; else in
                                                          interface namespace. */
#define BCM_MPLS_PORT2_ENCAP_CASCADED       0x01000000 /* Indicate the
                                                          encapsulation ID is
                                                          linked to the MPLS
                                                          port. */
#define BCM_MPLS_PORT2_MULTICAST_GROUP_REMAP 0x02000000 /* Remap the multicast
                                                          group to a new one. */
#define BCM_MPLS_PORT2_NO_TPID_CLASS        0x04000000 /* There is no TPID class
                                                          for this object. */
#define BCM_MPLS_PORT2_DEFAULT              0x08000000 /* Default network SVP to
                                                          use when L2 MPLS
                                                          termination lookup
                                                          fails */
#define BCM_MPLS_PORT2_SERVICE_TAGGED_BASED_HEADER_ONLY 0x10000000 /* Indicate PWE tagged
                                                          x-tags mode */
#define BCM_MPLS_PORT2_EGRESS_PORT_LOOKUP_IN_EGRESS_VLAN_TRANSLATION 0x20000000 /* Enables Egress Vlan
                                                          Translate lookup based
                                                          on egress port instead
                                                          of default, which is
                                                          based on virtual port */
#define BCM_MPLS_PORT2_EGRESS_NO_NATIVE_VLAN_PORT_MATCH 0x40000000 /* Disable egress native
                                                          vlan port lookup */
#define BCM_MPLS_PORT2_EXTENDED_TERMINATION 0x80000000 /* Used for extended
                                                          termination flow */
#endif

#if defined(INCLUDE_L3)
/* MPLS traverse flags. */
#define BCM_MPLS_TRAVERSE_DELETE    0x00000001 /* Indicates to delete mpls port
                                                  entries */
#endif

#if defined(INCLUDE_L3)
/* VCCV Control Channel Type */
typedef enum bcm_mpls_port_control_channel_type_e {
    bcmMplsPortControlChannelNone         = 0, 
    bcmMplsPortControlChannelAch          = 1, 
    bcmMplsPortControlChannelRouterAlert  = 2, 
    bcmMplsPortControlChannelTtl          = 3, 
    bcmMplsPortControlChannelGalUnderPw   = 4 
} bcm_mpls_port_control_channel_type_t;
#endif

#if defined(INCLUDE_L3)
/* MPLS port type. */
typedef struct bcm_mpls_port_s {
    bcm_gport_t mpls_port_id;           /* GPORT identifier. */
    uint32 flags;                       /* BCM_MPLS_PORT_xxx. */
    uint32 flags2;                      /* BCM_MPLS_PORT2_xxx. */
    int if_class;                       /* Interface class ID. */
    int exp_map;                        /* Incoming EXP map ID. */
    int int_pri;                        /* Internal priority. */
    uint8 pkt_pri;                      /* Packet priority. */
    uint8 pkt_cfi;                      /* Packet CFI. */
    uint16 service_tpid;                /* Service VLAN TPID value. */
    bcm_gport_t port;                   /* Match port and/or egress port. */
    bcm_mpls_port_match_t criteria;     /* Match criteria. */
    bcm_vlan_t match_vlan;              /* Outer VLAN ID to match. */
    bcm_vlan_t match_inner_vlan;        /* Inner VLAN ID to match. */
    bcm_mpls_label_t match_label;       /* VC label to match. */
    bcm_if_t egress_tunnel_if;          /* MPLS tunnel egress object. */
    bcm_mpls_egress_label_t egress_label; /* Outgoing VC label. */
    int mtu;                            /* MPLS port MTU. */
    bcm_vlan_t egress_service_vlan;     /* Service VLAN to Add/Replace. */
    uint32 pw_seq_number;               /* Initial-value of Pseudo-wire Sequence
                                           number */
    bcm_if_t encap_id;                  /* Encap Identifier. */
    bcm_failover_t ingress_failover_id; /* Ingress Failover Object Identifier. */
    bcm_gport_t ingress_failover_port_id; /* Ingress Failover MPLS Port
                                           Identifier. */
    bcm_failover_t failover_id;         /* Failover Object Identifier. */
    bcm_gport_t failover_port_id;       /* Failover MPLS Port Identifier. */
    bcm_policer_t policer_id;           /* Policer ID to be associated with the
                                           MPLS gport */
    bcm_multicast_t failover_mc_group;  /* MC group used for bi-cast. */
    bcm_failover_t pw_failover_id;      /* Failover Object Identifier for
                                           Redundant PW. */
    bcm_gport_t pw_failover_port_id;    /* Redundant PW port Identifier. */
    bcm_mpls_port_control_channel_type_t vccv_type; /* Indicate VCCV Control Channel */
    bcm_switch_network_group_t network_group_id; /* Split Horizon network group
                                           identifier */
    bcm_vlan_t match_subport_pkt_vid;   /* LLTAG VLAN ID to match. */
    bcm_gport_t tunnel_id;              /* Tunnel Id pointing to ingress LSP. */
    bcm_gport_t per_flow_queue_base;    /* Base queue of the per flow queue set.
                                           Actual queue is decided based on
                                           internal priority and qos map. */
    int qos_map_id;                     /* QOS map identifier. */
    bcm_failover_t egress_failover_id;  /* Failover object index for Egress
                                           Protection */
    bcm_gport_t egress_failover_port_id; /* Failover MPLS Port identifier for
                                           Egress Protection */
    int ecn_map_id;                     /* ECN map identifier. */
    uint32 class_id;                    /* Class ID assigned during tunnel
                                           termination only. Not applicable for
                                           access flows */
    uint32 egress_class_id;             /* Egress Class ID */
    int inlif_counting_profile;         /* In LIF counting profile */
    bcm_mpls_egress_label_t egress_tunnel_label; /* A mpls tunnel to be binded with the
                                           pwe */
    int nof_service_tags;               /* Number of Service-Tags expected on
                                           Native-ETH header */
    bcm_qos_ingress_model_t ingress_qos_model; /* ingress qos&ttl model */
    bcm_mpls_label_t context_label;     /* Ingress match - context label. */
    bcm_if_t ingress_if;                /* Ingress match - context interface. */
    int port_group;                     /* Port group to match. */
    int dscp_map_id;                    /* DSCP based PHB map ID. */
    int vlan_pri_map_id;                /* VLAN priority and CFI based PHB map
                                           ID. */
    bcm_vlan_t match_default_vlan;      /* Default VLAN ID to match. */
    bcm_vpn_t match_default_vpn;        /* Default VPN ID to match. */
    uint32 learn_strength;              /* Learn strength */
} bcm_mpls_port_t;
#endif

#if defined(INCLUDE_L3)
/* MPLS label actions. */
typedef enum bcm_mpls_switch_action_e {
    BCM_MPLS_SWITCH_ACTION_SWAP        = 0, 
    BCM_MPLS_SWITCH_ACTION_PHP         = 1, 
    BCM_MPLS_SWITCH_ACTION_POP         = 2, 
    BCM_MPLS_SWITCH_ACTION_POP_DIRECT  = 3, 
    BCM_MPLS_SWITCH_ACTION_NOP         = 4, 
    BCM_MPLS_SWITCH_EGRESS_ACTION_PUSH = 5, 
    BCM_MPLS_SWITCH_ACTION_INVALID     = 6 
} bcm_mpls_switch_action_t;
#endif

#if defined(INCLUDE_L3)
/* MPLS tunnel switch flags. */
#define BCM_MPLS_SWITCH_LOOKUP_SECOND_LABEL 0x00000001 /* Key contains label and
                                                          second_label. */
#define BCM_MPLS_SWITCH_COUNTED             0x00000002 /* Maintain packet/byte
                                                          counts. */
#define BCM_MPLS_SWITCH_INT_PRI_SET         0x00000004 /* Use specified int_pri
                                                          value for internal
                                                          priority. */
#define BCM_MPLS_SWITCH_INT_PRI_MAP         0x00000008 /* Use specified exp_map
                                                          to derive internal
                                                          priority. */
#define BCM_MPLS_SWITCH_COLOR_MAP           0x00000010 /* Use specified exp_map
                                                          to derive internal
                                                          color. */
#define BCM_MPLS_SWITCH_OUTER_EXP           0x00000020 /* Get EXP from
                                                          popped/swapped label. */
#define BCM_MPLS_SWITCH_OUTER_TTL           0x00000040 /* Get TTL from
                                                          popped/swapped label. */
#define BCM_MPLS_SWITCH_INNER_EXP           0x00000080 /* (POP/PHP) Get EXP from
                                                          header following
                                                          popped label. */
#define BCM_MPLS_SWITCH_INNER_TTL           0x00000100 /* (POP/PHP) Get TTL from
                                                          header following
                                                          popped label. */
#define BCM_MPLS_SWITCH_TTL_DECREMENT       0x00000200 /* Decrement the TTL
                                                          value by 1. */
#define BCM_MPLS_SWITCH_LOOKUP_L3_INGRESS_INTF 0x00000400 /* indicate that ingress
                                                          interface ingress_if
                                                          be a part of the
                                                          lookup key. */
#define BCM_MPLS_SWITCH_DROP                0x00000800 /* Drop all packets. */
#define BCM_MPLS_SWITCH_P2MP                0x00001000 /* Indicate
                                                          Point-to-Multipoint
                                                          Label. */
#define BCM_MPLS_SWITCH_SKIP_ETHERNET       0x00002000 /* If set then SKIP
                                                          following Ethernet and
                                                          forward packet
                                                          according to next (L3)
                                                          header. */
#define BCM_MPLS_SWITCH_EXPECT_BOS          0x00004000 /* if present then
                                                          terminated tunnel
                                                          expected to be BOS,
                                                          otherwise expected to
                                                          be not BOS. */
#define BCM_MPLS_SWITCH_TRAP_TTL_0          0x00008000 /* Trap packets with
                                                          terminated label where
                                                          TTL = 0. relevant when
                                                          action is POP. */
#define BCM_MPLS_SWITCH_TRAP_TTL_1          0x00010000 /* Trap packets with
                                                          terminated label where
                                                          TTL = 1. relevant when
                                                          action is POP. */
#define BCM_MPLS_SWITCH_LOOKUP_INT_PRI      0x00020000 /* indicate that int_pri
                                                          is valid and be a part
                                                          of the key for label
                                                          (ILM) lookup. */
#define BCM_MPLS_SWITCH_FRR                 0x00040000 /* Indicate Fast Reroute
                                                          Label. */
#define BCM_MPLS_SWITCH_ENCAP_SET           0x00080000 /* Set the TTL/EXP
                                                          encapsulation info. */
#define BCM_MPLS_SWITCH_NEXT_HEADER_L2      0x00100000 /* next header is
                                                          Ethernet, relevant for
                                                          POP and PHP action. */
#define BCM_MPLS_SWITCH_NEXT_HEADER_IPV4    0x00200000 /* next header is IPv4,
                                                          relevant for POP and
                                                          PHP action. */
#define BCM_MPLS_SWITCH_NEXT_HEADER_IPV6    0x00400000 /* next header is IPv6,
                                                          relevant for POP and
                                                          PHP action. */
#define BCM_MPLS_SWITCH_DIRECT_ATTACHED     0x00800000 /* Indicates that
                                                          egress_port is valid
                                                          and should be used
                                                          when directly attached
                                                          to egress (without
                                                          passing through next
                                                          hop object). Used only
                                                          for DNX chips. */
#define BCM_MPLS_SWITCH_ENTROPY_ENABLE      0x01000000 /* Enable MPLS Entropy
                                                          for Incoming
                                                          Tunnel-Label */
#define BCM_MPLS_SWITCH_REPLACE             0x02000000 /* Replace existing
                                                          entry. */
#define BCM_MPLS_SWITCH_WITH_ID             0x04000000 /* Add using the
                                                          specified ID. */
#define BCM_MPLS_SWITCH_WIDE                0x08000000 /* Create with wide mode. */
#define BCM_MPLS_SWITCH_LOOKUP_NONE         0x10000000 /* No source match done */
#define BCM_MPLS_SWITCH_EVPN_IML            0x20000000 /* Differentiate IML
                                                          labels from ordinary
                                                          labels */
#define BCM_MPLS_SWITCH_INGRESS_ECN_MAP     0x40000000 /* Use a specified
                                                          EXP_TO_ECN mapping to
                                                          derive IP ECN. */
#define BCM_MPLS_SWITCH_TUNNEL_TERM_ECN_MAP 0x80000000 /* Use a specified tunnel
                                                          termination ecn
                                                          mapping to derive IP
                                                          ECN. */
#define BCM_MPLS_SWITCH_KEEP_TTL            BCM_MPLS_SWITCH_TRAP_TTL_0 /* Retain incoming TTL by
                                                          disabling decrement
                                                          for MPLS flows. */
#endif

#if defined(INCLUDE_L3)
/* MPLS tunnel switch flags for flags2. */
#define BCM_MPLS_SWITCH2_ENABLE_IPV4        0x00000001 /* Enable IPv4 packet
                                                          lookup in mpls tunnel.
                                                          To be used only with
                                                          flags2. */
#define BCM_MPLS_SWITCH2_ENABLE_IPV6        0x00000002 /* Enable IPv6 packet
                                                          lookup in mpls tunnel.
                                                          To be used only with
                                                          flags2. */
#define BCM_MPLS_SWITCH2_ENABLE_ROE         0x00000004 /* Enable ROE frame
                                                          lookup in mpls tunnel.
                                                          To be used only with
                                                          flags2. */
#define BCM_MPLS_SWITCH2_ENABLE_ROE_CUSTOM  0x00000008 /* Enable ROE Custom
                                                          frame lookup in mpls
                                                          tunnel. To be used
                                                          only with flags2. */
#define BCM_MPLS_SWITCH2_TUNNEL_HEADER_EGRESS_VLAN_TRANSLATION 0x00000010 /* Use MPLS tunnel header
                                                          for egress vlan
                                                          translate for devices
                                                          where default behavior
                                                          is to use the inner
                                                          header for egress vlan
                                                          translation. */
#define BCM_MPLS_SWITCH2_STAT_ENABLE        0x00000020 /* Indicates statistics
                                                          enabled. */
#define BCM_MPLS_SWITCH2_CROSS_CONNECT      0x00000040 /* P2P L2 service (EVPN) */
#define BCM_MPLS_SWITCH2_TERM_BUD           0x00000080 /* MPLS multicast label
                                                          DB for BUD node */
#define BCM_MPLS_SWITCH2_VLAN_PRI_SET       0x00000100 /* Set outer vlan pri
                                                          from table entry */
#define BCM_MPLS_SWITCH2_VLAN_PRI_PHB_REMARK 0x00000200 /* Remark outer vlan pri
                                                          from PHB */
#define BCM_MPLS_SWITCH2_CONTROL_WORD       0x00000400 /* Incoming EVPN labels
                                                          have control word */
#define BCM_MPLS_SWITCH2_FRR_BOTTOM_LABEL   0x00000800 /* Add label to the FRR
                                                          bottom label lookup
                                                          memory */
#define BCM_MPLS_SWITCH2_EXTENDED_TERMINATION 0x00001000 /* Used for extended
                                                          termination flow */
#define BCM_MPLS_SWITCH2_USE_TUNNEL_TRAFFIC_CLASS 0x00002000 /* Used for selecting
                                                          source of traffic
                                                          class bits for L3
                                                          lookups */
#define BCM_MPLS_SWITCH2_FORWARD_EGR_IF_GET 0x00004000 /* Used to get the
                                                          forwarding egress
                                                          interface number. */
#define BCM_MPLS_SWITCH2_EXPECT_NON_BOS     0x00008000 /* if present then
                                                          terminated tunnel
                                                          expected to be not
                                                          BOS. */
#endif

#if defined(INCLUDE_L3)
/* MPLS tunnel switch structure. */
typedef struct bcm_mpls_tunnel_switch_s {
    uint32 flags;                       /* BCM_MPLS_SWITCH_xxx. */
    uint32 flags2;                      /* BCM_MPLS_SWITCH2_xxx. */
    bcm_mpls_label_t label;             /* Incoming label value. */
    bcm_mpls_label_t second_label;      /* Incoming second label. */
    bcm_gport_t port;                   /* Incoming port. */
    bcm_mpls_switch_action_t action;    /* MPLS label action. */
    bcm_mpls_switch_action_t action_if_bos; /* MPLS label action if BOS. */
    bcm_mpls_switch_action_t action_if_not_bos; /* MPLS label action if not BOS. */
    bcm_multicast_t mc_group;           /* P2MP Multicast group. */
    int exp_map;                        /* EXP-map ID. */
    int int_pri;                        /* Internal priority. */
    bcm_policer_t policer_id;           /* Policer ID to be associated with the
                                           incoming label. */
    bcm_vpn_t vpn;                      /* L3 VPN used if action is POP. */
    bcm_mpls_egress_label_t egress_label; /* Outgoing label information. */
    bcm_if_t egress_if;                 /* Outgoing egress object. */
    bcm_if_t ingress_if;                /* Ingress Interface object. */
    int mtu;                            /* MTU. */
    int qos_map_id;                     /* QOS map identifier. */
    bcm_failover_t failover_id;         /* Failover Object Identifier for
                                           protected tunnel. Used for 1+1
                                           protection also */
    bcm_gport_t tunnel_id;              /* Tunnel ID. */
    bcm_gport_t failover_tunnel_id;     /* Failover Tunnel ID. */
    bcm_if_t tunnel_if;                 /* hierarchical interface, relevant for
                                           when action is
                                           BCM_MPLS_SWITCH_ACTION_POP. */
    bcm_gport_t egress_port;            /* Outgoing egress port. */
    uint16 oam_global_context_id;       /* OAM global context id passed from
                                           ingress to egress XGS chip. */
    uint32 class_id;                    /* Class ID */
    int inlif_counting_profile;         /* In LIF counting profile */
    int ecn_map_id;                     /* ECN map identifier */
    int tunnel_term_ecn_map_id;         /* Tunnel termination ecn map identifier */
    uint32 stat_id;                     /* Object statistics id */
    int stat_pp_profile;                /* Statistics id and profile */
    bcm_qos_ingress_model_t ingress_qos_model; /* ingress qos & ttl model */
    uint8 pkt_pri;                      /* New vlan pri */
    uint8 pkt_cfi;                      /* New vlan cfi */
} bcm_mpls_tunnel_switch_t;
#endif

#if defined(INCLUDE_L3)
/* MPLS Entropy identifier Config Structure. */
typedef struct bcm_mpls_entropy_identifier_s {
    bcm_mpls_label_t label; /* Incoming entropy label value. */
    bcm_mpls_label_t mask;  /* Entropy label mask. */
    int pri;                /* Priority value of the entropy label. */
    uint32 flags;           /* BCM_MPLS_ENTROPY_xxx. */
} bcm_mpls_entropy_identifier_t;
#endif

#if defined(INCLUDE_L3)
/* Initialize the MPLS port structure. */
extern void bcm_mpls_port_t_init(
    bcm_mpls_port_t *mpls_port);
#endif

/* Initialize the MPLS egress label structure. */
extern void bcm_mpls_egress_label_t_init(
    bcm_mpls_egress_label_t *label);

#if defined(INCLUDE_L3)
/* Initialize the MPLS tunnel switch structure. */
extern void bcm_mpls_tunnel_switch_t_init(
    bcm_mpls_tunnel_switch_t *info);
#endif

#if defined(INCLUDE_L3)
/* Initialize MPLS Entropy label identifier structure. */
extern void bcm_mpls_entropy_identifier_t_init(
    bcm_mpls_entropy_identifier_t *info);
#endif

#if defined(INCLUDE_L3)
/* Initialize the MPLS EXP map structure. */
extern void bcm_mpls_exp_map_t_init(
    bcm_mpls_exp_map_t *exp_map);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Initialize the BCM MPLS subsystem. */
extern int bcm_mpls_init(
    int unit);
#endif

#if defined(INCLUDE_L3)
/* Detach the MPLS software module. */
extern int bcm_mpls_cleanup(
    int unit);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* Flags for bcm_mpls_vpn_id_create. */
#define BCM_MPLS_VPN_L3         0x00000001 
#define BCM_MPLS_VPN_VPWS       0x00000002 
#define BCM_MPLS_VPN_VPLS       0x00000004 
#define BCM_MPLS_VPN_REPLACE    0x00000008 
#define BCM_MPLS_VPN_WITH_ID    0x00000010 
#endif

#if defined(INCLUDE_L3)
/* MPLS VPN Definitions. */
#define BCM_MPLS_VPWS_VPN_INVALID   0xFFFE     /* Invalid VPWS VPN ID */
#define BCM_MPLS_VPLS_VPN_INVALID   0xFFFF     /* Invalid VPLS VPN ID */
#endif

#if defined(INCLUDE_L3)
/* Invalid Class ID definition. */
#define BCM_CLASS_ID_INVALID    0xFFFFFFFF /* Invalid Class ID */
#endif

#if defined(INCLUDE_L3)
/* MPLS VPN Config Structure. */
typedef struct bcm_mpls_vpn_config_s {
    uint32 flags;                       /* BCM_MPLS_VPN_xxx. */
    bcm_vpn_t vpn; 
    int lookup_id; 
    bcm_multicast_t broadcast_group; 
    bcm_multicast_t unknown_unicast_group; 
    bcm_multicast_t unknown_multicast_group; 
    bcm_policer_t policer_id;           /* Policer id to be used */
    bcm_vlan_protocol_packet_ctrl_t protocol_pkt; /* Protocol packet control */
} bcm_mpls_vpn_config_t;
#endif

#if defined(INCLUDE_L3)
/* Initialize the MPLS VPN config structure. */
extern void bcm_mpls_vpn_config_t_init(
    bcm_mpls_vpn_config_t *info);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Create an MPLS VPN. */
extern int bcm_mpls_vpn_id_create(
    int unit, 
    bcm_mpls_vpn_config_t *info);
#endif

#if defined(INCLUDE_L3)
/* Destroy an MPLS VPN. */
extern int bcm_mpls_vpn_id_destroy(
    int unit, 
    bcm_vpn_t vpn);
#endif

#if defined(INCLUDE_L3)
/* Destroy an MPLS VPN. */
extern int bcm_mpls_vpn_id_destroy_all(
    int unit);
#endif

#if defined(INCLUDE_L3)
/* Get an MPLS VPN. */
extern int bcm_mpls_vpn_id_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_mpls_vpn_config_t *info);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

/* MPLS vpn callback function prototype */
#if defined(INCLUDE_L3)
typedef int(*bcm_mpls_vpn_traverse_cb)(
    int unit, 
    bcm_mpls_vpn_config_t *info, 
    void *user_data);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* 
 * Traverse all valid MPLS VPN entries and call the supplied callback
 * routine.
 */
extern int bcm_mpls_vpn_traverse(
    int unit, 
    bcm_mpls_vpn_traverse_cb cb, 
    void *user_data);
#endif

#if defined(INCLUDE_L3)
/* Add an MPLS port to an L2 VPN. */
extern int bcm_mpls_port_add(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_mpls_port_t *mpls_port);
#endif

#if defined(INCLUDE_L3)
/* Delete an MPLS port from an L2 VPN. */
extern int bcm_mpls_port_delete(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t mpls_port_id);
#endif

#if defined(INCLUDE_L3)
/* Delete an MPLS port from an L2 VPN. */
extern int bcm_mpls_port_delete_all(
    int unit, 
    bcm_vpn_t vpn);
#endif

#if defined(INCLUDE_L3)
/* Get an MPLS port from an L2 VPN. */
extern int bcm_mpls_port_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_mpls_port_t *mpls_port);
#endif

#if defined(INCLUDE_L3)
/* Get all MPLS ports from an L2 VPN. */
extern int bcm_mpls_port_get_all(
    int unit, 
    bcm_vpn_t vpn, 
    int port_max, 
    bcm_mpls_port_t *port_array, 
    int *port_count);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* MPLS statistics counters. */
typedef enum bcm_mpls_stat_e {
    bcmMplsInBytes = 0, 
    bcmMplsOutBytes = 1, 
    bcmMplsInPkts = 2, 
    bcmMplsOutPkts = 3 
} bcm_mpls_stat_t;
#endif

#if defined(INCLUDE_L3)
/* bcm_mpls_stat_info_s */
typedef struct bcm_mpls_stat_info_s {
    bcm_mpls_stat_t stat;               /* To specify In/Out Bytes/Pkts */
    uint32 num_entries;                 /* Number of Counter Entries */
    uint32 *counter_indexes;            /* Pointer to Counter indexes */
    bcm_stat_value_t *counter_values;   /* Pointer to counter values */
} bcm_mpls_stat_info_t;
#endif

#if defined(INCLUDE_L3)
/* Initialize the MPLS tunnel Stat info structure. */
extern void bcm_mpls_stat_info_t_init(
    bcm_mpls_stat_info_t *stat_info);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* 
 * Attach statistics entity to the MPLS tunnel derived from the
 * given L3 Egress interface
 */
extern int bcm_mpls_tunnel_stat_attach(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id);
#endif

#if defined(INCLUDE_L3)
/* 
 * Detach statistics entity to the MPLS tunnel derived from the
 * given L3 Egress interface.
 */
extern int bcm_mpls_tunnel_stat_detach(
    int unit, 
    bcm_if_t intf_id);
#endif

#if defined(INCLUDE_L3)
/* 
 * Get counter value for the specified MPLS statistic type and Tunnel
 * interface
 * derived from the given L3 interface ID
 */
extern int bcm_mpls_tunnel_stat_counter_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#if defined(INCLUDE_L3)
/* 
 * Force an immediate counter update and retrieve the specified counter
 * statistic for a MPLS tunnel
 */
extern int bcm_mpls_tunnel_stat_counter_sync_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#if defined(INCLUDE_L3)
/* 
 * Get stat counter ID associated with the MPLS tunnel derived from the
 * given L3 interface ID.
 */
extern int bcm_mpls_tunnel_stat_id_get(
    int unit, 
    bcm_if_t intf_id, 
    bcm_mpls_stat_t stat, 
    uint32 *stat_counter_id);
#endif

#if defined(INCLUDE_L3)
/* 
 * Set the counter value for the specified MPLS statistic type and Tunnel
 * interface derived
 * derived from the given L3 Interface ID.
 */
extern int bcm_mpls_tunnel_stat_counter_set(
    int unit, 
    bcm_if_t intf_id, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#if defined(INCLUDE_L3)
/* 
 * Detach counter entry of the specific MPLS tunnel label
 * pointed to by the given stat counter id.
 */
extern int bcm_mpls_tunnel_label_counter_id_detach(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id);
#endif

#if defined(INCLUDE_L3)
/* 
 * Get the specified counter statistics for the given MPLS Tunnel label
 * and counter id associated with it.
 */
extern int bcm_mpls_tunnel_label_counter_id_stat_get(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id, 
    bcm_mpls_stat_info_t *stat_info);
#endif

#if defined(INCLUDE_L3)
/* 
 * Set the specified counter statistics for the given MPLS Tunnel label
 * and counter id associated with it.
 */
extern int bcm_mpls_tunnel_label_counter_id_stat_set(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id, 
    bcm_mpls_stat_info_t *stat_info);
#endif

#if defined(INCLUDE_L3)
/* 
 * Get the specified counter statistics for the given MPLS Tunnel label
 * and counter id associated with it.
 * SW accumulated counters are made in sync with the hw count.
 */
extern int bcm_mpls_tunnel_label_counter_id_stat_sync_get(
    int unit, 
    bcm_if_t intf_id, 
    uint32 stat_counter_id, 
    bcm_mpls_stat_info_t *stat_info);
#endif

#if defined(INCLUDE_L3)
/* 
 * Get the array of stat counter ids associated with the given MPLS
 * tunnel
 * interface. It can also provide the number of counter indexes
 * associated
 * with the MPLS tunnel.
 */
extern int bcm_mpls_tunnel_label_counter_id_num_get(
    int unit, 
    bcm_if_t intf_id, 
    int *num_counters, 
    uint32 *stat_counter_id);
#endif

#if defined(INCLUDE_L3)
/* Set the MPLS tunnel initiator parameters for an L3 interface. */
extern int bcm_mpls_tunnel_initiator_set(
    int unit, 
    bcm_if_t intf, 
    int num_labels, 
    bcm_mpls_egress_label_t *label_array);
#endif

#if defined(INCLUDE_L3)
/* bcm_mpls_tunnel_initiator_create */
extern int bcm_mpls_tunnel_initiator_create(
    int unit, 
    bcm_if_t intf, 
    int num_labels, 
    bcm_mpls_egress_label_t *label_array);
#endif

#if defined(INCLUDE_L3)
/* Clear the MPLS tunnel initiator parameters for an L3 interface. */
extern int bcm_mpls_tunnel_initiator_clear(
    int unit, 
    bcm_if_t intf);
#endif

#if defined(INCLUDE_L3)
/* Clear all MPLS tunnel initiator information. */
extern int bcm_mpls_tunnel_initiator_clear_all(
    int unit);
#endif

#if defined(INCLUDE_L3)
/* Get the MPLS tunnel initiator parameters from an L3 interface. */
extern int bcm_mpls_tunnel_initiator_get(
    int unit, 
    bcm_if_t intf, 
    int label_max, 
    bcm_mpls_egress_label_t *label_array, 
    int *label_count);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

/* mpls_tunnel_initiator_traverse_info_s */
typedef struct bcm_mpls_tunnel_initiator_traverse_info_s {
    uint32 flags;   /* BCM_MPLS_EGRESS_LABEL_xxx. */
} bcm_mpls_tunnel_initiator_traverse_info_t;

/* MPLS tunnel initiator callback function prototype */
#if defined(INCLUDE_L3)
typedef int(*bcm_mpls_tunnel_initiator_traverse_cb)(
    int unit, 
    int num_labels, 
    bcm_mpls_egress_label_t *label_array, 
    void *user_data);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* 
 * Traverse valid MPLS label egress entries, as per input flags, and call
 * the supplied callback routine.
 */
extern int bcm_mpls_tunnel_initiator_traverse(
    int unit, 
    bcm_mpls_tunnel_initiator_traverse_info_t *additional_info, 
    bcm_mpls_tunnel_initiator_traverse_cb cb, 
    void *user_data);
#endif

#if defined(INCLUDE_L3)
/* 
 * Get the flex counter object value associated to MPLS tunnel initiator
 * on a given L3 interface.
 */
extern int bcm_mpls_tunnel_initiator_flexctr_object_get(
    int unit, 
    bcm_if_t intf, 
    uint32 *value);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* MPLS tunnel encap options. */
#define BCM_MPLS_TUNNEL_ENCAP_OPTIONS_WITH_ID 0x00000001 /* ID is provided. */
#define BCM_MPLS_TUNNEL_ENCAP_OPTIONS_REPLACE 0x00000002 /* Replace the existing
                                                          entry. */
#endif

/* MPLS egress label count max. */
#define BCM_MPLS_EGRESS_LABEL_MAX   8          

/* MPLS tunnel encap flags. */
#define BCM_MPLS_TUNNEL_ENCAP_ENTROPY_ENABLE 0x00000001 /* Enable MPLS entropy. */
#define BCM_MPLS_TUNNEL_ENCAP_QOS_EXP_REMARK 0x00000002 /* Remark EXP. */

#if defined(INCLUDE_L3)
/* MPLS tunnel initiator structure. */
typedef struct bcm_mpls_tunnel_encap_s {
    bcm_gport_t tunnel_id;              /* Tunnel ID. */
    uint32 flags;                       /* BCM_MPLS_TUNNEL_ENCAP_xxx. */
    int num_labels;                     /* Number of labels to be added. */
    bcm_mpls_egress_label_t label_array[BCM_MPLS_EGRESS_LABEL_MAX]; /* Label info. */
    int qos_map_id;                     /* EXP remarking map ID. */
} bcm_mpls_tunnel_encap_t;
#endif

#if defined(INCLUDE_L3)
/* Initialize the MPLS tunnel encap structure. */
extern void bcm_mpls_tunnel_encap_t_init(
    bcm_mpls_tunnel_encap_t *tunnel_encap);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Create the MPLS tunnel initiator. */
extern int bcm_mpls_tunnel_encap_create(
    int unit, 
    uint32 options, 
    bcm_mpls_tunnel_encap_t *tunnel_encap);
#endif

#if defined(INCLUDE_L3)
/* Destroy the MPLS tunnel initiator. */
extern int bcm_mpls_tunnel_encap_destroy(
    int unit, 
    bcm_gport_t tunnel_id);
#endif

#if defined(INCLUDE_L3)
/* Destroy all MPLS tunnel initiators. */
extern int bcm_mpls_tunnel_encap_destroy_all(
    int unit);
#endif

#if defined(INCLUDE_L3)
/* Get the MPLS tunnel initiator. */
extern int bcm_mpls_tunnel_encap_get(
    int unit, 
    bcm_mpls_tunnel_encap_t *tunnel_encap);
#endif

#if defined(INCLUDE_L3)
/* Add an MPLS label entry. */
extern int bcm_mpls_tunnel_switch_add(
    int unit, 
    bcm_mpls_tunnel_switch_t *info);
#endif

#if defined(INCLUDE_L3)
/* Add an MPLS label entry. */
extern int bcm_mpls_tunnel_switch_create(
    int unit, 
    bcm_mpls_tunnel_switch_t *info);
#endif

#if defined(INCLUDE_L3)
/* Delete an MPLS label entry. */
extern int bcm_mpls_tunnel_switch_delete(
    int unit, 
    bcm_mpls_tunnel_switch_t *info);
#endif

#if defined(INCLUDE_L3)
/* Delete all MPLS label entries. */
extern int bcm_mpls_tunnel_switch_delete_all(
    int unit);
#endif

#if defined(INCLUDE_L3)
/* Get an MPLS label entry. */
extern int bcm_mpls_tunnel_switch_get(
    int unit, 
    bcm_mpls_tunnel_switch_t *info);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

/* MPLS tunnel callback function prototype. */
#if defined(INCLUDE_L3)
typedef int (*bcm_mpls_tunnel_switch_traverse_cb)(
    int unit, 
    bcm_mpls_tunnel_switch_t *info, 
    void *user_data);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* 
 * Traverse all valid MPLS label entries and call the supplied callback
 * routine.
 */
extern int bcm_mpls_tunnel_switch_traverse(
    int unit, 
    bcm_mpls_tunnel_switch_traverse_cb cb, 
    void *user_data);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* MPLS entropy label config flags. */
#define BCM_MPLS_ENTROPY_LABEL_IDENTIFIER_TOS 0x00000001 /* Identifies entropy
                                                          label, if present at
                                                          the top of the label
                                                          stack, based on a
                                                          match of the upper
                                                          label bits */
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Add an MPLS Entropy Label Identifier. */
extern int bcm_mpls_entropy_identifier_add(
    int unit, 
    uint32 options, 
    bcm_mpls_entropy_identifier_t *info);
#endif

#if defined(INCLUDE_L3)
/* Get information about an MPLS Entropy Label Identifier. */
extern int bcm_mpls_entropy_identifier_get(
    int unit, 
    bcm_mpls_entropy_identifier_t *info);
#endif

#if defined(INCLUDE_L3)
/* Delete an MPLS Entropy Label Identifier. */
extern int bcm_mpls_entropy_identifier_delete(
    int unit, 
    bcm_mpls_entropy_identifier_t *info);
#endif

#if defined(INCLUDE_L3)
/* Delete all MPLS Entropy Label Identifiers. */
extern int bcm_mpls_entropy_identifier_delete_all(
    int unit);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

/* MPLS entropy label callback function prototype. */
#if defined(INCLUDE_L3)
typedef int (*bcm_mpls_entropy_identifier_traverse_cb)(
    int unit, 
    bcm_mpls_entropy_identifier_t *info, 
    void *user_data);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* 
 * Traverse all valid MPLS entropy label identifier entries and call the
 * supplied callback routine.
 */
extern int bcm_mpls_entropy_identifier_traverse(
    int unit, 
    bcm_mpls_entropy_identifier_traverse_cb cb, 
    void *user_data);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* MPLS EXP map modes. */
#define BCM_MPLS_EXP_MAP_WITH_ID    0x01       
#define BCM_MPLS_EXP_MAP_INGRESS    0x02       
#define BCM_MPLS_EXP_MAP_EGRESS     0x04       
#define BCM_MPLS_EXP_MAP_EGRESS_L2  0x08       
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Create an MPLS EXP map instance. */
extern int bcm_mpls_exp_map_create(
    int unit, 
    uint32 flags, 
    int *exp_map_id);
#endif

#if defined(INCLUDE_L3)
/* Destroy an MPLS EXP map instance. */
extern int bcm_mpls_exp_map_destroy(
    int unit, 
    int exp_map_id);
#endif

#if defined(INCLUDE_L3)
/* Set the EXP mapping parameters for the specified EXP map. */
extern int bcm_mpls_exp_map_set(
    int unit, 
    int exp_map_id, 
    bcm_mpls_exp_map_t *exp_map);
#endif

#if defined(INCLUDE_L3)
/* Get the EXP mapping parameters for the specified EXP map. */
extern int bcm_mpls_exp_map_get(
    int unit, 
    int exp_map_id, 
    bcm_mpls_exp_map_t *exp_map);
#endif

#if defined(INCLUDE_L3)
/* Enable/disable statistics collection for MPLS label or MPLS gport */
extern int bcm_mpls_label_stat_enable_set(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    int enable);
#endif

#if defined(INCLUDE_L3)
/* Get MPLS Stats. */
extern int bcm_mpls_label_stat_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint64 *val);
#endif

#if defined(INCLUDE_L3)
/* Force an immediate counter update and retrieve MPLS Stats. */
extern int bcm_mpls_label_stat_sync_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint64 *val);
#endif

#if defined(INCLUDE_L3)
/* Get MPLS Stats. */
extern int bcm_mpls_label_stat_get32(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 *val);
#endif

#if defined(INCLUDE_L3)
/* Force an immediate counter update and retrieve MPLS Stats. */
extern int bcm_mpls_label_stat_sync_get32(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 *val);
#endif

#if defined(INCLUDE_L3)
/* Clear MPLS Stats. */
extern int bcm_mpls_label_stat_clear(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat);
#endif

#if defined(INCLUDE_L3)
/* Set flex counter object value for the given MPLS label. */
extern int bcm_mpls_label_flexctr_object_set(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    uint32 value);
#endif

#if defined(INCLUDE_L3)
/* Get flex counter object value for the given MPLS label. */
extern int bcm_mpls_label_flexctr_object_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    uint32 *value);
#endif

#if defined(INCLUDE_L3)
/* Enable or disable collection of MPLS port statistics. */
extern int bcm_mpls_port_stat_enable_set(
    int unit, 
    bcm_gport_t mpls_port, 
    int enable);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* Types of statistics that are maintained per MPLS gport. */
typedef enum bcm_mpls_port_stat_e {
    bcmMplsPortStatUnicastPackets = 0, 
    bcmMplsPortStatUnicastBytes = 1, 
    bcmMplsPortStatNonUnicastPackets = 2, 
    bcmMplsPortStatNonUnicastBytes = 3, 
    bcmMplsPortStatDropPackets = 4, 
    bcmMplsPortStatDropBytes = 5, 
    bcmMplsPortStatFloodPackets = 6, 
    bcmMplsPortStatFloodBytes = 7, 
    bcmMplsPortStatFloodDropPackets = 8, 
    bcmMplsPortStatFloodDropBytes = 9, 
    bcmMplsPortStatGreenPackets = 10, 
    bcmMplsPortStatGreenBytes = 11, 
    bcmMplsPortStatYellowPackets = 12, 
    bcmMplsPortStatYellowBytes = 13, 
    bcmMplsPortStatRedPackets = 14, 
    bcmMplsPortStatRedBytes = 15 
} bcm_mpls_port_stat_t;
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Set the specified statistic to the indicated value. */
extern int bcm_mpls_port_stat_set(
    int unit, 
    bcm_gport_t mpls_port, 
    bcm_cos_t cos, 
    bcm_mpls_port_stat_t stat, 
    uint64 val);
#endif

#if defined(INCLUDE_L3)
/* bcm_mpls_port_stat_set32 */
extern int bcm_mpls_port_stat_set32(
    int unit, 
    bcm_gport_t mpls_port, 
    bcm_cos_t cos, 
    bcm_mpls_port_stat_t stat, 
    uint32 val);
#endif

#if defined(INCLUDE_L3)
/* Get the specified statistics per MPLS/MEF port. */
extern int bcm_mpls_port_stat_get(
    int unit, 
    bcm_gport_t mpls_port, 
    bcm_cos_t cos, 
    bcm_mpls_port_stat_t stat, 
    uint64 *val);
#endif

#if defined(INCLUDE_L3)
/* Get the specified statistics per MPLS/MEF port. */
extern int bcm_mpls_port_stat_get32(
    int unit, 
    bcm_gport_t mpls_port, 
    bcm_cos_t cos, 
    bcm_mpls_port_stat_t stat, 
    uint32 *val);
#endif

#if defined(INCLUDE_L3)
/* Get stat counter ID associated with given MPLS gport and VPN. */
extern int bcm_mpls_port_stat_id_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 *stat_counter_id);
#endif

#if defined(INCLUDE_L3)
/* Get stat counter ID associated with given MPLS label and gport. */
extern int bcm_mpls_label_stat_id_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 *stat_counter_id);
#endif

#if defined(INCLUDE_L3)
/* Attach counters entries to the given MPLS gport and vpn */
extern int bcm_mpls_port_stat_attach(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    uint32 stat_counter_id);
#endif

#if defined(INCLUDE_L3)
/* Detach counters entries to the given MPLS port and vpn */
extern int bcm_mpls_port_stat_detach(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port);
#endif

#if defined(INCLUDE_L3)
/* Get counter statistic values for specific vpn and gport */
extern int bcm_mpls_port_stat_counter_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#if defined(INCLUDE_L3)
/* 
 * Force an immediate counter update and retrieve get counter statistic
 * values for specific vpn and gport
 */
extern int bcm_mpls_port_stat_counter_sync_get(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#if defined(INCLUDE_L3)
/* Set counter statistic values for specific vpn and gport */
extern int bcm_mpls_port_stat_counter_set(
    int unit, 
    bcm_vpn_t vpn, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#if defined(INCLUDE_L3)
/* Attach counters entries to the given MPLS label and gport */
extern int bcm_mpls_label_stat_attach(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    uint32 stat_counter_id);
#endif

#if defined(INCLUDE_L3)
/* Detach counters entries to the given MPLS label and gport */
extern int bcm_mpls_label_stat_detach(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port);
#endif

#if defined(INCLUDE_L3)
/* 
 * Force an immediate counter update and retrieve counter statistic
 * values for
 * specific MPLS label and gport
 */
extern int bcm_mpls_label_stat_counter_sync_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#if defined(INCLUDE_L3)
/* Get counter statistic values for specific MPLS label and gport */
extern int bcm_mpls_label_stat_counter_get(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#if defined(INCLUDE_L3)
/* Set counter statistic values for specific MPLS label and gport */
extern int bcm_mpls_label_stat_counter_set(
    int unit, 
    bcm_mpls_label_t label, 
    bcm_gport_t port, 
    bcm_mpls_stat_t stat, 
    uint32 num_entries, 
    uint32 *counter_indexes, 
    bcm_stat_value_t *counter_values);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
#define BCM_MPLS_INDEXED_LABEL_SET(_label, _label_value, _index)  _SHR_MPLS_INDEXED_LABEL_SET(_label, _label_value,_index) 
#define BCM_MPLS_INDEXED_LABEL_VALUE_GET(_label)  _SHR_MPLS_INDEXED_LABEL_VALUE_GET(_label) 
#define BCM_MPLS_INDEXED_LABEL_INDEX_GET(_label)  _SHR_MPLS_INDEXED_LABEL_INDEX_GET(_label) 
#endif

#if defined(INCLUDE_L3)
/* MPLS range action */
typedef struct bcm_mpls_range_action_s {
    uint32 flags;                       /* BCM_MPLS_RANGE_ACTION_xxx */
    bcm_mpls_label_t compressed_label;  /* lowest label in the range */
} bcm_mpls_range_action_t;
#endif

/* MPLS range action flags. */
#define BCM_MPLS_RANGE_ACTION_COMPRESSED    0x00000001 /* Given label range will
                                                          be represented by the
                                                          lowest label */
#define BCM_MPLS_RANGE_ACTION_EVPN_IML      0x00000002 /* Specify a range for
                                                          EVPN IML labels */
#define BCM_MPLS_RANGE_ACTION_VID           0x00000004 /* Mpls range profile:
                                                          ptagged, outer tag
                                                          valid */
#define BCM_MPLS_RANGE_ACTION_INNER_VID     0x00000008 /* Mpls range profile:
                                                          ptagged, inner tag
                                                          valid */
#define BCM_MPLS_RANGE_ACTION_CONTROL_WORD  0x00000010 /*  Indicate that all the
                                                          labels in the range
                                                          have CW */

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Set range of labels per in lif. */
extern int bcm_mpls_range_action_add(
    int unit, 
    bcm_mpls_label_t label_low, 
    bcm_mpls_label_t label_high, 
    bcm_mpls_range_action_t *action);
#endif

#if defined(INCLUDE_L3)
/* Remove range of labels per in lif. */
extern int bcm_mpls_range_action_remove(
    int unit, 
    bcm_mpls_label_t label_low, 
    bcm_mpls_label_t label_high);
#endif

#if defined(INCLUDE_L3)
/* Get range of labels per in lif. */
extern int bcm_mpls_range_action_get(
    int unit, 
    bcm_mpls_label_t label_low, 
    bcm_mpls_label_t label_high, 
    bcm_mpls_range_action_t *action);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* Initialize the MPLS range action structure. */
extern void bcm_mpls_range_action_t_init(
    bcm_mpls_range_action_t *label);
#endif

#if defined(INCLUDE_L3)
/* Mpls Special push type element structure. */
typedef struct bcm_mpls_special_label_push_element_s {
    bcm_gport_t gport;      /* GPORT identifier. */
    bcm_if_t egr_obj_id;    /* Egress Objec Index. */
} bcm_mpls_special_label_push_element_t;
#endif

#if defined(INCLUDE_L3)
/* Initialize the MPLS special label push element structure. */
extern void bcm_mpls_special_label_push_element_t_init(
    bcm_mpls_special_label_push_element_t *element);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Set push action from the element provided by user. */
extern int bcm_mpls_special_label_push_action_set(
    int unit, 
    bcm_mpls_special_label_push_element_t *element, 
    int push_action);
#endif

#if defined(INCLUDE_L3)
/* Get push action from the element provided by user. */
extern int bcm_mpls_special_label_push_action_get(
    int unit, 
    bcm_mpls_special_label_push_element_t *element, 
    int *push_action);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* structure of MPLS special label. */
typedef struct bcm_mpls_special_label_s {
    uint32 flags;                   /* BCM_MPLS_SPECIAL_LABEL_XXX. */
    bcm_mpls_label_t label_value;   /* Label value. */
    bcm_mpls_label_t label_mask;    /* Label mask. */
    uint32 exp;                     /* exp value. */
    uint32 exp_mask;                /* exp value. */
    uint32 ttl;                     /* exp value. */
    uint32 ttl_mask;                /* exp value. */
} bcm_mpls_special_label_t;
#endif

#if defined(INCLUDE_L3)
/* Initialize MPLS Special label structure. */
extern void bcm_mpls_special_label_t_init(
    bcm_mpls_special_label_t *label_info);
#endif

/* Special Label flags Values. */
#define BCM_MPLS_SPECIAL_LABEL_USE_TABLE_EXP 0x00000001 /* Use exp value from
                                                          this table */
#define BCM_MPLS_SPECIAL_LABEL_USE_TABLE_TTL 0x00000002 /* Use ttl value from
                                                          this table */
#define BCM_MPLS_SPECIAL_LABEL_CURR_LABEL_EXCLUDE_HASH 0x00000004 /* Exclude this label
                                                          from hash computation */
#define BCM_MPLS_SPECIAL_LABEL_NEXT_LABEL_EXCLUDE_HASH 0x00000008 /* Exclude next label
                                                          from hash computation */
#define BCM_MPLS_SPECIAL_LABEL_CURR_LABEL_EXCLUDE_LKUP 0x00000010 /* Exclude current label
                                                          from lookup */
#define BCM_MPLS_SPECIAL_LABEL_NEXT_LABEL_EXCLUDE_LKUP 0x00000020 /* Exclude next label
                                                          from lookup */
#define BCM_MPLS_SPECIAL_LABEL_INHERITANCE_ENABLE 0x00000040 /* Enable inherit logic
                                                          on this label */
#define BCM_MPLS_SPECIAL_LABEL_BOS_PRESENT  0x00000080 /* Incoming label is
                                                          matched if BOS */
#define BCM_MPLS_SPECIAL_LABEL_BOS_MASKED   0x00000100 /* Mask BOS matching for
                                                          incoming label */
#define BCM_MPLS_SPECIAL_LABEL_CURR_LABEL_RESERVE 0x00000200 /* Specify this label as
                                                          a reserved label */
#define BCM_MPLS_SPECIAL_LABEL_NEXT_LABEL_ACTION_CANCEL 0x00000400 /* Cancel the action of
                                                          the next label */

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Add Egress special labels. */
extern int bcm_mpls_special_label_egress_add(
    int unit, 
    bcm_mpls_special_label_type_t label_type, 
    bcm_mpls_special_label_t label_info);
#endif

#if defined(INCLUDE_L3)
/* Get Egress spceial labels. */
extern int bcm_mpls_special_label_egress_get(
    int unit, 
    bcm_mpls_special_label_type_t label_type, 
    bcm_mpls_special_label_t *label_info);
#endif

#if defined(INCLUDE_L3)
/* Delete Egress Special Labels. */
extern int bcm_mpls_special_label_egress_delete(
    int unit, 
    bcm_mpls_special_label_type_t label_type, 
    bcm_mpls_special_label_t label_info);
#endif

#if defined(INCLUDE_L3)
/* Delete all Egress Special Labels. */
extern int bcm_mpls_special_label_egress_delete_all(
    int unit);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

/* MPLS Special Label callback function prototype. */
#if defined(INCLUDE_L3)
typedef int (*bcm_mpls_special_label_egress_traverse_cb)(
    int unit, 
    bcm_mpls_special_label_type_t *label_type, 
    bcm_mpls_special_label_t *label_info, 
    void *user_data);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* 
 * Traverse all egress special labels and callback user provided
 * callback.
 */
extern int bcm_mpls_special_label_egress_traverse(
    int unit, 
    bcm_mpls_special_label_egress_traverse_cb cb, 
    void *user_data);
#endif

#if defined(INCLUDE_L3)
/* Add Egress special labels. */
extern int bcm_mpls_special_label_identifier_add(
    int unit, 
    bcm_mpls_special_label_type_t label_type, 
    bcm_mpls_special_label_t label_info);
#endif

#if defined(INCLUDE_L3)
/* Get Egress spceial labels. */
extern int bcm_mpls_special_label_identifier_get(
    int unit, 
    bcm_mpls_special_label_type_t label_type, 
    bcm_mpls_special_label_t *label_info);
#endif

#if defined(INCLUDE_L3)
/* Delete Egress Special Labels. */
extern int bcm_mpls_special_label_identifier_delete(
    int unit, 
    bcm_mpls_special_label_type_t label_type, 
    bcm_mpls_special_label_t label_info);
#endif

#if defined(INCLUDE_L3)
/* Delete all Egress Special Labels. */
extern int bcm_mpls_special_label_identifier_delete_all(
    int unit);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

/* MPLS Special Label identifier callback function prototype. */
#if defined(INCLUDE_L3)
typedef int (*bcm_mpls_special_label_identifier_traverse_cb)(
    int unit, 
    bcm_mpls_special_label_type_t *label_type, 
    bcm_mpls_special_label_t *label_info, 
    void *user_data);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* 
 * Traverse all ingress special labels and callback user provided
 * callback.
 */
extern int bcm_mpls_special_label_identifier_traverse(
    int unit, 
    bcm_mpls_special_label_identifier_traverse_cb cb, 
    void *user_data);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

/* MPLS ESI flags. */
#define BCM_MPLS_ESI_INTF_NAMESPACE 0x00000001 /* EVPN ESI Label is retrieved in
                                                  interface namespace. */

#if defined(INCLUDE_L3)
/* structure of MPLS esi object. */
typedef struct bcm_mpls_esi_info_s {
    uint32 flags;               /* BCM_MPLS_ESI_xxx. */
    bcm_gport_t src_port;       /* GPORT of incoming eth segment's port. */
    uint32 out_class_id;        /* Multi-homing peer class. */
    bcm_mpls_label_t esi_label; /* Will be set on the ESI label. */
    bcm_if_t src_encap_id;      /* Source Interface. */
} bcm_mpls_esi_info_t;
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Add Egress special labels. */
extern int bcm_mpls_esi_encap_add(
    int unit, 
    bcm_mpls_esi_info_t *esi_info);
#endif

#if defined(INCLUDE_L3)
/* Get esi encap id. */
extern int bcm_mpls_esi_encap_get(
    int unit, 
    bcm_mpls_esi_info_t *esi_info);
#endif

#if defined(INCLUDE_L3)
/* Delete esi encap id values. */
extern int bcm_mpls_esi_encap_delete(
    int unit, 
    bcm_mpls_esi_info_t *esi_info);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

/* MPLS esi encap callback function prototype. */
#if defined(INCLUDE_L3)
typedef int (*bcm_mpls_esi_encap_traverse_cb)(
    int unit, 
    bcm_mpls_esi_info_t *info, 
    void *user_data);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Traverse routine for esi encap id. */
extern int bcm_mpls_esi_encap_traverse(
    int unit, 
    bcm_mpls_esi_encap_traverse_cb cb, 
    void *user_data);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* Initialize an Esi info structure. */
extern void bcm_mpls_esi_info_t_init(
    bcm_mpls_esi_info_t *esi_info);
#endif

/* MPLS port callback function prototype. */
#if defined(INCLUDE_L3)
typedef int (*bcm_mpls_port_traverse_cb)(
    int unit, 
    bcm_mpls_port_t *mpls_port, 
    void *user_data);
#endif

#if defined(INCLUDE_L3)
/* structure of MPLS port object. */
typedef struct bcm_mpls_port_traverse_info_s {
    uint32 flags;           /* BCM_MPLS_PORT_xxx. */
    uint32 flags2;          /* BCM_MPLS_PORT2_xxx. */
    uint32 traverse_flags;  /* BCM_MPLS_TRAVERSE_xxx. */
    int vpn;                /* Vpn to traverse over. */
} bcm_mpls_port_traverse_info_t;
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Traverse routine for port info. */
extern int bcm_mpls_port_traverse(
    int unit, 
    bcm_mpls_port_traverse_info_t additional_info, 
    bcm_mpls_port_traverse_cb trav_fn, 
    void *user_data);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#if defined(INCLUDE_L3)
/* Flags for bcm_mpls_control_pkt_add. */
#define BCM_MPLS_CONTROL_PKT_OPTIONS_REPLACE 0x00000001 /* Replace the control
                                                          action. */
#endif

#if defined(INCLUDE_L3)
/* MPLS flow type. */
typedef enum bcm_mpls_flow_e {
    bcmMplsFlowNone = 0,    /* Not MPLS flow type. */
    bcmMplsFlowL2Term = 1,  /* L2 MPLS termination flow. */
    bcmMplsFlowL3Term = 2,  /* L3 MPLS termination flow. */
    bcmMplsFlowTransit = 3, /* Transit MPLS flow. */
    bcmMplsFlowPhp = 4,     /* Penultimate hop popping MPLS flow. */
    bcmMplsFlowCount = 5    /* Must be the last one. */
} bcm_mpls_flow_t;
#endif

#if defined(INCLUDE_L3)
/* MPLS control word check mode. */
typedef enum bcm_mpls_control_word_check_e {
    bcmMplsControlWordCheckDisable = 0, /* Disable MPLS control word check. */
    bcmMplsControlWordCheckLoose = 1,   /* Loose mode for MPLS control word
                                           check. */
    bcmMplsControlWordCheckStrict = 2,  /* Strict mode for MPLS control word
                                           check. */
    bcmMplsControlWordCheckCount = 3    /* Must be the last one. */
} bcm_mpls_control_word_check_t;
#endif

#if defined(INCLUDE_L3)
/* Structure of MPLS control packet match. */
typedef struct bcm_mpls_control_pkt_match_s {
    uint32 priority;                    /* Entry priority. */
    uint8 bos_after_lookup_labels;      /* BOS next to lookup labels. */
    uint8 bos_after_lookup_labels_mask; /* Mask of bos_after_lookup_labels. */
    uint8 gal_after_lookup_labels;      /* GAL next to lookup labels. */
    uint8 gal_after_lookup_labels_mask; /* Mask of gal_after_lookup_labels. */
    uint8 eli_after_lookup_labels;      /* ELI next to lookup labels. */
    uint8 eli_after_lookup_labels_mask; /* Mask of eli_after_lookup_labels. */
    uint8 el_bos_after_lookup_labels;   /* Entropy label BOS next to lookup
                                           labels. */
    uint8 el_bos_after_lookup_labels_mask; /* Mask of el_bos_after_lookup_labels. */
    uint8 gal_valid;                    /* Valid GAL. */
    uint8 gal_valid_mask;               /* Mask of gal_valid. */
    uint8 el_valid;                     /* Valid entropy label. */
    uint8 el_valid_mask;                /* Mask of el_valid. */
    uint8 stat_enable;                  /* Packet stats enable status. Triggered
                                           by BCM_MPLS_PORT_SEQUENCED,
                                           BCM_MPLS_PORT_CONTROL_WORD or
                                           BCM_MPLS_SWITCH_COUNTED. */
    uint8 stat_enable_mask;             /* Mask of stat_enable. */
    uint8 control_word_ach_indicator;   /* Control word or ACH indicator. */
    uint8 control_word_ach_indicator_mask; /* Mask of control_word_ach_indicator. */
    bcm_mpls_flow_t flow;               /* MPLS flow type. */
    uint8 flow_mask;                    /* Mask of flow. */
    bcm_mpls_control_word_check_t control_word_check; /* Control word check mode. */
    uint8 control_word_check_mask;      /* Mask of control_word_check. */
    bcm_mpls_port_control_channel_type_t vccv_type; /* Control channel type. */
    uint8 vccv_type_mask;               /* Mask of vccv_type. */
} bcm_mpls_control_pkt_match_t;
#endif

#if defined(INCLUDE_L3)
/* Structure of MPLS control packet action. */
typedef struct bcm_mpls_control_pkt_action_s {
    uint8 drop;                 /* Enable to drop the packet. */
    uint8 control_packet;       /* Indicate control packet. */
    uint8 control_packet_type;  /* Indicate control packet type. Applicable only
                                   when control_packet is set. */
    uint8 copy_to_cpu;          /* Enable to copy the packet to CPU. */
    uint8 seq_num_check;        /* Enable to check the packet sequence number. */
} bcm_mpls_control_pkt_action_t;
#endif

/* MPLS control packet callback function prototype. */
#if defined(INCLUDE_L3)
typedef int (*bcm_mpls_control_pkt_traverse_cb)(
    int unit, 
    bcm_mpls_control_pkt_match_t *match, 
    bcm_mpls_control_pkt_action_t *action, 
    void *user_data);
#endif

#if defined(INCLUDE_L3)
/* Initialize the MPLS control packet match structure. */
extern void bcm_mpls_control_pkt_match_t_init(
    bcm_mpls_control_pkt_match_t *match);
#endif

#if defined(INCLUDE_L3)
/* Initialize the MPLS control packet action structure. */
extern void bcm_mpls_control_pkt_action_t_init(
    bcm_mpls_control_pkt_action_t *action);
#endif

#ifndef BCM_HIDE_DISPATCHABLE

#if defined(INCLUDE_L3)
/* Add an MPLS control packet entry. */
extern int bcm_mpls_control_pkt_add(
    int unit, 
    uint32 options, 
    bcm_mpls_control_pkt_match_t *match, 
    bcm_mpls_control_pkt_action_t *action);
#endif

#if defined(INCLUDE_L3)
/* Get an MPLS control packet entry. */
extern int bcm_mpls_control_pkt_get(
    int unit, 
    bcm_mpls_control_pkt_match_t *match, 
    bcm_mpls_control_pkt_action_t *action);
#endif

#if defined(INCLUDE_L3)
/* Delete an MPLS control packet entry. */
extern int bcm_mpls_control_pkt_delete(
    int unit, 
    bcm_mpls_control_pkt_match_t *match);
#endif

#if defined(INCLUDE_L3)
/* Delete all MPLS control packet entries. */
extern int bcm_mpls_control_pkt_delete_all(
    int unit);
#endif

#if defined(INCLUDE_L3)
/* 
 * Traverse all MPLS control packet entries and call user provided
 * callback.
 */
extern int bcm_mpls_control_pkt_traverse(
    int unit, 
    bcm_mpls_control_pkt_traverse_cb cb, 
    void *user_data);
#endif

#endif /* BCM_HIDE_DISPATCHABLE */

#endif /* __BCM_MPLS_H__ */

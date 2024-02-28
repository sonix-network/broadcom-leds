/*
 *         
 * 
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *     
 * DO NOT EDIT THIS FILE!
 *
 */

#ifndef _PM4X10_H__H_
#define _PM4X10_H__H_

#include <phymod/phymod.h>
#include <phymod/phymod_diagnostics.h>
#include <phymod/phymod_reg.h>
#include <soc/cprimod/cprimod.h>
#include <soc/portmod/portmod_defs.h>
#include <sal/core/sync.h>
/*Get whether the inerface type is supported by PM */
int pm4x10_pm_interface_type_is_supported(int unit, soc_port_if_t interface, int* is_supported);

/*Add new pm.*/
int pm4x10_pm_init(int unit, const portmod_pm_create_info_internal_t* pm_add_info, int wb_buffer_index, pm_info_t pm_info);

/*Release PM resources*/
int pm4x10_pm_destroy(int unit, pm_info_t pm_info);

/*Add new port*/
int pm4x10_port_attach(int unit, int port, pm_info_t pm_info, const portmod_port_add_info_t* add_info);

/*Replace the default bus and FW load method*/
int pm4x10_default_bus_update(int unit, pm_info_t pm_info, const portmod_bus_update_t* update);

/*Set PM in bypass mode. should be called in the aggregator code.*/
int pm4x10_pm_bypass_set(int unit, pm_info_t pm_info, int enable);

/*get port cores' phymod access*/
int pm4x10_pm_core_info_get(int unit, pm_info_t pm_info, int phyn, portmod_pm_core_info_t* core_info);

/*Get PM phys.*/
int pm4x10_pm_phys_get(int unit, pm_info_t pm_info, portmod_pbmp_t* phys);

/*Port remove in PM level*/
int pm4x10_port_detach(int unit, int port, pm_info_t pm_info);

/*Port replace in PM level*/
int pm4x10_port_replace(int unit, int port, pm_info_t pm_info, int new_port);

/*Port enable*/
int pm4x10_port_enable_set(int unit, int port, pm_info_t pm_info, int flags, int enable);
int pm4x10_port_enable_get(int unit, int port, pm_info_t pm_info, int flags, int* enable);

/* set/get the interface, speed and encapsulation for the specified port.
            For the First port within core this function initialize the PM, MAC and PHY before configure the port.*/
int pm4x10_port_interface_config_set(int unit, int port, pm_info_t pm_info, const portmod_port_interface_config_t* config, int phy_init_flags);
int pm4x10_port_interface_config_get(int unit, int port, pm_info_t pm_info, portmod_port_interface_config_t* config, int phy_init_flags);

/* get the default line-side (outmost) interface type of a port based on its speed, encap, number of lanes, etc, when there is or there is not an ext PHY*/
int pm4x10_port_default_interface_get(int unit, int port, pm_info_t pm_info, const portmod_port_interface_config_t* config, soc_port_if_t* interface);

/* check whether the interface type is valid based on the port speed, #lanes, etc*/
int pm4x10_port_interface_check(int unit, int port, pm_info_t pm_info, const portmod_port_interface_config_t* config, int is_ext_phy, soc_port_if_t interface, int* is_valid);

/*Port cl72 set\get*/
int pm4x10_port_cl72_set(int unit, int port, pm_info_t pm_info, uint32 enable);
int pm4x10_port_cl72_get(int unit, int port, pm_info_t pm_info, uint32* enable);

/*Get port cl72 status*/
int pm4x10_port_cl72_status_get(int unit, int port, pm_info_t pm_info, phymod_cl72_status_t* status);

/*Port loopback set\get*/
int pm4x10_port_loopback_set(int unit, int port, pm_info_t pm_info, portmod_loopback_mode_t loopback_type, int enable);
int pm4x10_port_loopback_get(int unit, int port, pm_info_t pm_info, portmod_loopback_mode_t loopback_type, int* enable);

/*Port RX MAC ENABLE set\get*/
int pm4x10_port_rx_mac_enable_set(int unit, int port, pm_info_t pm_info, int enable);
int pm4x10_port_rx_mac_enable_get(int unit, int port, pm_info_t pm_info, int* enable);

/*Port TX MAC ENABLE set\get*/
int pm4x10_port_tx_mac_enable_set(int unit, int port, pm_info_t pm_info, int enable);
int pm4x10_port_tx_mac_enable_get(int unit, int port, pm_info_t pm_info, int* enable);

/*get port auto negotiation local ability*/
int pm4x10_port_ability_local_get(int unit, int port, pm_info_t pm_info, uint32 phy_flags, portmod_port_ability_t* ability);

/*Set\Get autoneg*/
int pm4x10_port_autoneg_set(int unit, int port, pm_info_t pm_info, uint32 phy_flags, const phymod_autoneg_control_t* an);
int pm4x10_port_autoneg_get(int unit, int port, pm_info_t pm_info, uint32 phy_flags, phymod_autoneg_control_t* an);

/*Get autoneg status*/
int pm4x10_port_autoneg_status_get(int unit, int port, pm_info_t pm_info, phymod_autoneg_status_t* an_status);

/*get link status*/
int pm4x10_port_link_get(int unit, int port, pm_info_t pm_info, int flags, int* link);

/*get latch down link status (whether link was ever down since last clear)*/
int pm4x10_port_link_latch_down_get(int unit, int port, pm_info_t pm_info, uint32 flags, int* link);

/* link up event */
int pm4x10_port_phy_link_up_event(int unit, int port, pm_info_t pm_info);

/* link down event */
int pm4x10_port_phy_link_down_event(int unit, int port, pm_info_t pm_info);

/*PRBS configuration set/get*/
int pm4x10_port_prbs_config_set(int unit, int port, pm_info_t pm_info, portmod_prbs_mode_t mode, int flags, const phymod_prbs_t* config);
int pm4x10_port_prbs_config_get(int unit, int port, pm_info_t pm_info, portmod_prbs_mode_t mode, int flags, phymod_prbs_t* config);

/*PRBS enable set/get*/
int pm4x10_port_prbs_enable_set(int unit, int port, pm_info_t pm_info, portmod_prbs_mode_t mode, int flags, int enable);
int pm4x10_port_prbs_enable_get(int unit, int port, pm_info_t pm_info, portmod_prbs_mode_t mode, int flags, int* enable);

/*PRBS status get*/
int pm4x10_port_prbs_status_get(int unit, int port, pm_info_t pm_info, portmod_prbs_mode_t mode, int flags, phymod_prbs_status_t* status);

/*Number of lanes get*/
int pm4x10_port_nof_lanes_get(int unit, int port, pm_info_t pm_info, int* nof_lanes);

/*Set port PHYs' firmware mode*/
int pm4x10_port_firmware_mode_set(int unit, int port, pm_info_t pm_info, phymod_firmware_mode_t fw_mode);
int pm4x10_port_firmware_mode_get(int unit, int port, pm_info_t pm_info, phymod_firmware_mode_t* fw_mode);

/*Filter packets smaller than the specified threshold*/
int pm4x10_port_runt_threshold_set(int unit, int port, pm_info_t pm_info, int value);
int pm4x10_port_runt_threshold_get(int unit, int port, pm_info_t pm_info, int* value);

/*Filter packets bigger than the specified value*/
int pm4x10_port_max_packet_size_set(int unit, int port, pm_info_t pm_info, int value);
int pm4x10_port_max_packet_size_get(int unit, int port, pm_info_t pm_info, int* value);

/*TX pad packets to the specified size. values smaller than 17 means pad is disabled.*/
int pm4x10_port_pad_size_set(int unit, int port, pm_info_t pm_info, int value);
int pm4x10_port_pad_size_get(int unit, int port, pm_info_t pm_info, int* value);

/*set/get the MAC source address that will be sent in case of Pause/LLFC*/
int pm4x10_port_tx_mac_sa_set(int unit, int port, pm_info_t pm_info, sal_mac_addr_t mac_sa);
int pm4x10_port_tx_mac_sa_get(int unit, int port, pm_info_t pm_info, sal_mac_addr_t mac_sa);

/*set/get SA recognized for MAC control packets in addition to the standard 0x0180C2000001*/
int pm4x10_port_rx_mac_sa_set(int unit, int port, pm_info_t pm_info, sal_mac_addr_t mac_sa);
int pm4x10_port_rx_mac_sa_get(int unit, int port, pm_info_t pm_info, sal_mac_addr_t mac_sa);

/*set/get Average inter-packet gap*/
int pm4x10_port_tx_average_ipg_set(int unit, int port, pm_info_t pm_info, int value);
int pm4x10_port_tx_average_ipg_get(int unit, int port, pm_info_t pm_info, int* value);

/*local fault set/get*/
int pm4x10_port_local_fault_control_set(int unit, int port, pm_info_t pm_info, const portmod_local_fault_control_t* control);
int pm4x10_port_local_fault_control_get(int unit, int port, pm_info_t pm_info, portmod_local_fault_control_t* control);

/*remote fault set/get*/
int pm4x10_port_remote_fault_control_set(int unit, int port, pm_info_t pm_info, const portmod_remote_fault_control_t* control);
int pm4x10_port_remote_fault_control_get(int unit, int port, pm_info_t pm_info, portmod_remote_fault_control_t* control);

/*local fault status get*/
int pm4x10_port_local_fault_status_get(int unit, int port, pm_info_t pm_info, int* value);

/*remote fault status get*/
int pm4x10_port_remote_fault_status_get(int unit, int port, pm_info_t pm_info, int* value);

/*local fault status clear*/
int pm4x10_port_local_fault_status_clear(int unit, int port, pm_info_t pm_info);

/*remote fault status clear*/
int pm4x10_port_remote_fault_status_clear(int unit, int port, pm_info_t pm_info);

/*set/get Pause FC configuration*/
int pm4x10_port_pause_control_set(int unit, int port, pm_info_t pm_info, const portmod_pause_control_t* control);
int pm4x10_port_pause_control_get(int unit, int port, pm_info_t pm_info, portmod_pause_control_t* control);

/*set/get PFC FC configuration*/
int pm4x10_port_pfc_control_set(int unit, int port, pm_info_t pm_info, const portmod_pfc_control_t* control);
int pm4x10_port_pfc_control_get(int unit, int port, pm_info_t pm_info, portmod_pfc_control_t* control);

/*set/get LLFC FC configuration*/
int pm4x10_port_llfc_control_set(int unit, int port, pm_info_t pm_info, const portmod_llfc_control_t* control);
int pm4x10_port_llfc_control_get(int unit, int port, pm_info_t pm_info, portmod_llfc_control_t* control);

/*Routine for MAC\PHY sync.*/
int pm4x10_port_update(int unit, int port, pm_info_t pm_info, const portmod_port_update_control_t* update_control);

/*get port cores' phymod access*/
int pm4x10_port_core_access_get(int unit, int port, pm_info_t pm_info, int phyn, int max_cores, phymod_core_access_t* core_access_arr, int* nof_cores, int* is_most_ext);

/*Get lane phymod access structure. can be used for per lane operations*/
int pm4x10_port_phy_lane_access_get(int unit, int port, pm_info_t pm_info, const portmod_access_get_params_t* params, int max_phys, phymod_phy_access_t* access, int* nof_phys, int* is_most_ext);

/*Port duplex set\get*/
int pm4x10_port_duplex_set(int unit, int port, pm_info_t pm_info, int enable);
int pm4x10_port_duplex_get(int unit, int port, pm_info_t pm_info, int* enable);

/*Port PHY Control register read*/
int pm4x10_port_phy_reg_read(int unit, int port, pm_info_t pm_info, int lane, int flags, int reg_addr, uint32* value);

/*Port PHY Control register write*/
int pm4x10_port_phy_reg_write(int unit, int port, pm_info_t pm_info, int lane, int flags, int reg_addr, uint32 value);

/*Port Reset set\get*/
int pm4x10_port_reset_set(int unit, int port, pm_info_t pm_info, int mode, int opcode, int value);
int pm4x10_port_reset_get(int unit, int port, pm_info_t pm_info, int mode, int opcode, int* value);

/*Port remote Adv get*/
int pm4x10_port_adv_remote_get(int unit, int port, pm_info_t pm_info, int* value);

/*Drv Name Get*/
int pm4x10_port_drv_name_get(int unit, int port, pm_info_t pm_info, char* name, int len);

/*set/get port fec enable according to local/remote FEC ability*/
int pm4x10_port_fec_enable_set(int unit, int port, pm_info_t pm_info, uint32 phy_flags, uint32_t enable);
int pm4x10_port_fec_enable_get(int unit, int port, pm_info_t pm_info, uint32 phy_flags, uint32_t* enable);

/*get port auto negotiation local ability*/
int pm4x10_port_ability_advert_set(int unit, int port, pm_info_t pm_info, uint32 phy_flags, portmod_port_ability_t* ability);
int pm4x10_port_ability_advert_get(int unit, int port, pm_info_t pm_info, uint32 phy_flags, portmod_port_ability_t* ability);

/*Port ability remote Adv get*/
int pm4x10_port_ability_remote_get(int unit, int port, pm_info_t pm_info, uint32 phy_flags, portmod_port_ability_t* ability);

/*Port Mac Control Spacing Stretch*/
int pm4x10_port_frame_spacing_stretch_set(int unit, int port, pm_info_t pm_info, int spacing);
int pm4x10_port_frame_spacing_stretch_get(int unit, int port, pm_info_t pm_info, const int* spacing);

/*get port timestamps in fifo*/
int pm4x10_port_diag_fifo_status_get(int unit, int port, pm_info_t pm_info, const portmod_fifo_status_t* diag_info);

/*set/get pass control frames.*/
int pm4x10_port_rx_control_set(int unit, int port, pm_info_t pm_info, const portmod_rx_control_t* rx_ctrl);
int pm4x10_port_rx_control_get(int unit, int port, pm_info_t pm_info, portmod_rx_control_t* rx_ctrl);

/*set PFC config registers.*/
int pm4x10_port_pfc_config_set(int unit, int port, pm_info_t pm_info, const portmod_pfc_config_t* pfc_cfg);
int pm4x10_port_pfc_config_get(int unit, int port, pm_info_t pm_info, portmod_pfc_config_t* pfc_cfg);

/*set EEE Config.*/
int pm4x10_port_eee_set(int unit, int port, pm_info_t pm_info, const portmod_eee_t* eee);
int pm4x10_port_eee_get(int unit, int port, pm_info_t pm_info, portmod_eee_t* eee);

/*set EEE Config.*/
int pm4x10_port_eee_clock_set(int unit, int port, pm_info_t pm_info, const portmod_eee_clock_t* eee_clk);
int pm4x10_port_eee_clock_get(int unit, int port, pm_info_t pm_info, portmod_eee_clock_t* eee_clk);

/*set Vlan Inner/Outer tag.*/
int pm4x10_port_vlan_tag_set(int unit, int port, pm_info_t pm_info, const portmod_vlan_tag_t* vlan_tag);
int pm4x10_port_vlan_tag_get(int unit, int port, pm_info_t pm_info, portmod_vlan_tag_t* vlan_tag);

/*set modid field.*/
int pm4x10_port_modid_set(int unit, int port, pm_info_t pm_info, int value);

/*set modid field.*/
int pm4x10_port_clear_rx_lss_status_set(int unit, int port, pm_info_t pm_info, int lcl_fault, int rmt_fault);
int pm4x10_port_clear_rx_lss_status_get(int unit, int port, pm_info_t pm_info, int* lcl_fault, int* rmt_fault);

/*Attaches an external phy lane to a specific port macro*/
int pm4x10_xphy_lane_attach_to_pm(int unit, pm_info_t pm_info, int iphy, int phyn, const portmod_xphy_lane_connection_t* lane_connection);

/*Attaches an external phy lane to a specific port macro*/
int pm4x10_xphy_lane_detach_from_pm(int unit, pm_info_t pm_info, int iphy, int phyn, portmod_xphy_lane_connection_t* lane_connection);

/*Toggle Lag Failover Status.*/
int pm4x10_port_lag_failover_status_toggle(int unit, int port, pm_info_t pm_info);

/*Toggle Lag Failover loopback set / get.*/
int pm4x10_port_lag_failover_loopback_set(int unit, int port, pm_info_t pm_info, int value);
int pm4x10_port_lag_failover_loopback_get(int unit, int port, pm_info_t pm_info, int* value);

/*set port mode.*/
int pm4x10_port_mode_set(int unit, int port, pm_info_t pm_info, const portmod_port_mode_info_t* mode);
int pm4x10_port_mode_get(int unit, int port, pm_info_t pm_info, portmod_port_mode_info_t* mode);

/*set port encap.*/
int pm4x10_port_encap_set(int unit, int port, pm_info_t pm_info, int flags, portmod_encap_t encap);
int pm4x10_port_encap_get(int unit, int port, pm_info_t pm_info, int* flags, portmod_encap_t* encap);

/*set port register higig field.*/
int pm4x10_port_higig_mode_set(int unit, int port, pm_info_t pm_info, int mode);
int pm4x10_port_higig_mode_get(int unit, int port, pm_info_t pm_info, int* mode);

/*set port register higig field.*/
int pm4x10_port_higig2_mode_set(int unit, int port, pm_info_t pm_info, int mode);
int pm4x10_port_higig2_mode_get(int unit, int port, pm_info_t pm_info, int* mode);

/*set port register port type field.*/
int pm4x10_port_config_port_type_set(int unit, int port, pm_info_t pm_info, int type);
int pm4x10_port_config_port_type_get(int unit, int port, pm_info_t pm_info, int* type);

/*set/get hwfailover for trident.*/
int pm4x10_port_trunk_hwfailover_config_set(int unit, int port, pm_info_t pm_info, int hw_count);
int pm4x10_port_trunk_hwfailover_config_get(int unit, int port, pm_info_t pm_info, int* enable);

/*set/get hwfailover for trident.*/
int pm4x10_port_trunk_hwfailover_status_get(int unit, int port, pm_info_t pm_info, int* loopback);

/*port diagnostics control.*/
int pm4x10_port_diag_ctrl(int unit, int port, pm_info_t pm_info, uint32 inst, int op_type, int op_cmd, const void* arg);

/*Get the reference clock value 156 or 125.*/
int pm4x10_port_ref_clk_get(int unit, int port, pm_info_t pm_info, int* ref_clk);

/*Disable lag failover.*/
int pm4x10_port_lag_failover_disable(int unit, int port, pm_info_t pm_info);

/*Disable lag failover.*/
int pm4x10_port_lag_remove_failover_lpbk_set(int unit, int port, pm_info_t pm_info, int val);
int pm4x10_port_lag_remove_failover_lpbk_get(int unit, int port, pm_info_t pm_info, int* val);

/*Disable lag failover.*/
int pm4x10_port_cntmaxsize_set(int unit, int port, pm_info_t pm_info, int val);
int pm4x10_port_cntmaxsize_get(int unit, int port, pm_info_t pm_info, int* val);

/*Read multiple bytes get.*/
int pm4x10_port_multi_get(int unit, int port, pm_info_t pm_info, portmod_multi_get_t* multi_get);

/*Get Info needed to restore after drain cells.*/
int pm4x10_port_drain_cell_get(int unit, int port, pm_info_t pm_info, portmod_drain_cells_t* drain_cells);

/*Restore informaation after drain cells.*/
int pm4x10_port_drain_cell_stop(int unit, int port, pm_info_t pm_info, const portmod_drain_cells_t* drain_cells);

/*Restore informaation after drain cells.*/
int pm4x10_port_drain_cell_start(int unit, int port, pm_info_t pm_info);

/**/
int pm4x10_port_drain_cells_rx_enable(int unit, int port, pm_info_t pm_info, int rx_en);

/**/
int pm4x10_port_egress_queue_drain_rx_en(int unit, int port, pm_info_t pm_info, int rx_en);

/**/
int pm4x10_port_mac_ctrl_set(int unit, int port, pm_info_t pm_info, uint64 ctrl);

/**/
int pm4x10_port_txfifo_cell_cnt_get(int unit, int port, pm_info_t pm_info, uint32* cnt);

/**/
int pm4x10_port_egress_queue_drain_get(int unit, int port, pm_info_t pm_info, uint64* ctrl, int* rxen);

/*Set/get port mac reset */
int pm4x10_port_mac_reset_set(int unit, int port, pm_info_t pm_info, int val);
int pm4x10_port_mac_reset_get(int unit, int port, pm_info_t pm_info, int* val);

/**/
int pm4x10_port_soft_reset_toggle(int unit, int port, pm_info_t pm_info, int idx);

/*Check if MAC needs to be reset.*/
int pm4x10_port_mac_reset_check(int unit, int port, pm_info_t pm_info, int enable, int* reset);

/**/
int pm4x10_port_core_num_get(int unit, int port, pm_info_t pm_info, int* core_num);

/**/
int pm4x10_port_e2ecc_hdr_set(int unit, int port, pm_info_t pm_info, const portmod_port_higig_e2ecc_hdr_t* e2ecc_hdr);
int pm4x10_port_e2ecc_hdr_get(int unit, int port, pm_info_t pm_info, portmod_port_higig_e2ecc_hdr_t* e2ecc_hdr);

/**/
int pm4x10_port_e2e_enable_set(int unit, int port, pm_info_t pm_info, int enable);
int pm4x10_port_e2e_enable_get(int unit, int port, pm_info_t pm_info, int* enable);

/**/
int pm4x10_port_fallback_lane_get(int unit, int port, pm_info_t pm_info, int* fallback_lane);

/*get the speed for the specified port*/
int pm4x10_port_speed_get(int unit, int port, pm_info_t pm_info, int* speed);

/*Port discard set*/
int pm4x10_port_discard_set(int unit, int port, pm_info_t pm_info, int discard);

/*Port soft reset set set*/
int pm4x10_port_soft_reset_set(int unit, int port, pm_info_t pm_info, int idx, int val, int flags);

/*Port tx_en=0 and softreset mac*/
int pm4x10_port_tx_down(int unit, int port, pm_info_t pm_info);

/*reconfig pgw.*/
int pm4x10_port_pgw_reconfig(int unit, int port, pm_info_t pm_info, const portmod_port_mode_info_t* pmode, int phy_port, int flags);

/*Routine to notify internal phy of external phy link state.*/
int pm4x10_port_notify(int unit, int port, pm_info_t pm_info, int link);

/*"port control phy timesync config set/get"*/
int pm4x10_port_control_phy_timesync_set(int unit, int port, pm_info_t pm_info, portmod_port_control_phy_timesync_t config, uint64 value);
int pm4x10_port_control_phy_timesync_get(int unit, int port, pm_info_t pm_info, portmod_port_control_phy_timesync_t config, uint64* value);

/*"port timesync config set/get"*/
int pm4x10_port_timesync_config_set(int unit, int port, pm_info_t pm_info, const portmod_phy_timesync_config_t* config);
int pm4x10_port_timesync_config_get(int unit, int port, pm_info_t pm_info, portmod_phy_timesync_config_t* config);

/*"port timesync enable set/get"*/
int pm4x10_port_timesync_enable_set(int unit, int port, pm_info_t pm_info, uint32 enable);
int pm4x10_port_timesync_enable_get(int unit, int port, pm_info_t pm_info, uint32* enable);

/*"port timesync nco addend  set/get"*/
int pm4x10_port_timesync_nco_addend_set(int unit, int port, pm_info_t pm_info, uint32 freq_step);
int pm4x10_port_timesync_nco_addend_get(int unit, int port, pm_info_t pm_info, uint32* freq_step);

/*"port timesync framesync info  set/get"*/
int pm4x10_port_timesync_framesync_mode_set(int unit, int port, pm_info_t pm_info, const portmod_timesync_framesync_t* framesync);
int pm4x10_port_timesync_framesync_mode_get(int unit, int port, pm_info_t pm_info, portmod_timesync_framesync_t* framesync);

/*"port timesync local time  set/get"*/
int pm4x10_port_timesync_local_time_set(int unit, int port, pm_info_t pm_info, uint64 local_time);
int pm4x10_port_timesync_local_time_get(int unit, int port, pm_info_t pm_info, uint64* local_time);

/*"port timesync framesync info  set/get"*/
int pm4x10_port_timesync_load_ctrl_set(int unit, int port, pm_info_t pm_info, uint32 load_once, uint32 load_always);
int pm4x10_port_timesync_load_ctrl_get(int unit, int port, pm_info_t pm_info, uint32* load_once, uint32* load_always);

/*"port timesync tx timestamp offset set/get"*/
int pm4x10_port_timesync_tx_timestamp_offset_set(int unit, int port, pm_info_t pm_info, uint32 ts_offset);
int pm4x10_port_timesync_tx_timestamp_offset_get(int unit, int port, pm_info_t pm_info, uint32* ts_offset);

/*"port timesync rx timestamp offset set/get"*/
int pm4x10_port_timesync_rx_timestamp_offset_set(int unit, int port, pm_info_t pm_info, uint32 ts_offset);
int pm4x10_port_timesync_rx_timestamp_offset_get(int unit, int port, pm_info_t pm_info, uint32* ts_offset);

/*"port timestamp adjust set/get"*/
int pm4x10_port_timestamp_adjust_set(int unit, int port, pm_info_t pm_info, const soc_port_timestamp_adjust_t* ts_adjust);
int pm4x10_port_timestamp_adjust_get(int unit, int port, pm_info_t pm_info, soc_port_timestamp_adjust_t* ts_adjust);

/*"port timesync interrupt mask set/get"*/
int pm4x10_port_phy_intr_enable_set(int unit, int port, pm_info_t pm_info, uint32 intr_enable);
int pm4x10_port_phy_intr_enable_get(int unit, int port, pm_info_t pm_info, uint32* intr_enable);

/*"port phy interrupt status get"*/
int pm4x10_port_phy_intr_status_get(int unit, int port, pm_info_t pm_info, uint32* intr_status);

/*"port phy interrupt status clear"*/
int pm4x10_port_phy_intr_status_clear(int unit, int port, pm_info_t pm_info);

/*"port timesync force frame sync."*/
int pm4x10_port_phy_timesync_do_sync(int unit, int port, pm_info_t pm_info);

/*"port timesync capture timestamp get"*/
int pm4x10_port_timesync_capture_timestamp_get(int unit, int port, pm_info_t pm_info, uint64* cap_ts);

/*"port timesync heartbeat timestamp get"*/
int pm4x10_port_timesync_heartbeat_timestamp_get(int unit, int port, pm_info_t pm_info, uint64* hb_ts);

/*"port timesync tx timestamp offset set/get"*/
int pm4x10_port_edc_config_set(int unit, int port, pm_info_t pm_info, const portmod_edc_config_t* config);
int pm4x10_port_edc_config_get(int unit, int port, pm_info_t pm_info, portmod_edc_config_t* config);

/*set/get interrupt enable value. */
int pm4x10_port_interrupt_enable_set(int unit, int port, pm_info_t pm_info, int intr_type, uint32 val);
int pm4x10_port_interrupt_enable_get(int unit, int port, pm_info_t pm_info, int intr_type, uint32* val);

/*get interrupt status value. */
int pm4x10_port_interrupt_get(int unit, int port, pm_info_t pm_info, int intr_type, uint32* val);

/*get interrupt value array. */
int pm4x10_port_interrupts_get(int unit, int port, pm_info_t pm_info, int arr_max_size, uint32* intr_arr, uint32* size);

/* portmod check if external phy is legacy*/
int pm4x10_port_check_legacy_phy(int unit, int port, pm_info_t pm_info, int* legacy_phy);

/* portmod phy failover mode*/
int pm4x10_port_failover_mode_set(int unit, int port, pm_info_t pm_info, phymod_failover_mode_t failover);
int pm4x10_port_failover_mode_get(int unit, int port, pm_info_t pm_info, phymod_failover_mode_t* failover);

/* portmod port rsv mask set*/
int pm4x10_port_mac_rsv_mask_set(int unit, int port, pm_info_t pm_info, uint32 rsv_mask);

/* portmod port mib reset toggle*/
int pm4x10_port_mib_reset_toggle(int unit, int port, pm_info_t pm_info, int port_index);

/* portmod restore information after warmboot*/
int pm4x10_port_warmboot_db_restore(int unit, int port, pm_info_t pm_info, const portmod_port_interface_config_t* intf_config, const portmod_port_init_config_t* init_config, phymod_operation_mode_t phy_op_mode);

/* portmod port flow control config*/
int pm4x10_port_flow_control_set(int unit, int port, pm_info_t pm_info, int merge_mode_en, int parallel_fc_en);

/*Portmod state for any logical port dynamixc settings*/
int pm4x10_port_update_dynamic_state(int unit, int port, pm_info_t pm_info, uint32_t port_dynamic_state);

/*get phy operation mode. */
int pm4x10_port_phy_op_mode_get(int unit, int port, pm_info_t pm_info, phymod_operation_mode_t* val);

/*override function for board lane swap. */
int pm4x10_port_lane_map_set(int unit, int port, pm_info_t pm_info, uint32 flags, const phymod_lane_map_t* lane_map);
int pm4x10_port_lane_map_get(int unit, int port, pm_info_t pm_info, uint32 flags, phymod_lane_map_t* lane_map);

/*override function for board lane swap. */
int pm4x10_port_polarity_set(int unit, int port, pm_info_t pm_info, const phymod_polarity_t* polarity);
int pm4x10_port_polarity_get(int unit, int port, pm_info_t pm_info, phymod_polarity_t* polarity);

/*set/get port medium type config. */
int pm4x10_port_medium_config_set(int unit, int port, pm_info_t pm_info, soc_port_medium_t medium, soc_phy_config_t* config);
int pm4x10_port_medium_config_get(int unit, int port, pm_info_t pm_info, soc_port_medium_t medium, soc_phy_config_t* config);

/*get port medium type. */
int pm4x10_port_medium_get(int unit, int port, pm_info_t pm_info, soc_port_medium_t* medium);

/*Get whether the Port Macro is part of PM12x10*/
int pm4x10_pm_is_in_pm12x10(int unit, pm_info_t pm_info, int* in_pm12x10);

/*get pll multiplier*/
int pm4x10_port_pll_div_get(int unit, int port, pm_info_t pm_info, const portmod_port_resources_t* port_resource, uint32_t* pll_div);

/*set/get the port master mode if the port is running SGMII AN*/
int pm4x10_port_master_set(int unit, int port, pm_info_t pm_info, int master_mode);
int pm4x10_port_master_get(int unit, int port, pm_info_t pm_info, int* master_mode);

/*Port preemption configuration set\get*/
int pm4x10_preemption_control_set(int unit, int port, pm_info_t pm_info, portmod_preemption_control_t type, uint32 value);
int pm4x10_preemption_control_get(int unit, int port, pm_info_t pm_info, portmod_preemption_control_t type, uint32* value);

/*Get the preemption status on the transmit side*/
int pm4x10_preemption_tx_status_get(int unit, int port, pm_info_t pm_info, uint32* value);

/*Get the preemption verification status or status on number of verify attempts/messages if verification is not complete(failed/succeed)*/
int pm4x10_preemption_verify_status_get(int unit, int port, pm_info_t pm_info, portmod_preemption_verify_status_type_t type, uint32* value);

/*Set/Get specified preemption rx timeout and timeout count. This API is not exposed to end user, and needs to be called only during device init.*/
int pm4x10_preemption_rx_timeout_set(int unit, int port, pm_info_t pm_info, uint32 enable, uint32 timeout_cnt);
int pm4x10_preemption_rx_timeout_get(int unit, int port, pm_info_t pm_info, uint32* enable, uint32* timeout_cnt);

/*Get the number of lanes belong to  a logical port.*/
int pm4x10_port_lane_count_get(int unit, int port, pm_info_t pm_info, int line_side, int* num_lanes);

/*Get timestamp and sequence id of tx 1588 packet.*/
int pm4x10_port_timesync_tx_info_get(int unit, int port, pm_info_t pm_info, portmod_fifo_status_t* tx_info);

/*Get the lane mask belong to  a logical port.*/
int pm4x10_port_lane_mask_get(int unit, int port, pm_info_t pm_info, const portmod_access_get_params_t* params, int* lane_mask, int* xphy_id);

/*Get supported VCOs*/
int pm4x10_port_vcos_get(int unit, int port, pm_info_t pm_info, const portmod_vcos_speed_config_t* speed_config_list, int size, portmod_dual_vcos_t* dual_vco);

/*Port mac timestamp enable set/get*/
int pm4x10_port_mac_timestamp_enable_set(int unit, int port, pm_info_t pm_info, int enable);
int pm4x10_port_mac_timestamp_enable_get(int unit, int port, pm_info_t pm_info, int* enable);

/*"Set/get Portmacro TXPI SDM override configuration. This function is for debug."*/
int pm4x10_port_txpi_override_set(int unit, int port, pm_info_t pm_info, const portmod_txpi_override_t* override);
int pm4x10_port_txpi_override_get(int unit, int port, pm_info_t pm_info, portmod_txpi_override_t* override);

/*"Get Portmacro TXPI SDM value. This funciont is for debug"*/
int pm4x10_port_txpi_sdm_data_get(int unit, int port, pm_info_t pm_info, int* value);

/*Port SyncE clock control config*/
int pm4x10_port_synce_clk_ctrl_set(int unit, int port, pm_info_t pm_info, const portmod_port_synce_clk_ctrl_t* cfg);
int pm4x10_port_synce_clk_ctrl_get(int unit, int port, pm_info_t pm_info, portmod_port_synce_clk_ctrl_t* cfg);

/*get both tx/rx clocks in Hz.*/
int pm4x10_port_txpi_rxcdr_clk_get(int unit, int port, pm_info_t pm_info, uint32* txpi_clk, uint32* rxcdr_clk);

/*Set PM based EGR 1588 timestamping configuration.*/
int pm4x10_egr_1588_timestamp_config_set(int unit, int port, pm_info_t pm_info, portmod_egr_1588_timestamp_config_t timestamp_config);
int pm4x10_egr_1588_timestamp_config_get(int unit, int port, pm_info_t pm_info, portmod_egr_1588_timestamp_config_t* timestamp_config);

/* Debug logging of warmboot cached information for a given port macro. Needs boot flag BOOT_F_EARLY_DBG to be set.
            */
int pm4x10_pm_wb_debug_log(int unit, pm_info_t pm_info);

/*Control one time fec error injection.*/
int pm4x10_port_fec_error_inject_set(int unit, int port, pm_info_t pm_info, uint16 error_control_map, portmod_fec_error_mask_t bit_error_mask);
int pm4x10_port_fec_error_inject_get(int unit, int port, pm_info_t pm_info, uint16* error_control_map, portmod_fec_error_mask_t* bit_error_mask);

/*Local and Remote faults status get*/
int pm4x10_port_faults_status_get(int unit, int port, pm_info_t pm_info, portmod_port_fault_status_t* faults);

/*PMD RX lock status get*/
int pm4x10_port_pmd_rx_lock_status_get(int unit, int port, pm_info_t pm_info, uint32* pmd_lock, uint32* pmd_lock_change);

#endif /*_PM4X10_H_*/

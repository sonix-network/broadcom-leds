/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 *
 * DDR4 & GDDR5 Memory Support
 */

/* BEGIN: TEMPORARY */
/* END: TEMPORARY */

#ifndef _SHMOO_COMBO28_H
#define _SHMOO_COMBO28_H

#define SHMOO_COMBO28_BIT                           1
#define SHMOO_COMBO28_BYTE                          (SHMOO_COMBO28_BIT << 3)
#define SHMOO_COMBO28_HALFWORD                      (SHMOO_COMBO28_BYTE << 1)
#define SHMOO_COMBO28_WORD                          (SHMOO_COMBO28_HALFWORD << 1)
#define SHMOO_COMBO28_DOUBLEWORD                    (SHMOO_COMBO28_WORD << 1)
#define SHMOO_COMBO28_QUADWORD                      (SHMOO_COMBO28_DOUBLEWORD << 1)

#define SHMOO_COMBO28_SHORT_SLEEP                   1
#define SHMOO_COMBO28_LONG_SLEEP                    10
#define SHMOO_COMBO28_DEEP_SLEEP                    100
#define SHMOO_COMBO28_HIBERNATION                   1000
#define SHMOO_COMBO28_STASIS                        10000

#define SHMOO_COMBO28_MAX_VISIBLE_UI_COUNT          5
#define SHMOO_COMBO28_MAX_EFFECTIVE_UI_COUNT        4
#define SHMOO_COMBO28_LAST_EFFECTIVE_UI             (SHMOO_COMBO28_MAX_EFFECTIVE_UI_COUNT - 1)
#define SHMOO_COMBO28_MIN_UI_SIZE_PS                4
#define SHMOO_COMBO28_MIN_DATA_RATE_MBPS            1250
#define SHMOO_COMBO28_MAX_STORAGE_ELEMENT_COUNT     ((((10000000 * SHMOO_COMBO28_MAX_VISIBLE_UI_COUNT) / SHMOO_COMBO28_MIN_DATA_RATE_MBPS) / SHMOO_COMBO28_MIN_UI_SIZE_PS) + 1)
#define SHMOO_COMBO28_MAX_VDL_LENGTH                (84 << 2)
#define SHMOO_COMBO28_MIN_VDL_LENGTH                (16 << 2)
#define SHMOO_COMBO28_MAX_VREF_RANGE                128
#define SHMOO_COMBO28_DDR4_VREF_RANGE_CROSSOVER     36      /* Must be between 23 - 50 */

#define SHMOO_COMBO28_RESULT2D_X                    SHMOO_COMBO28_MAX_STORAGE_ELEMENT_COUNT
#define SHMOO_COMBO28_RESULT2D_Y                    SHMOO_COMBO28_MAX_VREF_RANGE

#define SHMOO_COMBO28_STRING_LENGTH                 (SHMOO_COMBO28_RESULT2D_X + 1)
#define SHMOO_COMBO28_ERROR_ARRAY_LENGTH            4

#define SHMOO_COMBO28_CTL_TYPE_RSVP                 0
#define SHMOO_COMBO28_CTL_TYPE_RSVP_STR             "t0"
#define SHMOO_COMBO28_CTL_TYPE_1                    1
#define SHMOO_COMBO28_CTL_TYPE_1_STR                "t1"

#define SHMOO_COMBO28_DRAM_TYPE_RSVP                0
#define SHMOO_COMBO28_DRAM_TYPE_DDR4                4
#define SHMOO_COMBO28_DRAM_TYPE_GDDR5               5

#define SHMOO_COMBO28_CALIB_CENTER_PASS             111
#define SHMOO_COMBO28_CALIB_RISING_EDGE             011
#define SHMOO_COMBO28_CALIB_FALLING_EDGE            100
#define SHMOO_COMBO28_CALIB_ANY_EDGE                010
#define SHMOO_COMBO28_CALIB_PASS_START              001
#define SHMOO_COMBO28_CALIB_FAIL_START              110

#define SHMOO_COMBO28_CALIB_SWEEP_1                 1
#define SHMOO_COMBO28_CALIB_SWEEP_BYTE_TO_BIT       2
#define SHMOO_COMBO28_CALIB_SWEEP_HALFWORD_TO_BIT   3
#define SHMOO_COMBO28_CALIB_SWEEP_WORD_TO_BIT       4

#define SHMOO_COMBO28_CALIB_GROUP_ORDER_DONT_CARE   0x00000000
#define SHMOO_COMBO28_CALIB_GROUP_ORDER_00112233    0x00112233
#define SHMOO_COMBO28_CALIB_GROUP_ORDER_01230123    0x01230123

#define SHMOO_COMBO28_CALIB_PASS_ANY                0x00000001
#define SHMOO_COMBO28_CALIB_PASS_ALL                0xFFFFFFFF

#define SHMOO_COMBO28_SHMOO_RSVP                    -1
#define SHMOO_COMBO28_ADDR_CTRL_SHORT               00
#define SHMOO_COMBO28_DQS2CK                        14
#define SHMOO_COMBO28_WCK2CK                        15
#define SHMOO_COMBO28_RD_EN_FISH                    24
#define SHMOO_COMBO28_RD_START_FISH                 25
#define SHMOO_COMBO28_EDC_START_FISH                26
#define SHMOO_COMBO28_RD_DESKEW                     30
#define SHMOO_COMBO28_RD_SHORT                      31
#define SHMOO_COMBO28_DBI_EDC_RD_DESKEW             35
#define SHMOO_COMBO28_WR_DESKEW                     40
#define SHMOO_COMBO28_WR_SHORT                      41
#define SHMOO_COMBO28_DBI_WR_DESKEW                 45
#define SHMOO_COMBO28_RD_EXTENDED                   50
#define SHMOO_COMBO28_WR_EXTENDED                   60
#define SHMOO_COMBO28_ADDR_CTRL_EXTENDED            70
#define SHMOO_COMBO28_DDR4_SEQUENCE_COUNT           8
#define SHMOO_COMBO28_GDDR5_SEQUENCE_COUNT          12
#define SHMOO_COMBO28_DDR4_RESTORE_SEQUENCE_COUNT   0
#define SHMOO_COMBO28_GDDR5_RESTORE_SEQUENCE_COUNT  7
/* BEGIN: EXTRA */
#define SHMOO_COMBO28_RD_VALID_FISH                 251
#define SHMOO_COMBO28_RD_SHORT_FISH                 252
#define SHMOO_COMBO28_ADDR_EXTENDED                 711
#define SHMOO_COMBO28_CTRL_EXTENDED                 721
/* END: EXTRA */

#define SHMOO_COMBO28_QUICK_SHMOO_CTRL_EXTENDED     0

#define SHMOO_COMBO28_REPEAT                        9
#define SHMOO_COMBO28_REPEAT_HALF                   (SHMOO_COMBO28_REPEAT >> 1)

#define SHMOO_COMBO28_SEQUENTIAL                    0
#define SHMOO_COMBO28_SINGLE                        1

#define SHMOO_COMBO28_ACTION_RSVP                   -1
#define SHMOO_COMBO28_ACTION_RESTORE                0
#define SHMOO_COMBO28_ACTION_RUN                    1
#define SHMOO_COMBO28_ACTION_SAVE                   2
#define SHMOO_COMBO28_ACTION_RUN_AND_SAVE           3

#define SHMOO_COMBO28_CTL_FLAGS_STAT_BIT            0x1
#define SHMOO_COMBO28_CTL_FLAGS_PLOT_BIT            0x2
#define SHMOO_COMBO28_CTL_FLAGS_EXT_VREF_RANGE_BIT  0x4
#define SHMOO_COMBO28_DEBUG_MODE_FLAG_BITS          SHMOO_COMBO28_CTL_FLAGS_EXT_VREF_RANGE_BIT

#define SHMOO_COMBO28_MAX_INTERFACES                8
#define SHMOO_COMBO28_INTERFACE_RSVP                -1
#define SHMOO_COMBO28_BYTES_PER_INTERFACE           4
#define SHMOO_COMBO28_DQ_BIT_NOT_SWAPPED            0xFF 

#define SHMOO_COMBO28_BIST_NOF_PATTERNS             8
#define SHMOO_COMBO28_BIST_MPR_NOF_PATTERNS         4

#define SHMOO_COMBO28_REFRESH_SHUTDOWN_REFI         0

/* Initial UI Shifts */
#define SHMOO_COMBO28_DDR4_INIT_CK_UI_SHIFT         1
#define SHMOO_COMBO28_DDR4_INIT_ADDR_CTRL_UI_SHIFT  1
#define SHMOO_COMBO28_DDR4_INIT_DQS_UI_SHIFT        SHMOO_COMBO28_DDR4_INIT_ADDR_CTRL_UI_SHIFT
#define SHMOO_COMBO28_DDR4_INIT_DATA_UI_SHIFT       0
#define SHMOO_COMBO28_GDDR5_INIT_CK_UI_SHIFT        1
#define SHMOO_COMBO28_GDDR5_INIT_ADDR_CTRL_UI_SHIFT 3
#define SHMOO_COMBO28_GDDR5_INIT_DQS_UI_SHIFT       1
#define SHMOO_COMBO28_GDDR5_INIT_DATA_UI_SHIFT      0

/* Initial VDL Positions */
#define SHMOO_COMBO28_DDR4_INIT_WRITE_MIN_VDL_POS   0
#define SHMOO_COMBO28_DDR4_INIT_READ_MIN_VDL_POS    20

/* Initial Configurations */
#define SHMOO_COMBO28_DDR4_INIT_REN_RD2_2G_DELAY    4
#define SHMOO_COMBO28_DDR4_INIT_EDCEN_RD2_2G_DELAY  4
#define SHMOO_COMBO28_GDDR5_INIT_REN_RD2_2G_DELAY   4
#define SHMOO_COMBO28_GDDR5_INIT_EDCEN_RD2_2G_DELAY 9

/* CDR */
#define SHMOO_COMBO28_CDR_UNDEFINED_VALUE           0x80000000
#define SHMOO_COMBO28_CDR_ADJUSTMENT_COUNT          6

/* Config params */
#define SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE            SHMOO_COMBO28_BYTES_PER_INTERFACE

typedef struct combo28_shmoo_dram_info_s
{ 
    uint32 ctl_type;
    uint32 dram_type;
    uint32 dram_bitmap;
    int    num_columns;
    int    num_rows;
    int    num_banks;
    int    data_rate_mbps;
    int    ref_clk_mhz; 
    uint32 refi;
    uint32 command_parity_latency;
    int sim_system_mode;
    uint32 ref_clk_bitmap;
    uint8  zq_cal_array[SHMOO_COMBO28_MAX_INTERFACES];
    uint32 dq_swap[SHMOO_COMBO28_MAX_INTERFACES][SHMOO_COMBO28_BYTES_PER_INTERFACE][SHMOO_COMBO28_BYTE];
} combo28_shmoo_dram_info_t;

typedef struct combo28_shmoo_config_param_s
{
    uint8   dq_byte_wr_min_vdl_bit[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE][SHMOO_COMBO28_BYTE];
    uint8   dq_byte_wr_min_vdl_dbi[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint8   dq_byte_wr_min_vdl_edc[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint32  dq_byte_wr_max_vdl_data[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint32  dq_byte_wr_max_vdl_dqs[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];

    uint8   dq_byte_rd_min_vdl_bit[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE][SHMOO_COMBO28_BYTE];
    uint8   dq_byte_rd_min_vdl_dbi[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint8   dq_byte_rd_min_vdl_edc[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint32  dq_byte_rd_max_vdl_dqsp[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint32  dq_byte_rd_max_vdl_dqsn[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];

    uint32  dq_byte_ren_fifo_config[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint32  dq_byte_edcen_fifo_config[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];    
    uint32  dq_byte_rd_max_vdl_fsm[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint32  dq_byte_vref_dac_config[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
    uint32  dq_byte_macro_reserved_reg[SHMOO_COMBO28_DQ_CONFIG_NOF_BYTE];
   
    uint32  aq_l_max_vdl_addr;
    uint32  aq_l_max_vdl_ctrl;
    uint32  aq_l_macro_reserved_reg;
    uint32  aq_u_max_vdl_addr;
    uint32  aq_u_max_vdl_ctrl;
    uint32  aq_u_macro_reserved_reg;
    
    uint32  common_macro_reserved_reg;
    
    uint32  control_regs_read_clock_config;
    uint32  control_regs_input_shift_ctrl;
    uint32  control_regs_ren_fifo_central_init;
    uint32  control_regs_edcen_fifo_central_init;
    uint32  control_regs_shared_vref_dac_config;
    uint32  control_regs_reserved_reg;
    
} combo28_shmoo_config_param_t;

typedef struct combo28_bist_info_s
{ 
    uint32 write_weight;
    uint32 read_weight;
    uint32 bist_timer_us;        /* if bist_timer_us != 0, ignore bist_num_actions and wait bist_timer_us before stoping bist */
    uint32 bist_num_actions;
    uint32 bist_start_address;
    uint32 bist_end_address;
    uint32 prbs_mode;
    uint32 mpr_mode;
    uint32 data_pattern[SHMOO_COMBO28_BIST_NOF_PATTERNS];
    uint8  mpr_pattern[SHMOO_COMBO28_BIST_MPR_NOF_PATTERNS];
} combo28_bist_info_t;

typedef enum
{
    SHMOO_COMBO28_GDDR5_BIST_ADDR_TRAINING_MODE = 0,         
    SHMOO_COMBO28_GDDR5_BIST_LOAD_READ_FIFO_MODE = 1,               
    SHMOO_COMBO28_GDDR5_BIST_READ_FROM_PREV_LOADED_GDDR5_READ_FIFO = 2,              
    SHMOO_COMBO28_GDDR5_BIST_READ_WRITE_FROM_GDDR5_READ_FIFO = 3,            
    SHMOO_COMBO28_GDDR5_BIST_READ_VENDOR_ID = 4            
} SHMOO_COMBO28_GDDR5_BIST_MODE;

typedef struct combo28_gddr5_bist_info_s
{ 
    uint32 fifo_depth;
    uint32 num_commands;
    SHMOO_COMBO28_GDDR5_BIST_MODE bist_mode;
    uint64 data_pattern[SHMOO_COMBO28_BIST_NOF_PATTERNS];  
    uint8 dbi_pattern[SHMOO_COMBO28_BIST_NOF_PATTERNS];  
    uint8 edc_pattern[SHMOO_COMBO28_BIST_NOF_PATTERNS]; 
} combo28_gddr5_bist_info_t;

typedef struct combo28_bist_err_cnt_s
{ 
    uint32 bist_err_occur;
    uint32 bist_full_err_cnt;
    uint32 bist_single_err_cnt;
    uint32 bist_global_err_cnt;
    uint32 bist_dbi_global_err_cnt;
    uint32 bist_dbi_err_occur;
    uint32 bist_edc_global_err_cnt;
    uint32 bist_edc_err_occur;
} combo28_bist_err_cnt_t;

typedef struct combo28_gddr5_bist_err_cnt_s { 
    uint32 bist_data_err_occur;
    uint32 bist_dbi_err_occur;
    uint32 bist_edc_err_occur;
    uint32 bist_adt_err_occur;
} combo28_gddr5_bist_err_cnt_t;


typedef struct combo28_drc_pll_s
{  
    uint32 iso_in;
    uint32 cp;
    uint32 cp1;
    uint32 cz;
    uint32 icp;
    uint32 rp;
    uint32 rz;
    uint32 ldo_ctrl;
    uint32 msc_ctrl;
    uint32 ndiv_frac;
    uint32 pdiv;
    uint32 ndiv_int;
    uint32 ssc_limit;
    uint32 ssc_mode;
    uint32 ssc_step;
    uint32 vco_gain;
    uint32 div2_mode;
    uint64 pll_ctrl;
} combo28_drc_pll_t;

typedef struct combo28_vendor_info_s { 
    uint32 dram_density;
    uint32 fifo_depth;
    uint32 revision_id;        
    uint32 manufacture_id;
} combo28_vendor_info_t;

typedef struct combo28_shmoo_cbi_s { 
    /* PHY register Read */
    int (*combo28_phy_reg_read)(int unit, int drc_ndx, uint32 addr, uint32 *data);
    /* PHY register write */
    int (*combo28_phy_reg_write)(int unit, int drc_ndx, uint32 addr, uint32 data);
    /* PHY register Modify */
    int (*combo28_phy_reg_modify)(int unit, int drc_ndx, uint32 addr, uint32 data, uint32 mask);
    /* BIST Configuration */
    int (*combo28_drc_bist_conf_set)(int unit, int drc_ndx, combo28_bist_info_t info);
    /* Get BIST error count */
    int (*combo28_drc_bist_err_cnt)(int unit, int drc_ndx, combo28_bist_err_cnt_t *info);
    /* Set Dram Init Phase (First - 1/Secound - 2) */
    int (*combo28_drc_dram_init)(int unit, int drc_ndx, int phase);
    /* Configure DRC PLL */
    int (*combo28_drc_pll_set)(int unit, int drc_ndx, const combo28_drc_pll_t *pll_info); 
    /* Modify mrs */
    int (*combo28_drc_modify_mrs)(int unit, int drc_ndx, uint32 mr_ndx, uint32 data, uint32 mask);
    /* Enable/Disable ADT */
    int (*combo28_drc_enable_adt)(int unit, int drc_ndx, int enable);
    /* Enable/Disable Wck2CK training */
    int (*combo28_drc_enable_wck2ck_training)(int unit, int drc_ndx, int enable);
    /* Enable/Disable write leveling */
    int (*combo28_drc_enable_write_leveling)(int unit, int drc_ndx, uint32 command_parity_lattency, int use_continious_gddr5_dqs, int enable);
    /* Enable/Disable MPR */
    int (*combo28_drc_mpr_en)(int unit, int drc_ndx, int enable);
    /* Load MPR pattern */
    int (*combo28_drc_mpr_load)(int unit, int drc_ndx, uint8 *mpr_pattern);
    /* Enable/Disable GDDR5 training */
    int (*combo28_drc_enable_gddr5_training_protocol)(int unit, int drc_ndx, int enable);
    /* Get vendor ID info */
    int (*combo28_drc_vendor_info_get)(int unit, int drc_ndx, combo28_vendor_info_t *info);    
    /* Generate DQs Pulse */
    int (*combo28_drc_dqs_pulse_gen)(int unit, int drc_ndx, int use_continious_gddr5_dqs);
    /* GDDR5 BIST Configuration */
    int (*combo28_gddr5_shmoo_drc_bist_conf_set)(int unit, int drc_ndx, combo28_gddr5_bist_info_t info);
    /* GDDR5 Get BIST error count */
    int (*combo28_gddr5_shmoo_drc_bist_err_cnt)(int unit, int drc_ndx, combo28_gddr5_bist_err_cnt_t *info);
    /* Get DQ Byte Swap Info */
    int (*combo28_gddr5_shmoo_drc_dq_byte_pairs_swap_info_get)(int unit, int drc_ndx, int* pairs_were_swapped);
    /* Enable CRC write */
    int (*combo28_drc_enable_wr_crc)(int unit, int drc_ndx, int enable);
    /* Enable CRC read */
    int (*combo28_drc_enable_rd_crc)(int unit, int drc_ndx, int enable);
    /* Enable DBI write */
    int (*combo28_drc_enable_wr_dbi)(int unit, int drc_ndx, int enable);
    /* Enable DBI read */
    int (*combo28_drc_enable_rd_dbi)(int unit, int drc_ndx, int enable);
    /* Enable refresh */
    int (*combo28_drc_enable_refresh)(int unit, int drc_ndx , int enable, uint32 new_trefi, uint32 * curr_refi);
    /* Force DQs */
    int (*combo28_drc_force_dqs)(int unit, int drc_ndx , uint32 force_dqs_val, uint32 force_dqs_oeb);
    /* Soft Reset Drc Without Dram */
    int (*combo28_drc_soft_reset_drc_without_dram)(int unit, int drc_ndx);
    /* Access specific unit dram info */
    int (*combo28_shmoo_dram_info_access)(int unit, combo28_shmoo_dram_info_t** shmoo_info);
    /* Access specific unit vendor info */
    int (*combo28_vendor_info_access)(int unit, combo28_vendor_info_t** vendor_info);
    /* Get Cas Latency value */
    int (*combo28_cas_latency_get)(int unit, int* cas_latency);
} combo28_shmoo_cbi_t;

typedef struct combo28_shmoo_container_s
{
    uint32 sizeX;
    uint32 sizeY;
    uint32 yCapMin;
    uint32 yCapMax;
    uint32 calibMode;
    uint32 calibPos;
    uint32 calibStart;
    uint32 result2D[(SHMOO_COMBO28_RESULT2D_X)*(SHMOO_COMBO28_RESULT2D_Y)];
    uint32 resultData[SHMOO_COMBO28_WORD];
    uint32 shmooType;
    uint32 dramType;
    uint32 ctlType;
    uint32 trefi;
    uint32 step1000;
    uint32 size1000UI;
    uint32 endUI[SHMOO_COMBO28_MAX_VISIBLE_UI_COUNT];
    uint32 engageUIshift;
    uint32 wckInv;
    uint32 restore;
    uint32 debugMode;
} combo28_shmoo_container_t;

typedef struct combo28_step_size_s
{
    uint32 step1000;
    uint32 size1000UI;
} combo28_step_size_t;

typedef struct combo28_ui_position_s
{
    uint32 ui;
    uint32 position;
} combo28_ui_position_t;

typedef uint32 combo28_shmoo_error_array_t[SHMOO_COMBO28_ERROR_ARRAY_LENGTH];

typedef struct combo28_cdr_config_param_s
{
    int byte;
    int reset_n;
    int enable;
    int p;
    int n;
    int i;
    int q;
    int ib;
    int data_source;
    int init_lock_transition;
    int accu_pos_threshold;
    int update_gap;
    int update_mode;
    int auto_copy;
} combo28_cdr_config_param_t;

typedef int (*soc_combo28_phy_reg_read_t)(int unit, int drc_ndx, uint32 addr, uint32 *data);
typedef int (*soc_combo28_phy_reg_write_t)(int unit, int drc_ndx, uint32 addr, uint32 data);
typedef int (*soc_combo28_phy_reg_modify_t)(int unit, int drc_ndx, uint32 addr, uint32 data, uint32 mask);
typedef int (*_shmoo_combo28_drc_bist_conf_set_t)(int unit, int drc_ndx, combo28_bist_info_t info);
typedef int (*_shmoo_combo28_drc_bist_err_cnt_t)(int unit, int drc_ndx, combo28_bist_err_cnt_t *info);
typedef int (*_shmoo_combo28_drc_dram_init_t)(int unit, int drc_ndx, int phase);
typedef int (*_shmoo_combo28_drc_pll_set_t)(int unit, int drc_ndx, const combo28_drc_pll_t *pll_info); 
typedef int (*_shmoo_combo28_drc_modify_mrs_t)(int unit, int drc_ndx, uint32 mr_ndx, uint32 data, uint32 mask);
typedef int (*_shmoo_combo28_drc_enable_adt_t)(int unit, int drc_ndx, int enable);
typedef int (*_shmoo_combo28_drc_enable_wck2ck_training_t)(int unit, int drc_ndx, int enable);
typedef int (*_shmoo_combo28_drc_enable_write_leveling_t)(int unit, int drc_ndx, uint32 command_parity_lattency, int use_continious_gddr5_dqs, int enable);
typedef int (*_shmoo_combo28_drc_mpr_en_t)(int unit, int drc_ndx, int enable);
typedef int (*_shmoo_combo28_drc_mpr_load_t)(int unit, int drc_ndx, uint8 *mpr_pattern);
typedef int (*_shmoo_combo28_drc_enable_gddr5_training_protocol_t)(int unit, int drc_ndx, int enable);
typedef int (*_shmoo_combo28_drc_vendor_info_get_t)(int unit, int drc_ndx, combo28_vendor_info_t *info);
typedef int (*_shmoo_combo28_drc_dqs_pulse_gen_t)(int unit, int drc_ndx, int use_continious_gddr5_dqs);
typedef int (*_shmoo_combo28_drc_gddr5_bist_conf_set_t)(int unit, int drc_ndx, combo28_gddr5_bist_info_t info);
typedef int (*_shmoo_combo28_drc_gddr5_bist_err_cnt_t)(int unit, int drc_ndx, combo28_gddr5_bist_err_cnt_t *info);
typedef int (*_shmoo_combo28_drc_gddr5_dq_byte_pairs_swap_info_get_t)(int unit, int drc_ndx, int* pairs_were_swapped);
typedef int (*_shmoo_combo28_drc_enable_wr_crc_t)(int unit, int drc_ndx, int enable);
typedef int (*_shmoo_combo28_drc_enable_rd_crc_t)(int unit, int drc_ndx, int enable);
typedef int (*_shmoo_combo28_drc_enable_wr_dbi_t)(int unit, int drc_ndx, int enable);
typedef int (*_shmoo_combo28_drc_enable_rd_dbi_t)(int unit, int drc_ndx, int enable);
typedef int (*_shmoo_combo28_drc_enable_refresh_t)(int unit, int drc_ndx , int enable, uint32 new_trefi, uint32 *curr_refi);
typedef int (*_shmoo_combo28_drc_force_dqs_t)(int unit, int drc_ndx , uint32 force_dqs_val, uint32 force_dqs_oeb);
typedef int (*_shmoo_combo28_drc_soft_reset_drc_without_dram_t)(int unit, int drc_ndx);
typedef int (*_shmoo_combo28_drc_dram_info_access_t)(int unit, combo28_shmoo_dram_info_t** shmoo_info);
typedef int (*_shmoo_combo28_drc_vendor_info_access_t)(int unit, combo28_vendor_info_t** shmoo_info);
typedef int (*_shmoo_combo28_drc_cas_latency_get_t)(int unit, int* cas_latency);


extern soc_combo28_phy_reg_read_t soc_combo28_phy_reg_read;
extern soc_combo28_phy_reg_write_t soc_combo28_phy_reg_write;
extern soc_combo28_phy_reg_modify_t soc_combo28_phy_reg_modify;
extern int soc_combo28_shmoo_interface_cb_register(int unit, combo28_shmoo_cbi_t shmoo_cbi);
extern int soc_combo28_calculate_step_size(int unit, int drc_ndx, combo28_step_size_t *ssPtr);
extern int soc_combo28_shmoo_dram_info_set(int unit, CONST combo28_shmoo_dram_info_t *sdi);
extern int soc_combo28_shmoo_phy_cfg_pll(int unit, int drc_ndx);
extern int soc_combo28_shmoo_phy_init(int unit, int drc_ndx);
extern int soc_combo28_shmoo_ctl(int unit, int drc_ndx, int shmoo_type, uint32 flags, int action, combo28_shmoo_config_param_t *config_param);
extern int soc_combo28_cdr_ctl(int unit, int drc_ndx, int stat, combo28_cdr_config_param_t *config_param);

#endif /* _SHMOO_COMBO28_H */

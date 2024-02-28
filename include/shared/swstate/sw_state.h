/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2022 Broadcom Inc. All rights reserved.
 */
#ifndef _SHR_SW_STATE_H
#define _SHR_SW_STATE_H

#include <bcm/types.h>
#include <soc/types.h>

#define SOC_MODULE_SW_STATE 100

#define PARSER_HINT_ARR 
#define PARSER_HINT_PTR 
#define PARSER_HINT_ARR_ARR 
#define PARSER_HINT_ARR_PTR 
#define PARSER_HINT_PTR_ARR 
#define PARSER_HINT_PTR_PTR 
#define PARSER_HINT_ALLOW_WB_ACCESS
#define PARSER_HINT_AUTOSYNC_EXCLUDE
/* when the variable's size is too big we may want to pass it through pointer
 * in this case the we should prefix the variable definition with this parser hint: PARSER_HINT_PTR_SET
 * this cause the implementation of the set function (generated by the autocoder) to get the value of the variable through pointer
 */
#define PARSER_HINT_PTR_SET

typedef enum {
    SHR_BITDCL_ASSIGNMENT,
    SHR_BITDCL_AND,
    SHR_BITDCL_OR,
    SHR_BITDCL_XOR,
    SHR_BITDCL_REMOVE,
    SHR_BITDCL_CLEAR,
    SHR_BITDCL_SET
} shrbitdcl_op_t;

typedef enum {  
    SW_STATE_BUFF_ASSIGNMENT,
    SW_STATE_BUFF_SET
} sw_state_buff_op_t;

typedef enum
{
    SW_ST_PBMP_INVALID,
    SW_ST_PBMP_NEQ,
    SW_ST_PBMP_EQ,
    SW_ST_PBMP_MEMBER,
    SW_ST_PBMP_NOT_NULL,
    SW_ST_PBMP_IS_NULL,
    SW_ST_PBMP_COUNT,
    SW_ST_PBMP_XOR,
    SW_ST_PBMP_REMOVE,
    SW_ST_PBMP_ASSIGN,
    SW_ST_PBMP_GET,
    SW_ST_PBMP_AND,
    SW_ST_PBMP_NEGATE,
    SW_ST_PBMP_OR,
    SW_ST_PBMP_CLEAR,
    SW_ST_PBMP_PORT_ADD,
    SW_ST_PBMP_PORT_FLIP,
    SW_ST_PBMP_PORT_REMOVE,
    SW_ST_PBMP_PORT_SET,
    SW_ST_PBMP_PORTS_RANGE_ADD,
    SW_ST_PBMP_FMT,
    SW_ST_PBMP_NOF
} SW_ST_PBMP;

typedef enum
{
    SW_ST_BIT_SET,
    SW_ST_BIT_CLEAR,
    SW_ST_BIT_GET,
    SW_ST_BIT_RANGE_READ,
    SW_ST_BIT_RANGE_WRITE,
    SW_ST_BIT_RANGE_AND,
    SW_ST_BIT_RANGE_OR,
    SW_ST_BIT_RANGE_XOR,
    SW_ST_BIT_RANGE_REMOVE,
    SW_ST_BIT_RANGE_NEGATE,
    SW_ST_BIT_RANGE_CLEAR,
    SW_ST_BIT_RANGE_SET,
    SW_ST_BIT_RANGE_NULL,
    SW_ST_BIT_RANGE_TEST,
    SW_ST_BIT_RANGE_EQ,
    SW_ST_BIT_RANGE_COUNT,
    SW_ST_BIT_NOF
} SW_ST_BITDCL;

typedef struct sw_state_bitdcl_param_s {
    int _bit_num;
    int sw_state_bmp_first;    
    int result_first;
    int input_bmp_first;
    int _range;
    SHR_BITDCL *sw_state_bmp;
    SHR_BITDCL *input_bmp; 
    SHR_BITDCL *result_bmp;    
    uint8      *bool_result;    
    uint8      *bit_result;   
    int        *int_result;
    SW_ST_BITDCL op;
    uint32 flags;
} sw_state_bitdcl_param_t;

int shr_sw_state_bit_op(int unit, sw_state_bitdcl_param_t param);

#define SHR_SW_STATE_BIT_OP(unit, param)\
   SW_STATE_IF_ERR_EXIT(shr_sw_state_bit_op(unit, param))

typedef uint8 SW_STATE_BUFF;

#define SHR_SW_STATE_IS_SMART_SYNC(unit)        (0x0)
#define SHR_SW_STATE_MAX_DATA_SIZE_IN_BYTES      (300000000) /* fall back to this size if stable_size soc property is not defined */
/* reserve some scache space for legacy wb modules or Crash recovery journals */
#define SHR_SW_STATE_SCACHE_RESERVE_SIZE         (SOC_IS_JERICHO(unit) ? 55000000 : 20000000)
#define SHR_SW_STATE_MEMBER_NAME_MAX_LENGTH      (128)
#define SHR_SW_STATE_SCACHE_CONTROL_SIZE         (0x0) /* currently not using any control */
#define SW_STATE_MAX_NOF_HASH_TABLES             (100)  /* in the future derive from some property ?*/
#define SW_STATE_EFFICIENT_DUMP                  (0x1) /* ommit 00 and FF from sw state block dump */

#ifdef BCM_WARM_BOOT_SUPPORT
#define SHR_SW_STATE_SCACHE_HANDLE_SET(_wb_handle, unit, _id)\
    SOC_SCACHE_HANDLE_SET(_wb_handle, unit, SOC_MODULE_SW_STATE, _id)
#else
#define SHR_SW_STATE_SCACHE_HANDLE_SET(_wb_handle, unit, _id)
#endif /*BCM_WARM_BOOT_SUPPORT*/

#define SHR_SW_STATE_ALIGN_SIZE(size) \
        (size) = ((size) + 3) & (~3)

#define NOF_BITS_IN_BYTE 8

#define INIT_SW_STATE_MEM
#define DISPLAY_SW_STATE_MEM
#define DISPLAY_SW_STATE_MEM_PRINTF(x)
#ifdef BROADCOM_DEBUG
/* { */
#ifndef __KERNEL__
/* { */
#ifdef SW_STATE_MEM_MONITOR
/* { */
void
    sw_state_alloc_resource_usage_get(unsigned int *alloc_curr, unsigned int *alloc_max);
void 
    sw_state_alloc_resource_usage_init(void) ;
#undef DISPLAY_SW_STATE_MEM
/*
 * Display total memory allocated by shr_sw_state_alloc() so far and maximum
 * allocated so far.
 * Note that collection is initialized to zero in shr_sw_state_init() (See INIT_SW_STATE_MEM).
 */
#define DISPLAY_SW_STATE_MEM \
    { \
        uint32 alloc_curr ; \
        uint32 alloc_max ; \
        sw_state_alloc_resource_usage_get(&alloc_curr, &alloc_max) ; \
        sal_printf( \
            "\r\n" \
            "%s(),%d: Sw state memory consumers - curr/max %lu/%lu bytes\r\n\n", \
                            __FUNCTION__,__LINE__,(unsigned long)alloc_curr,(unsigned long)alloc_max) ; \
    }
#undef INIT_SW_STATE_MEM
#define INIT_SW_STATE_MEM sw_state_alloc_resource_usage_init() ;
#undef DISPLAY_SW_STATE_MEM_PRINTF
#define DISPLAY_SW_STATE_MEM_PRINTF(x) sal_printf x ;
/* } */
#endif
/* } */
#endif
/* } */
#endif

typedef enum shr_sw_state_data_block_init_mode_e {
    socSwStateDataBlockRegularInit,
    socSwStateDataBlockRestoreAndOveride
} shr_sw_state_init_mode_t;



typedef struct shr_sw_state_alloc_element_s {
    uint32 ptr_offset;
    uint8 *ptr_value;
} shr_sw_state_alloc_element_t;

typedef struct shr_sw_state_data_block_header_s {
    uint8 is_init;
    uint32 total_buffer_size;
    shr_sw_state_alloc_element_t *ptr_offsets_sp; /* stack pointer */
    shr_sw_state_alloc_element_t *ptr_offsets_stack_base;
    uint8 *data_ptr;
    uint32 data_size;
    uint8 *next_free_data_slot;
    uint32 size_left;
} shr_sw_state_data_block_header_t;


extern shr_sw_state_data_block_header_t           *shr_sw_state_data_block_header[SOC_MAX_NUM_DEVICES];

void _sw_state_access_debug_hook(int id);
int shr_sw_state_init(int unit, int flags, shr_sw_state_init_mode_t init_mode, uint32 size);
int shr_sw_state_deinit(int unit);
int shr_sw_state_alloc(int unit, uint8** ptr, uint32 size, uint32 flags, char* dbg_string);
int shr_sw_state_memcpy(int unit, uint8 *location, uint8 *input, uint32 length, uint32 flags);
int shr_sw_state_memcpy_general(int unit, uint8 *location, uint8 *input, uint32 length, uint32 flags, uint8 internal_use, uint8 is_ptr);
int shr_sw_state_memcpy_internal(int unit, uint8 *location, uint8 *input, uint32 length, uint32 flags);
int shr_sw_state_memcpy_ptr(int unit, uint8 *location, uint8 *input, uint32 length, uint32 flags);
int shr_sw_state_memset(int unit, uint8 *location, int input, uint32 length, uint32 flags);
int shr_sw_state_pbmp_operation(int unit, _shr_pbmp_t *path, SW_ST_PBMP op, _shr_pbmp_t *input_pbmp,
                            _shr_pbmp_t *output_pbmp, int input_port, int range, uint8 *result,
                            int *countr, char* buffer, uint32 flags, char *debug_string);
int shr_sw_state_free(int unit, uint8 *ptr, uint32 flags);
int shr_sw_state_data_block_free_restored_data(int unit);
int shr_sw_state_data_block_set(int unit, int start, int end, uint8 *data);
int shr_sw_state_data_block_get(int unit, int start, int end, uint8 *data);
int shr_sw_state_data_block_restored_get(int unit, int start, int end, uint8 *data);
int shr_sw_state_data_block_sync(int unit, int start, int end);
void shr_sw_state_block_dump(int unit, uint32 flags, char *file_name, char *mode);
int shr_sw_state_auto_sync(int unit, uint8* current_pointer_in_sw_state, int size);
int shr_sw_state_sizes_get(int unit, uint32* in_use, uint32* left);
int shr_sw_state_defrag(int unit, uint8*** old_ptr, uint32 flags);
int soc_sw_state_nof_allocations_get(void);
int shr_sw_state_allocated_size_get(int unit, uint8* ptr, uint32* allocated_size);
int shr_sw_state_shr_bitdcl_nof_bits_get(int unit, uint8 *ptr, uint32 *num_of_bits_allocated);
int shr_sw_state_shr_bitdcl_nof_bits_update(int unit, uint8 *ptr, uint32 num_of_bits, uint32 flags);
int shr_sw_state_shr_bitdcl_independent(CONST SHR_BITDCL *bits1, CONST SHR_BITDCL *bits2,
    int bits1_first, int bits2_first, int range, shrbitdcl_op_t op,int *result);
int shr_sw_state_buff_independent(CONST SW_STATE_BUFF *sw_state_buff, CONST SW_STATE_BUFF *input_buff,
    int _value, int _offset, unsigned int _len, sw_state_buff_op_t op, int *result);

void* sw_state_copy_endian_independent ( void* destination, const void* source, uint32 dst_size, uint32 src_size, uint32 size );

#ifdef SW_STATE_ISSU_DIAG
int shr_sw_state_print_node(int unit, int node_idx,shr_sw_state_ds_layout_node_t *nodes_arr,
    char* prefix);
#endif

#if !defined(BCM_WARM_BOOT_SUPPORT)
int shr_sw_state_no_wb_init(int unit);
int shr_sw_state_no_wb_deinit(int unit);
#endif
#endif /* _SHR_SW_STATE_H */

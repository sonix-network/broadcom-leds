

#ifndef __ALLOCATOR_H
#define __ALLOCATOR_H

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif





struct kbp_allocator {
    void *cookie;                                    
    void *(*xmalloc) (void *cookie, uint32_t size);  
    void *(*xcalloc) (void *cookie, uint32_t nelements, uint32_t size);  
    void (*xfree) (void *cookie, void *ptr);         
};



#ifdef __cplusplus
}
#endif
#endif                          

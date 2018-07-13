#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <stdlib.h>
#include <stdio.h>


#define __INNER_PRINTF(level,...)                               \
    do{                                                         \
        if (verbose >= (level)) {                               \
            printf("[%s:%d] ",__FILE__,__LINE__);               \
            printf(__VA_ARGS__);                                \
        }                                                       \
    }while(0)

#define  ERROR_PRINTF(...)   __INNER_PRINTF(0,__VA_ARGS__)
#define  WARN_PRINTF(...)    __INNER_PRINTF(1,__VA_ARGS__)
#define  INFO_PRINTF(...)    __INNER_PRINTF(2,__VA_ARGS__)
#define  LOG_PRINTF(...)     __INNER_PRINTF(3,__VA_ARGS__)
#define  DEBUG_PRINTF(...)   __INNER_PRINTF(4,__VA_ARGS__)
#define  TRACE_PRINTF(...)   __INNER_PRINTF(5,__VA_ARGS__)



#endif /*__DEBUG_H__*/

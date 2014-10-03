#ifndef CONSTANTS_H
#define CONSTANTS_H

#define THREADS_PER_LOCAL_SORT 4
#define THREADS_PER_GLOBAL_SORT 4

#define BIT_COUNT 4
#define RADIX (1 << BIT_COUNT)

// Size of warp of threads
#define WARP_SIZE 32
#define WARP_LOG 5

#endif

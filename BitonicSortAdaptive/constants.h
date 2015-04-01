#ifndef CONSTANTS_BITONIC_SORT_ADAPTIVE_H
#define CONSTANTS_BITONIC_SORT_ADAPTIVE_H

#include "../Utils/data_types_common.h"


/*
_KO:  Key-only
_KV:  Key-value
*/

/* ------------------ PADDING KERNEL ----------------- */

// How many threads are used per on thread block for padding. Has to be power of 2.
#define THREADS_PADDING 128
// How many table elements are processed by one thread in padding kernel. Min value is 2.
#define ELEMS_PADDING 32


/* ---------------- BITONIC SORT KERNEL -------------- */

// How many threads are used per one thread block for bitonic sort, which is performed entirely
// in shared memory. Has to be power of 2.
#if DATA_TYPE_BITS == 32
#define THREADS_BITONIC_SORT_KO 128
#define THREADS_BITONIC_SORT_KV 128
#else
#define THREADS_BITONIC_SORT_KO 128
#define THREADS_BITONIC_SORT_KV 128
#endif
// How many elements are processed by one thread in bitonic sort kernel. Min value is 2.
// Has to be divisible by 2.
#if DATA_TYPE_BITS == 32
#define ELEMS_BITONIC_SORT_KO 4
#define ELEMS_BITONIC_SORT_KV 4
#else
#define ELEMS_BITONIC_SORT_KO 4
#define ELEMS_BITONIC_SORT_KV 2
#endif


/* ------------------- BITONIC MERGE ----------------- */

// How many threads are used per on thread block for bitonic merge. Has to be power of 2.
#if DATA_TYPE_BITS == 32
#define THREADS_LOCAL_MERGE_KO 128
#define THREADS_LOCAL_MERGE_KV 128
#else
#define THREADS_LOCAL_MERGE_KO 128
#define THREADS_LOCAL_MERGE_KV 128
#endif
// How many elements are processed by one thread in bitonic merge kernel. Min value is 2.
// Has to be divisable by 2.
#if DATA_TYPE_BITS == 32
#define ELEMS_LOCAL_MERGE_KO 4
#define ELEMS_LOCAL_MERGE_KV 4
#else
#define ELEMS_LOCAL_MERGE_KO 4
#define ELEMS_LOCAL_MERGE_KV 2
#endif


/* --------------- INIT INTERVALS KERNEL ------------- */

// How many threads are used per one thread block for kernel, which initializes intervals.
// Has to be power of 2.
#if DATA_TYPE_BITS == 32
#define THREADS_INIT_INTERVALS_KO 128
#define THREADS_INIT_INTERVALS_KV 128
#else
#define THREADS_INIT_INTERVALS_KO 128
#define THREADS_INIT_INTERVALS_KV 128
#endif
// How many intervals are generated by one thread. Has to be power of 2. Min value is 2.
#if DATA_TYPE_BITS == 32
#define ELEMS_INIT_INTERVALS_KO 2
#define ELEMS_INIT_INTERVALS_KV 2
#else
#define ELEMS_INIT_INTERVALS_KO 2
#define ELEMS_INIT_INTERVALS_KV 2
#endif


/* ------------ GENERATE INTERVALS KERNEL ----------- */

// How many threads are used per one thread block for kernel, which generates intervals.
// Has to be power of 2.
#if DATA_TYPE_BITS == 32
#define THREADS_GEN_INTERVALS_KO 256
#define THREADS_GEN_INTERVALS_KV 128
#else
#define THREADS_GEN_INTERVALS_KO 128
#define THREADS_GEN_INTERVALS_KV 128
#endif
// How many intervals are generated by one thread. Has to be power of 2. Min value is 2.
#if DATA_TYPE_BITS == 32
#define ELEMS_GEN_INTERVALS_KO 2
#define ELEMS_GEN_INTERVALS_KV 2
#else
#define ELEMS_GEN_INTERVALS_KO 2
#define ELEMS_GEN_INTERVALS_KV 2
#endif

#endif

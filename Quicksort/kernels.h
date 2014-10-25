#ifndef KERNELS_H
#define KERNELS_H

__global__ void quickSortGlobalKernel(el_t *input, el_t *output, d_gparam_t *globalParams, uint_t *seqIndexes,
                                      uint_t tableLen);
__global__ void quickSortLocalKernel(el_t *input, el_t *output, lparam_t *localParams, uint_t tableLen,
                                     bool orderAsc);

#endif

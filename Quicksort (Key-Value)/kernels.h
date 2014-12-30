#ifndef KERNELS_H
#define KERNELS_H


__global__ void minMaxReductionKernel(data_t *input, data_t *output, uint_t tableLen);
__global__ void quickSortGlobalKernel(
    data_t *dataKeys, data_t *dataValues, data_t *bufferKeys, data_t *bufferValues, data_t *pivotValues,
    d_glob_seq_t *sequences, uint_t *seqIndexes
);
template <order_t sortOrder>
__global__ void quickSortLocalKernel(
    data_t *dataKeysGlobal, data_t *dataValuesGlobal, data_t *bufferKeysGlobal, data_t *bufferValuesGlobal,
    loc_seq_t *sequences
);

#endif

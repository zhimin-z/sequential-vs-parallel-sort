#ifndef KERNELS_H
#define KERNELS_H


// Kernel for padding
template <data_t value>
__global__ void addPaddingKernel(data_t *dataTable, uint_t start, uint_t length);

// Bitonic sort kernels
template <order_t sortOrder>
__global__ void bitonicSortCollectSamplesKernel(data_t *dataTable, data_t *localSamples, uint_t tableLen);
template <order_t sortOrder>
__global__ void bitonicSortKernel(data_t *dataTable, uint_t tableLen);

// Bitonic merge kernels
template <order_t sortOrder, bool isFirstStepOfPhase>
__global__ void bitonicMergeGlobalKernel(data_t *dataTable, uint_t tableLen, uint_t step);
template <order_t sortOrder, bool isFirstStepOfPhase>
__global__ void bitonicMergeLocalKernel(data_t *dataTable, uint_t tableLen, uint_t step);

// Kernels for samples and buckets
__global__ void collectGlobalSamplesKernel(data_t *samplesLocal, data_t *samplesGlobal, uint_t samplesLen);
template <order_t sortOrder>
__global__ void sampleIndexingKernel(
    data_t *dataTable, const data_t* __restrict__ samplesGlobal, uint_t * localBucketSizes, uint_t tableLen
);
__global__ void bucketsRelocationKernel(
    data_t *dataTable, data_t *dataBuffer, uint_t *d_globalBucketOffsets, const uint_t* __restrict__ localBucketSizes,
    const uint_t* __restrict__ localBucketOffsets, uint_t tableLen
);

#endif
#ifndef MEMORY_UTILS_H
#define MEMORY_UTILS_H

#include "../Utils/data_types_common.h"
#include "data_types.h"


void allocHostMemory(
    data_t **inputKeys, data_t **inputValues, data_t **outputParallelKeys, data_t **outputParallelValues,
    data_t **outputSequentialKeys, data_t **outputSequentialValues, data_t **outputCorrect,
    data_t **minMaxValues, h_glob_seq_t **globalSeqHost, h_glob_seq_t **globalSeqHostBuffer,
    d_glob_seq_t **globalSeqDev, uint_t **globalSeqIndexes, loc_seq_t **localSeq, double ***timers,
    uint_t tableLen, uint_t testRepetitions
);
void freeHostMemory(
    data_t *inputKeys, data_t *inputValues, data_t *outputParallelKeys, data_t *outputParallelValues,
    data_t *outputSequentialKeys, data_t *outputSequentialValues, data_t *outputCorrect, data_t *minMaxValues,
    h_glob_seq_t *globalSeqHost, h_glob_seq_t *globalSeqHostBuffer, d_glob_seq_t *globalSeqDev,
    uint_t *globalSeqIndexes, loc_seq_t *localSeq, double **timers
);

void allocDeviceMemory(
    data_t **dataKeys, data_t **dataValues, data_t **bufferKeys, data_t **bufferValues, data_t **pivotValues,
    d_glob_seq_t **globalSeqDev, uint_t **globalSeqIndexes, loc_seq_t **localSeq, uint_t tableLen
);
void freeDeviceMemory(
    data_t *dataKeys, data_t *dataValues, data_t *bufferKeys, data_t *bufferValues, data_t *pivotValues,
    d_glob_seq_t *globalSeqDev, uint_t *globalSeqIndexes, loc_seq_t *localSeq
);

#endif

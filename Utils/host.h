#ifndef HOST_UTILS_H
#define HOST_UTILS_H

#include <windows.h>

void startStopwatch(LARGE_INTEGER* start);
double endStopwatch(LARGE_INTEGER start, char* comment);
double endStopwatch(LARGE_INTEGER start);
void fillTableKey(data_t *keys, uint_t tableLen, uint_t interval);
void fillTableKeyValue(data_t *keys, data_t *values, uint_t tableLen, uint_t interval);
void printTable(data_t *table, uint_t tableLen);
void printTable(data_t *table, uint_t startIndex, uint_t endIndex);
void checkMallocError(void *ptr);
uint_t nextPowerOf2(uint_t value);

#endif

#ifndef __OPERATIONS_H
#define __OPERATIONS_H 

#include <stdint.h>

// Rotates A right by n wrapping around
uint32_t RotR(uint32_t A, int shiftAmount);

// Shifts A right by n 
uint32_t ShR(uint32_t A, int shiftAmount);

// Concatenates B onto A
uint64_t AcatB(uint32_t A, uint32_t B);

#endif // __OPERATIONS_H
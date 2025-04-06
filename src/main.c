#include <stdio.h>
#include <stdint.h>

#include "operations.h"

int main ()
{
    uint32_t A = RotR(0u, 0);
    uint32_t B = ShR(0u, 0);
    uint64_t C = AcatB(0u, 0u);

    printf("A: %u\n", A);
    printf("B: %u\n", B);
    printf("C: %llu\n", C);
    
    return 0;
}
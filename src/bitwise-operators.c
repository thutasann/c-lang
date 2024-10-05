#include <stdio.h>

/**
    BITWISE OPERATORS = special operators used in bit level programming
    (knowing binary is important for this topic)
    - & = AND
    - | = OR
    - ^ = XOR
    - << left shift
    - >> right shift
    @todo - to deep dive
 */
void bitWiseOperators() {
    printf("\n------>> bitWise Operators\n");

    int x = 6;  // 6 = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 0 = 00000000

    z = x & y; // 4 = 00000100
    printf("AND = z -> %d\n", z);

    z = x | y; // 14 = 00001110
    printf("OR = z -> %d\n", z);

    z = x ^ y; // 10 = 00001010
    printf("ZOR = z -> %d\n", z);

    z = x << 1; // 12 = 00001100
    printf("1 LEFT SHIFT = z -> %d\n", z);

    z = x << 2; // 24 = 00011000
    printf("2 LEFT SHIFT = z -> %d\n", z);

    z = x >> 1; // 3  = 00000011
    printf("1 RIGHT SHIFT = z -> %d\n", z);

    z = x >> 2; // 1 = 00000001
    printf("2 RIGHT SHIFT = z -> %d\n", z);
}
#include <stdio.h>

void arithmeticOperators() {

    printf("\n------>> Arithmetic Operators \n");

    int x = 5;
    int y = 2;

    float result1 = x / (float)y;

    int result2 = x % y;

    x++;
    y--;

    printf("Result 1 -> %f\n", result1);
    printf("Result 2 -> %d\n", result2);
}
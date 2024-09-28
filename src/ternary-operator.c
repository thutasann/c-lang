#include <stdio.h>

int findMax(int x, int y) {
    return (x > y) ? x : y;
}

// Ternary Operator
void ternaryOperator() {
    printf("\n------>> Ternary Operator\n");

    int max = findMax(5, 3);
    printf("Max %d\n", max);
}
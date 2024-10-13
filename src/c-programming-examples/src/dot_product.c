#include <stdio.h>

float dot_product(float v1[], float v2[], int length);

/**
    ## dot product example
    - v1 = (2, 5, 4)
    - v2 = (3, 2, 1)
    - r = (2 * 3) + (5 * 2) + (4 * 1) = 20
 */
void dot_product_calculation() {
    printf("\n------>> Dot Product Example\n");

    float v1[] = {2, 5, 4};
    float v2[] = {3, 2, 1};
    int length = 3;

    float result = dot_product(v1, v2, length);

    printf("result : %.2f\n", result);
}

float dot_product(float v1[], float v2[], int length) {
    float sum = 0;

    for (int i = 0; i < length; i++) {
        sum += v1[i] * v2[i];
    }

    return sum;
}
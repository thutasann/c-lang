#include <stdio.h>

void add_vetor(float v1[], float v2[], float result[], int length);

/**
    ## vector calculation
    - v1 = (2, 5, 4)
    - v2 = (3, 2, 1)
    - r = v1 + v2 = (5, 7, 5)
 */
void vector_calculation() {
    printf("\n------>> Vector additions\n");

    float v1[] = {2, 4, 5};
    float v2[] = {3, 2, 1};
    float add_result[] = {0, 0, 0};

    add_vetor(v1, v2, add_result, 3);

    for (int i = 0; i < 3; i++) {
        printf("add result[%d]=%.2f\n", i, add_result[i]);
    }
}

// vector addition
void add_vetor(float v1[], float v2[], float result[], int length) {
    for (int i = 0; i < length; i++) {
        result[i] = v1[i] + v2[i];
    }
}
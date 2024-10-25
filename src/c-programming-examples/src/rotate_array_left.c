#include <stdio.h>

void rotate_left_once(int array[], int length);
void rotate_left(int array[], int length, int n);

/**
    Rotating an Array Left
    -Array before
    -index: 0 1 2 3 4 5
    -array: 3 9 8 1 7 6

    -Array after rotating once left
    -index: 0 1 2 3 4 5
    -array: 9 8 1 7 6 3
 */
void rotate_array_left(void) {
    printf("\n------>> Rotate An Array Left\n");

    int a1[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++) {
        printf("initial %d\n", a1[i]);
    }

    rotate_left(a1, 6, 2);

    for (int i = 0; i < 6; i++) {
        printf("after %d\n", a1[i]);
    }
}

/** @private */
void rotate_left(int array[], int length, int n) {
    for (int i = 0; i < n; i++) {
        rotate_left_once(array, length);
    }
}

/** @private */
void rotate_left_once(int array[], int length) {
    int temp = array[0];
    for (int i = 0; i < (length - 1); i++) {
        array[i] = array[i + 1];
    }
    array[length - 1] = temp;
}
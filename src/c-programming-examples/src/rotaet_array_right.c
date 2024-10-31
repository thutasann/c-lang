#include <stdio.h>

void rotate_once_right(int array[], int length);
void rotate_right(int array[], int length, int n);

/**
    ## Rotate Array Right
    - Array Before
    - index: 0 1 2 3 4 5
    - array: 3 9 8 1 7 6
    - Array After rotating once right
    - index: 0 1 2 3 4 5
    - array: 6 3 9 8 1 7
 */
void rotate_array_right(void) {
    printf("\n------>> Rotate An Array Right\n");

    int a1[] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++) {
        printf("initial -> %d\n", a1[i]);
    }

    // rotate_once_right(a1, 6);
    rotate_right(a1, 6, 2);

    for (int i = 0; i < 6; i++) {
        printf("after -> %d\n", a1[i]);
    }
}

/** @private */
void rotate_right(int array[], int length, int n) {
    for (int i = 0; i < n; i++) {
        rotate_once_right(array, length);
    }
}

/** @private */
void rotate_once_right(int array[], int length) {
    int temp = array[length - 1];
    for (int i = (length - 2); i >= 0; i--) {
        array[i + 1] = array[i];
    }
    array[0] = temp;
}
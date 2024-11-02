#include <stdio.h>
#include <stdlib.h>

void without_pointer(void);
void with_pointer(void);

/**
    ## Application: Finding Largest and Smallest Element in an Array
 */
void min_max_in_array(void) {
    printf("\n------>> Application: Finding Largest and Smallest Element in an Array\n");

    without_pointer();
    with_pointer();
}

/** Without Pointer Method */
void without_pointer(void) {
    int arr[] = {23, 45, 6, 98};
    int min = arr[0], max = arr[0];
    for (int i = 1; i < 4; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } else if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("without pointer -> min: %d, max: %d\n", min, max);
}

/** Helper Function to find min and max @private */
void minMax(int arr[], int len, int *min, int *max) {
    *min = *max = arr[0];
    int i;
    for (i = 1; i < len; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        } else if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

/** With Pointer Method */
void with_pointer(void) {
    int a[] = {23, 4, 21, 98, 987, 45, 32, 10, 123, 986, 50, 3, 4, 5};
    int min, max;
    int len = sizeof(a) / sizeof(a[0]);
    minMax(a, len, &min, &max);
    printf("with pointer -> min: %d, max: %d\n", min, max);
}
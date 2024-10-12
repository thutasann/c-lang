#include <stdio.h>

// sum the values in an array
void sum_values_in_array() {
    printf("\n------>> Sum Values in the Array\n");
    int arr[] = {1, 2, 6, 9, 8, 7, 6, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < length; i++) {
        sum += arr[i];
    }

    printf("sum: %d\n", sum);
}
#include <stdio.h>

void print_array(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("item -> %d\n", arr[i]);
    }
}

// reverse an array
void reverse_an_array(void) {
    printf("\n------>> Reverse an array\n");

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    int temp = 0;

    for (int i = 0; i < (length / 2); i++) {
        temp = arr[i];
        arr[i] = arr[length - i - 1];
        arr[length - i - 1] = temp;
    }

    print_array(arr, length);
}
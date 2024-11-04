#include <stdio.h>
#include <stdlib.h>

int non_repeating(int a[], int length);

/**
    Counting Non-Repeating Array Elements
 */
void count_non_repeating_array_elements(void) {
    printf("\n------>> Counting Non-Repeating Array Elements\n");

    int array[] = {1, 3, 5, 7, 3, 7, 6, 6, 4, 2, 9};

    int length = sizeof(array) / sizeof(array[0]);

    int count = non_repeating(array, length);

    printf("Count of non-repeating elements: %d\n", count);
}

int non_repeating(int a[], int length) {
    int i = 0;
    int j = 0;
    int count = 0;

    for (i = 0; i < length; i++) {
        for (j = 0; j < length; j++) {
            if (a[i] == a[j] && i != j) {
                break;
            }
        }

        if (j == length) {
            count++;
        }
    }

    return count;
}

#include <stdbool.h>
#include <stdio.h>

void example_one(int a[], int length);
void example_two(int a[], int length);

/** Bubble Sort */
void bubble_sort(void) {
    int a[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};
    int length = sizeof(a) / sizeof(a[0]);

    example_two(a, length);

    for (int i = 0; i < length; i++) {
        printf("after sorted : %d\n", a[i]);
    }
}

/** Example Two @internal */
void example_two(int a[], int length) {
    printf("\n------>> Bubble Sort Example Two\n");
    bool swaped = false;
    int i = 0;
    do {
        swaped = false;
        for (int j = 0; j < (length - 1 - i); j++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                swaped = true;
            }
        }
        i++;
    } while (swaped);
}

/** Example One @internal */
void example_one(int a[], int length) {
    printf("\n------>> Bubble Sort Example One\n");

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < (length - 1); j++) {
            if (a[j] < a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

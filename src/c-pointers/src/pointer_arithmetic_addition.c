#include <stdio.h>
#include <stdlib.h>

/**
    ## Pointer Arithmetic
    - suppose we have a pointer p, and we have array a,
    - I want to poin the first element of the array using the pointer p
 */
void pointer_arithmetic_addition(void) {
    printf("\n------>> Pointer Arithmetic Addition\n");
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // initialize the pointer to the first element of the array

    printf("Array elements using pointer arithmetic:\n");

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr + i));
    }
}
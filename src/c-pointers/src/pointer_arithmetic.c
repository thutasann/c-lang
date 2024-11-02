#include <stdio.h>
#include <stdlib.h>

/**
    ## Pointer Arithmetic Addition
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

/**
    ## Pointer Arithmetic Subtraction
 */
void pointer_arithmetic_subtraction(void) {
    printf("\n------>> Pointer Arithmetic Subtraction\n");
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[4];

    printf("Array elements in reverse using pointer subtraction:\n");

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(ptr - i));
    }
}

/**
    ## Pointer Arithmetic Increment
 */
void pointer_arithmetic_increment(void) {
    printf("\n------>> Pointer Arithmetic Increment\n");

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element (10)

    printf("Initial value: %d\n", *ptr);

    ptr++;
    printf("After incrementing once: %d\n", *ptr);

    ptr++;
    printf("After incrementing again: %d\n", *ptr);
}

/**
    ## Pointer Arithmetic Decrement
 */
void pointer_arithmetic_drecrement(void) {
    printf("\n------>> Pointer Arithmetic Decrement\n");

    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &arr[3];

    printf("Initial value: %d\n", *ptr);

    ptr--;
    printf("After decrementing once: %d\n", *ptr);

    ptr--;
    printf("After decrementing again: %d\n", *ptr);
}
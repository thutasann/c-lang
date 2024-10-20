#include <stdio.h>

void pointer_basic_usage(void);
void array_traversal(void);
void using_pointers_with_functions(void);

// pointer samples
int main() {

    pointer_basic_usage();
    array_traversal();
    using_pointers_with_functions();

    return 0;
}

/** Pointer Basic Usage */
void pointer_basic_usage() {
    printf("\n------>> Pointer Basic Usage\n");

    int num = 10;
    int *p = &num;

    printf("value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("Pointer p holds addres: %p\n", (void *)p);
    printf("Value at address stored in p: %d\n", *p);
}

/** Array Traversal */
void array_traversal() {
    printf("\n------>> Array traversal\n");

    int arr[] = {10, 20, 30, 40, 50};

    // pointing to the first element of the array
    int *p = arr;
    printf("p -> %p\n", p);

    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i, *(p + i));
    }
}

/** @private */
void increment(int *n) {
    (*n)++;
}

/** Using pointers with functions */
void using_pointers_with_functions() {
    printf("\n------>> Using Pointers with Functions (Pass by Reference)\n");

    int num = 5;
    printf("Before: %d\n", num);

    increment(&num); // passing address of num to that function

    printf("After: %d\n", num);
}
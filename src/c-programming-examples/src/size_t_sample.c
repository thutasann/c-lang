#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void size_of_usage(void);
void strlen_usage(void);
void malloc_usage(void);

/**
    ## size_t
    - is an unsigned data type defined in the C standard library, typically used to represent the size of objects in memory.
    - It is primarily used with functions that deal with memory sizes or
    - the number of elements, such as sizeof or memory-related functions like malloc, calloc, realloc, and strlen.

    ## Key Characteristics
    - Unsigned: size_t can only hold non-negative values.
    - The size of size_t is platform-dependent, meaning on a 32-bit system, it's usually 32 bits, and on a 64-bit system, it's typically 64 bits.
    -
 */
void size_t_sample(void) {
    size_of_usage();
    strlen_usage();
    malloc_usage();
}

// `size_t` is used to store the result of `sizeof`.
void size_of_usage(void) {
    printf("\n------>> size_t sizeof() usage\n");

    int arr[10];
    size_t size = sizeof(arr);

    printf("Size of the array %zu bytes\n", size);
}

// `size_t` stores the length of the string.
void strlen_usage(void) {
    printf("\n------>> size_t strlen() usage\n");

    const char *str = "Hello world!";
    size_t size = strlen(str);

    printf("Length of the string: %zu\n", size);
}

// `size_t` represents memory size.
void malloc_usage(void) {
    printf("\n------>> size_t malloc() usage\n");

    size_t num_elements = 0;
    int *arr = malloc(num_elements * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    free(arr);
}
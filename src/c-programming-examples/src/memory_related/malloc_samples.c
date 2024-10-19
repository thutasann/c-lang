#include <stdio.h>
#include <stdlib.h>

void allocating_memory_for_integer(void);
void allocating_memory_array_of_integers(void);

/**
    ### Malloc Method
    - to allocate a block of memory dynamically at runtime.
    - The memory is allocated from the heap (a portion of memory used for dynamic memory allocation)
    - persists until it is explicitly freed with the free() function.
    - the `malloc()` function takes a single argument, which specifies the size of memory to allocate (in bytes),
    - returns a pointer to the beginning of the allocated block.
    - if the memory allocation fails, (e.g, not enough memory), it returns NULL
    ### Param & return
    - `size_t size`: this is the number of bytes you want to allocate.
    - the `malloc()` function returns a pointer to the allocated memory block.
    - This pointer is `void *`, meaning it is a generic pointer, and you need to cast it to the appropriate type.
 */
int main(void) {

    allocating_memory_for_integer();
    allocating_memory_array_of_integers();

    return 0;
}

// allocating memory for integer
void allocating_memory_for_integer() {
    printf("\n------>> Allocating memory for integer\n");

    printf("sizeof int -> %lu\n", sizeof(int));

    // allocate memory for one integer
    int *p = malloc(sizeof(int));

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    // assign a value to the allocated memory;
    *p = 42;
    printf("Value of p: %d\n", *p);
    printf("Memory of p: %p\n", &p);

    free(p);
}

// allocating memory for an array of integers
void allocating_memory_array_of_integers() {
    printf("\n------>> Allocating memory for an array of integers\n");

    int n = 5;

    int *arr = (int *)(malloc(n * sizeof(5))); // 4 * 5 =

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Array Elements: ");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]:%d\n", i, arr[i]);
    }

    free(arr);
}
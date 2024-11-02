#include <stdio.h>
#include <stdlib.h>

void **create_int_pointer_array(size_t size);
void free_int_pointer_array(void **array, size_t size);

/**
    ## Array of Integer Pointers
 */
void int_pointer_array(void) {
    printf("\n------>> Integer Pointer Array\n");
    size_t size = 5;
    void **intArray = create_int_pointer_array(size);

    if (intArray != NULL) {
        for (size_t i = 0; i < size; i++) {
            printf("Value at index %zu: %d\n", i, *(int *)(intArray[i]));
        }
        free_int_pointer_array(intArray, size);
    }
}

/**
    ## Managing a Dynamically allocated array of pointers
    - Function that creates an array of integer pointers
    - `void **array`: This declares a pointer to a pointer of type void
    - First `*`: This makes it a pointer
    - Second `*`: This makes it a pointer to a pointer
    - `void`: This means it can point to any data type

    ## What is an Array of Pointers ?
    - An array of pointers is exactly what it sounds like - it's an array where each element is a pointer. Instead of storing values directly, it stores memory addresses that point to values.
 */
void **create_int_pointer_array(size_t size) {
    // allocate memory for the array of pointers
    void **array = malloc(size * sizeof(void *));
    if (array == NULL) {
        perror("Failed to allocate memory");
        return NULL;
    }

    // allocate memory for each integer and assign the pointers
    for (size_t i = 0; i < size; i++) {
        array[i] = malloc(sizeof(int));
        if (array[i] == NULL) {
            perror("Failed to allocate memory for integer");
            for (size_t j = 0; j < i; j++) {
                free(array[j]); // free previously allocated memory for integer
            }
            free(array);
            return NULL;
        }

        // initialize the integer value
        *(int *)(array[i]) = (int)(i * 10); // example initialization
    }

    return array;
}

/**
    ## Function to free the allocated memory
 */
void free_int_pointer_array(void **array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        free(array[i]);
    }
    free(array);
}
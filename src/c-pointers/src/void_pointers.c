#include <stdio.h>
#include <stdlib.h>

// `void*` usage for data structure
typedef struct {
    void *data;
    char type;
} GenericContainer;

void dynamic_memory_allocation(void);
void generic_function(void *data, char type);
void print_container(GenericContainer *container);

/**
    ## Void Pointers 🚀
    - a `void` pointer (`void *`) is a generic type that can point to any data type.
    - it does not have a specific data type associated with it,
    - making it vsersatile for handling different types of data.
    - it cannot be directly dereferenced without casting it to a specific pointer

    ### Common Use Cases for void*
    - `void*` allows functions to accept and return pointers of any type such as `malloc`
    - Data Structures like LinkedList, Stacks or Queues may use `void *` pointer to store elements of any type
    - Function Arguments: it enables a function to accept pointers of any type, enhancing reusability
 */
void void_pointers_samples(void) {
    printf("\n------>> Void Pointers\n");

    dynamic_memory_allocation();

    int i = 10;
    float f = 3.14;
    char c = 'A';
    generic_function(&i, 'i');
    generic_function(&f, 'f');
    generic_function(&c, 'c');

    GenericContainer intContainer;
    int value = 25;
    intContainer.data = &value;
    intContainer.type = 'i';

    GenericContainer floatContainer;
    float pi = 3.14159;
    intContainer.data = &pi;
    intContainer.type = 'f';
    print_container(&intContainer);
    print_container(&floatContainer);
}

/** Example 1: Dynamic Memory Allocation */
void dynamic_memory_allocation(void) {
    int *intPtr = malloc(sizeof(int)); // `malloc` returns a void*
    if (intPtr == NULL) {
        perror("Memory allocation falied");
        exit(1);
    }
    *intPtr = 42;
    printf("Integer value %d\n", *intPtr);

    free(intPtr);
}

/** Example 2: Generic Function that takes a `void *` parameter */
void generic_function(void *data, char type) {
    if (type == 'i') {
        printf("Integer %d\n", *(int *)data);
    } else if (type == 'f') {
        printf("Float: %2lf\n", *(float *)data);
    } else if (type == 'c') {
        printf("Character: %c\n", *(char *)data);
    }
}

/** Example 3: Using `void*` in Data Structures */
void print_container(GenericContainer *container) {
    if (container->type == 'i') {
        printf("Integer value : %d\n", *(int *)container->data);
    } else if (container->type == 'f') {
        printf("Float value: %.2lf\n", *(float *)container->data);
    }
}
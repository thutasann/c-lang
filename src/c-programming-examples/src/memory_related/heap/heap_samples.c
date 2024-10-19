#include <stdio.h>
#include <stdlib.h>

void dynamic_array_allocation(void);

/**
    ## Heap Samples
    - the heap is a region of a computer’s memory used for dynamic memory allocation.
    -  Memory on the heap is managed explicitly by the programmer using functions like malloc(), calloc(), realloc(), and free().
    - Unlike stack memory, which is limited in size and automatically managed (for local variables),
    - heap memory can grow or shrink dynamically and remains allocated until explicitly freed.

    ### Keys
    - You must manually allocate and deallocate it.
    - Forgetting to free memory leads to memory leaks.
    - Improper use can lead to issues like segmentation faults or corruption.
 */
int main() {

    printf("\n------>> Heap Samples\n");

    dynamic_array_allocation();

    return 0;
}

// Dynamic Array Allocation on the Heap
void dynamic_array_allocation() {

    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // allocate memory for `n` integers on the heap
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    printf("Array elements: \n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: %d\n", i, arr[i]);
    }

    free(arr);
}
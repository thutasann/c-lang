#include <stdio.h>
#include <stdlib.h>

int *findMid(int a[], int len);

/**
    ## Returing Pointers (Find the Mid of the array)
    - Never ever try to return the address of an `automatic variable` aka `local variable`
 */
void returing_pointers(void) {
    printf("\n------>> Application: Returning Pointers (Find the Mid of the array)\n");
    int a[] = {1, 2, 3, 4, 5};
    int len = sizeof(a) / sizeof(a[0]);
    int *mid = findMid(a, len);
    printf("mid value (address) : %p\n", &mid);
    printf("mid value (value) : %d\n", *mid);
}

/** Find Mid Helper */
int *findMid(int a[], int len) {
    return &a[len / 2];
}
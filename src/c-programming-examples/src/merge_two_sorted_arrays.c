#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int m, int b[], int n, int r[]);

/** Merge two sorted arrays */
void merge_two_sorted_arrays(void) {
    printf("\n------>> Merge two sorted arrays\n");

    int a1[] = {1, 3, 5, 7, 9};
    int a2[] = {2, 4, 5, 6, 8};
    int r[10];
    merge(a1, 5, a2, 5, r);

    for (int i = 0; i < 10; i++) {
        printf("merged: %d\n", r[i]);
    }
}

/** merge util */
void merge(int a[], int m, int b[], int n, int r[]) {
    int i = 0, j = 0, k = 0;

    while (i < m && j < m) {
        if (a[i] < b[j]) {
            r[k] = a[i];
            k++;
            i++;
        } else {
            r[k] = b[j];
            k++;
            j++;
        }
    }

    // elements left to store in a[]
    while (i < m) {
        r[k] = a[i];
        k++;
        i++;
    }

    // elements left to store in b[]
    while (j < m) {
        r[k] = b[j];
        k++;
        j++;
    }
}
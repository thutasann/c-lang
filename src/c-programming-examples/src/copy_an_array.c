#include <stdio.h>
#include <stdlib.h>

void copy_an_var(void);
void copy_array_pointer(void);
void copy_array_hard_code(void);
int *copy_array_dynamic(int *arr, int length);

void copy_an_array() {
    printf("\n------>> Copy an array\n");

    copy_an_var();
    copy_array_pointer();
    copy_array_hard_code();

    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {99, 50, 30, 70, 80, 90, 100, 50};
    int a1_length = sizeof(a1) / sizeof(a1[0]);

    int *a1_copy = copy_array_dynamic(a1, a1_length);

    for (int i = 0; i < a1_length; i++) {
        printf("a1_copy[%d]=%d\n", i, a1_copy[i]);
    }

    printf("a1 pointer : %p\n", a1);
    printf("a1_copy pointer : %p\n", a1_copy);
}

// copy fn to return a pointer to the copy of the array
int *copy_array_dynamic(int *arr, int length) {
    int *c = malloc(length * sizeof(int));

    for (int i = 0; i < length; i++) {
        c[i] = arr[i];
    }

    return c;
}

void copy_array_hard_code() {
    int a[5] = {1, 2, 3, 4, 5};
    int copy[5];

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        copy[i] = a[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("copy[%d] %d\n", i, copy[i]);
    }
}

void copy_array_pointer() {
    int a[] = {1, 2, 3, 4, 5};
    int *b;
    b = a;
    a[0] = 10;
    printf("b[0] -> %d\n", b[0]);
    printf("b: %p, a: %p\n", b, a);
}

void copy_an_var() {
    int x = 5;
    int y;
    y = x;
    x = 2;
    printf("y: %d, x: %d\n", y, x);
}

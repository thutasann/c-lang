#include <stdio.h>

// pointer sample
void pointerSample() {
    printf("\n------>> Pointer Sample\n");

    // a normal integer variable
    int num = 10;

    // pointer to an integer, holding the
    int *ptr = &num;

    printf("value of num --> %d\n", num);
    printf("Address of num --> %p\n", &num);
    printf("Pointer prt holds the address --> %p\n", ptr);
    printf("Value provided by the pointer --> %d\n", *ptr);

    // modify the value of num using pointer
    *ptr = 20;
    printf("New value of num --> %d\n", num);
}
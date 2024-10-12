#include <stdio.h>

// fidn min number in array
void find_min(void) {

    printf("\n------>> Find Min Number in Array\n");

    int myarray[] = {5, 9, 10, 11, 4, 3, 8, 6, 7};
    int size = sizeof(myarray) / sizeof(myarray[0]);
    int min;
    min = myarray[0];

    for (int i = 1; i < size; i++) {
        if (myarray[i] < min)
            min = myarray[i];
    }

    printf("Min : %d\n", min);
}
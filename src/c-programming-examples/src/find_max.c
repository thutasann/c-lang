#include <stdio.h>

// find max in array
void find_max(void) {

    printf("\n------>> Find Max Number in Array\n");

    int myarray[] = {8, 7, 5, 3, 9, 10, 1, 2, 4};
    int size = sizeof(myarray) / sizeof(myarray[0]);
    int max = myarray[0];

    for (int i = 1; i < size; i++) {
        if (myarray[i] > max)
            max = myarray[i];
    }

    printf("Max : %d\n", max);
}
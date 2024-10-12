#include <stdio.h>

// count the occurrences of a value in an array
void count_occurences() {
    printf("\n------>> count occurrences of a value in an array\n");

    int myarray[] = {4, 9, 7, 6, 5, 8, 3, 2, 1, 5};
    int count = 0;
    int to_find = 5;
    int size = sizeof(myarray) / sizeof(myarray[0]);

    for (int i = 0; i < size; i++) {
        if (myarray[i] == to_find) {
            count++;
        }
    }

    printf("Occurrences of 5s : %d\n", count);
}
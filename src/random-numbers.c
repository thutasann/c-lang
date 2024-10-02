#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
    Random Numbers
    - a set of values or elements that are statistically random
    - Don't use these for any sort of cryptographic security
 */
void randomNumbers() {
    printf("\n------>> Random Numbers \n");

    srand(time(0));

    int number1 = (rand() % 6) + 1;
    int number2 = (rand() % 6) + 1;
    int number3 = (rand() % 6) + 1;

    printf("Number 1 --> %d\n", number1);
    printf("Number 2 --> %d\n", number2);
    printf("Number 3 --> %d\n", number3);
}
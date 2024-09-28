#include <stdio.h>

// array strcuture
void arrayStructure() {
    printf("\n------>> Array \n");

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    double units[3];
    units[0] = 5.0;
    units[1] = 10.0;
    units[2] = 29.9;

    printf("price -> %.2lf\n", prices[1]);
    printf("unit -> %.2lf\n", units[1]);
}

// printing an array
void printAnArray() {

    printf("\n------>> Print an Array \n");

    double prices[] = {5.0, 10.0, 15.0, 25.0, 20.0};

    printf("prices array size -> %lu bytes\n", sizeof(prices));

    // first way
    for (int i = 0; i < 5; i++) {
        printf("price %.2lf\n", prices[i]);
    }

    printf("\n");

    // second way
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
        printf("size price %.2lf\n", prices[i]);
    }
}
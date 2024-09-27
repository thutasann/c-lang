#include <stdio.h>

// constant = fixed value that cannot be altered by the program during its execution
void constantsSample() {
    printf("\n------>> Constant Sample \n");

    const float pi = 3.14159;

    // pi = 1232.32; <-- error

    printf("Pi Value %f\n", pi);
}
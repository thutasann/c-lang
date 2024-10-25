#include <stdio.h>

// Output a Triangle of Stars
// *
// **
// ***
// ****
// *****
// ******
// *******
// *********
int main(void) {
    printf("\n------>> Output a Triangle of Stars\n");

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
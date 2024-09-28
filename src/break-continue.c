#include <stdio.h>

/**
    Break vs Continue
    - continue = skips rest of code & forces the next iteration of the loop
    - break = exit a loop/switch
 */
void breakVsContinue() {

    printf("\n------>> Break vs Continue \n");

    for (int i = 1; i <= 5; i++) {
        if (i == 4)
            continue;
        printf("continue --> %d\n", i);
    }

    printf("\n");

    for (int i = 1; i <= 5; i++) {
        if (i == 4)
            break;
        printf("break --> %d\n", i);
    }
}
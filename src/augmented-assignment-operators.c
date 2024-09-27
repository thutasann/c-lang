#include <stdio.h>

/**
    Augmented Assignment Operators
    - used to replace a statement where an operator
    - takes a variable as one of its arguments
    - and then assigns the result back to the same variable
 */
void augmentedAssignmentOperators() {
    printf("\n------>> Augmented Assignment Operators \n");

    int x = 10;

    x += 2;

    printf("X value %d\n", x);
}
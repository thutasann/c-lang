#include <stdio.h>

/**
    ## Function Prototype
    - Function Declaration without a body before main()
    - Ensures that class to a function are made with the correct arguments

    ### Important Notes
    - Many C compilers do not check for parameter matching
    - Missing arguments will result in unexpected behavior
    - A function prototype causes the compiler to flag an error if arguments are missing
 */
void functionPrototype(char name[], int age) {
    printf("\n------>> Function Prototype\n");

    printf("\nHello %s", name);
    printf("\nYou are %d years old \n", age);
}
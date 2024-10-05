#include <stdio.h>

void printAge(int *age) {
    printf("You're %d years old\n", *age);
}

/**
    ## Pointer
    - a `variable-like` reference that holds a memory address to another variable, array etc.
    - some tasks are performed more easily with pointers
    - * = indrection operator (value at address)
    ### Advantages of using pointers
    - less time in program execution
    - working on the original variable
    - with the help of pointers, we can create data strcturs (linked-list, stack, queue)
    - returning more than one values from functions
    - searching and sorting large data very easily
    - dynamically memory allocation
 */
int main() {

    int age = 22;
    // good practice to assign NULL to a pointer if declare
    int *pAge = NULL;
    pAge = &age;

    printf("address of age : %p\n", &age);
    printf("pointer of age : %p\n", pAge);

    printf("****************\n");

    printf("value of age : %d\n", age);
    printf("value at stored address: %d\n", *pAge); // de-referencing

    printf("****************\n");

    printf("size of age: %lu bytes\n", sizeof(age));
    printf("size of pAge: %lu bytes\n", sizeof(pAge));

    printf("****************\n");

    printAge(pAge);

    return 0;
}
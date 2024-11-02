#include <stdio.h>
#include <stdlib.h>

void pointer_types(void);
void pointer_assign(void);

/**
    ## Variable Pointers
    - pointer is a variable that is capable of
    - storing the initial address of the object which it wants to point to.
    - it will simply point to the base address of the initial address of this object
    - Pointing to means it will simply store the base address or the initial adderss of the object
    - Pointer is a special variable that is capable of storing some address.
    - It also points to a memory location where the first byte is stored.

    ## Need of address of operator
    - simply declaring a pointer is not enough
    - its important to initialize pointer before use
    - one way to initialize a pointer is to assign address of some variable.
 */
void variable_pointers(void) {
    printf("\n------>> Merge two sorted arrays\n");

    pointer_types();
    pointer_assign();
}

void pointer_types(void) {
    // pointer to an integer value;
    int *i_ptr;

    // pointer to an character value;
    char *c_ptr;

    // pointer to a float value;
    float *f_ptr;
}

/**
    ## Pointer assign
    - & means `address of opeartor`
    - assign the address of variable `x` to the pointer variable
    - with the help of it, we can assign the integer address to the pointer variable
    - this means that we can now point to this particular location where the value 5 is stored.
 */
void pointer_assign(void) {
    int x = 5;
    int *ptr;
    ptr = &x;

    printf("ptr %p -> \n", ptr);
    printf("*&x %p ->\n", &x);
}
#include <stdio.h>
#include <stdlib.h>

void change_value_of_object(void);
void print_sample(void);

/**
    ## value of operator
    - value of operator / indirection operator / dereference operator
    - is an operator that is used to access the value stored at the location pointed by the pointer.

    ## A word of caution ⚠️
    - Never apply the indirection operator to the uninitialized operator
    - Assigning value to an uninitialized pointer is dangerous
 */
void value_of_operator(void) {
    printf("\n------>> Value of Operator\n");

    print_sample();
    change_value_of_object();
}

/**
    - it says go to the address of object and take what is stored in the object.
 */
void print_sample(void) {
    int x = 5;
    int *ptr;
    ptr = &x;
    printf("value of *ptr -> %d\n", *ptr);
}

/**
    - we can also change the value of the object pointed by the pointer.
    - with the statement `*ptr = 4`
    - can go inside of the variable x and can change teh value ten to four.
    - with the help of derefrence operator, indirection operator or value of operatior `*`
    - can simply go to the particular location and can access the value.
    - after accessing this value `x`
    - with the help of assignment statement, can also change the value
 */
void change_value_of_object(void) {
    int x = 10;
    int *ptr = &x;
    *ptr = 4;
    printf("after updated value of *ptr -> %d\n", *ptr);
}
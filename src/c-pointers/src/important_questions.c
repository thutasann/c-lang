#include <stdio.h>
#include <stdlib.h>

void question_one(void);
void question_two(void);
void question_three(void);
void fun(int *p);

/**
  ## Important Questions related to Pointer
 */
void important_questions(void) {
    printf("\n------>> Important Questions\n");
    question_one();
    question_two();
    question_three();
}

/**
    ### Question 1: Consider the following two statements
    - Solution: In C, * symbol has different meanings depending on the context in which its used.
    - At the time of declaration, * symbol is not acting as an indirection operator.
    - * symbol in the first statement tells the compoiler that p is a pointer to an integer
    - `*p = &i` is wrong, because * symbol indicates the indirection operator and
    - we cannot assign the address to some integer variable.
    - Therefore, in the second statement, there is no need of * symbole in front of p,
    - It simply means we are assigning the address to a pointer.
 */
void question_one(void) {
    int i = 7;
    int *p = &i; // first stmt -> the declaration
    p = &i;      // second stmt -> simple assignment statement
    printf("*p -> %d\n", *p);
}

/**
    ### Qusetion 2:
 */
void question_two(void) {
    int i = 10;
    fun(&i);
    printf("i value: %d\n", i);
}

/**
    ### Question 3: How to print the address of a variable?
    - Solution: use %p as a format specifier in printf function
 */
void question_three(void) {
    int i = 10;
    int *p = &i;
    printf("The address of the variable i is %p\n", p);
}

/**
    ### Question 4: if i is a variable and p points to i,
    - which of the following expressions are aliases of i ?
    - a) *p     b) *&p      c) &p       d) *i       e) *&i
    - Solution: Options (a) and (e) are the aliases of variable i
 */
void question_four(void) {
    int i = 10;
    int *p = &i;
}

// --------------- HELPER FUNCTIONS ---------------

/** helper for question 2 */
void fun(int *p) {
    // the context of this * is
    // is acting like an indirection operator
    // trying to access the location pointed by the poiner p
    *p = 0;
}

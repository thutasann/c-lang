#include <stdio.h>
#include <stdlib.h>

void assignment_sample(void);
void assignment_sample_two(void);

/**
    ## Pointer Assignment
 */
void pointer_assignment(void) {
    printf("\n------>> Pointer Assignment\n");
    assignment_sample();
    assignment_sample_two();
}

/**
    - NOTE: q = p is not same as *q = *p
 */
void assignment_sample(void) {
    int i = 10;
    int *p, *q;
    p = &i;
    q = p;
    printf("p %d, q %d\n", *p, *q);
}

void assignment_sample_two(void) {
    int i = 10, j = 20;
    int *p, *q;
    p = &i;
    q = &j;
    *p = *q;
    printf("p %d, q %d\n", *p, *q);
}

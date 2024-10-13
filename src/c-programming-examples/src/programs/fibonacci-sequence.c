#include <stdio.h>
#include <time.h>

int fib(int num);

/**
    ## Fibonacci sequence
    - the sequence of numbers created by the sum of the two previous numbers
    - starting with 0 and 1.
    - F_0 = 0
    - F_1 = 1
    - F_2 = 1
    - F_3 = 2
    - F_4 = 3
    - F_5 = 5
 */
int main() {

    int term1 = 0;
    int term2 = 1;
    int fibn = 0;
    int length = 0;

    do {
        printf("Enter sequence length: ");
        scanf("%d", &length);
        if (length < 3) {
            printf("Length must be >=3\n");
        }
    } while (length < 3);

    printf("\nIterative solution\n");
    clock_t start_iterative = clock(); // start time
    for (int i = 2; i < length; i++) {
        fibn = term1 + term2;
        printf("%d", fibn);

        term1 = term2;
        term2 = fibn;

        if (i != (length - 1))
            printf(",");
        else
            printf("\n");
    }
    clock_t end_iterative = clock(); // end time
    double time_iterative = (double)(end_iterative - start_iterative);
    printf("Time take for iterative solution: %f seconds \n", time_iterative);

    printf("\nRecursive solution\n");
    clock_t start_recursive = clock(); // start time
    for (int i = 0; i < length; i++) {
        printf("%d", fib(i));
        if (i != (length - 1))
            printf(",");
        else
            printf("\n");
    }
    clock_t end_recursive = clock();
    double time_recursive = (double)(end_recursive - start_recursive);
    printf("Time taken for recursive solution: %f seconds\n", time_recursive);

    return 0;
}

// fib util fn
int fib(int num) {
    if (num > 1)
        return fib(num - 1) + fib(num - 2);
    else if (num == 1)
        return 1;
    else if (num == 0)
        return 0;
    else {
        printf("Error: n must be >= 0");
        return -1;
    }
}
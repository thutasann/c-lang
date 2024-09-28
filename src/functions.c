#include <stdio.h>

// Birthday Fn
void birthday(char name[], int age) {
    printf("\nHappy birthday %s", name);
    printf("\nYou are %d years old \n", age);
}

// Square Fn
double square(double x) {
    double result = x * x;
    return result;
}

// Function, Arguments and Return Statement
void functions() {
    printf("\n------>> Functions\n");

    char name[] = "Thuta";
    int age = 22;

    birthday(name, age);

    double result = square(3);
    printf("Double Result -> %lf\n", result);
}
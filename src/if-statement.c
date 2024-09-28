#include <stdio.h>

// if statements
void ifStmt() {
    printf("\n------>> If Statements \n");

    int age;

    printf("\nEner your age: ");
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are now signed up!\n");
    } else if (age < 0) {
        printf("You haven't born yet");
    } else {
        printf("Too young!");
    }
}
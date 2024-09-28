#include <stdio.h>
#include <string.h>

// for loop = repeats a section of code a limited amount of times
void forLoops() {
    printf("\n------>> for loops \n");

    for (int i = 0; i < 10; i += 3) {
        printf("Test %d\n", i);
    }
}

/**
    while loop = repeats a section of code possible unlimited times
    - WHILE some condition remains true
    - a while loop might not execute at all
 */
void whileLoops() {

    printf("\n------>> while loops \n");

    char name[25];

    printf("\nWhat's your name ? : ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0) {
        printf("\nYou did not enter your name");
        printf("\nWhat's your name ? : ");
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name);
}

/**
    - while loop = checks a condition, THEN executes a block of code if condition is true
    - do while loop = always executes a block of code once, THEN checks a condition
 */
void doWhileLoop() {

    printf("\n------>> do while loops \n");

    int number = 0;
    int sum = 0;

    do {
        printf("Enter a # above 0: ");
        scanf("%d", &number);
        if (number > 0) {
            sum += number;
        }
    } while (number > 0);

    printf("sum %d\n", sum);
}
#include <stdio.h>

// Variables
void variables() {

    printf("\n------>> Variables");

    int x;
    x = 123;
    int y = x + 3;

    int age = 21;
    float gpa = 12.3;
    char grade = 'C';
    char name[] = "Bro"; // array of characters

    int lucky = 23;

    printf("You are %d years old\n", age);
    printf("Hello %s\n", name);
    printf("Y Result is %d\n", y);
    printf("Your Average grade is %c\n", grade);
    printf("Your GPA is %f\n", gpa);

    printf("Lucky value : %i \n", lucky);
    printf("Lucky Address : %p\n", &lucky);
}
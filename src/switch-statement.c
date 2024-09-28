#include <stdio.h>

// switch statement
void switchStatements() {
    printf("\n------>> Switch Statements \n");

    char grade;
    printf("\nEnter a letter grade : ");
    scanf("%c", &grade);

    switch (grade) {
    case 'A':
        printf("perfect!\n");
    case 'B':
        printf("ok!\n");
    default:
        printf("Please enter a valid grade!\n");
    }
}
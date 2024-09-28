#include <stdbool.h>
#include <stdio.h>

// && (AND) Logical Operators
void andLogicalOperator() {

    printf("\n------>> AND Logical Operator\n");

    float temp = 25;
    bool sunny = true;

    if (temp >= 0 && temp <= 30 && sunny) {
        printf("\nThe weather is good!\n");
    } else {
        printf("\nThe weather is bad!\n");
    }
}

// || (OR) Logical Operators
void orLogicalOperator() {
    printf("\n------>> OR Logical Operator\n");

    float temp = -100;

    if (temp >= 0 || temp <= 30) {
        printf("\nThe weather is good!\n");
    } else {
        printf("\nThe weather is bad!\n");
    }
}

// (NOT) ! Logical Operators
void notLogicalOperator() {
    printf("\n------>> Not Logical Operator\n");

    bool sunny = false;

    if (!sunny) {
        printf("\nIt's cloudy outside!\n");
    } else {
        printf("\nIts sunny outside!\n");
    }
}
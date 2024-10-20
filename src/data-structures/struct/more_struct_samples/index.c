#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Point Struct */
struct Point {
    int x;
    int y;
};

/** Student Struct */
struct Student {
    char name[50];
    int age;
    float gpa;
};

void point_sample(void);
void student_sample(void);

/**
    ## Main Function 🚀
 */
int main() {
    point_sample();
    return 0;
}

/** Point Struct Sample */
void point_sample() {
    printf("\n------>> Simple Point Struct\n");

    struct Point p1 = {10, 20};

    printf("Point p1: (%d, %d)\n", p1.x, p1.y);
}

/** Student Struct Sample */
void student_sample() {
    printf("\n------>> Simple Student Struct\n");

    struct Student student1;

    strcpy(student1.name, "John Doe");
    student1.age = 20;
    student1.gpa = 3.8;

    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
}
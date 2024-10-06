#include <stdio.h>

// student strcut
struct Student {
    char name[12];
    float gpa;
};

// array of strcuts
int main() {
    struct Student student1 = {"Spongebob", 3.0};
    struct Student student2 = {"Patrick", 2.5};
    struct Student student3 = {"Sandy", 4.0};
    struct Student student4 = {"Squidward", 2.0};

    struct Student students[] = {student1, student2, student3, student4};

    printf("size --> %lu\n", sizeof(students) / sizeof(students[0]));

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++) {
        printf("student --> %-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}
#include <stdio.h>

typedef struct {
    char name[50];
    int age;
} Person;

int main() {

    printf("---> Typedef with struct \n");

    Person p1 = {"Eve", 40};

    printf("Name %s, Age: %d\n", p1.name, p1.age);

    return 0;
}
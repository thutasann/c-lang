#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Employee Struct */
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    printf("---> Pointers to struct\n");

    struct Employee *emp = (struct Employee *)malloc(sizeof(struct Employee));

    strcpy(emp->name, "Bob");
    emp->id = 101;
    emp->salary = 50000.00;

    // Accessing struct members using pointer
    printf("Name: %s\n", emp->name);
    printf("ID: %d\n", emp->id);
    printf("Salary: %.2f\n", emp->salary);

    free(emp);

    return 0;
}
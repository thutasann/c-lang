#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Address {
    char city[50];
    int zipCode;
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {

    printf("---> Nested Struct\n");

    struct Person person1;

    strcpy(person1.name, "Alice");
    person1.age = 25;
    strcpy(person1.address.city, "New York");
    person1.address.zipCode = 100001;

    // Accessing values
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("City: %s\n", person1.address.city);
    printf("Zip Code: %d\n", person1.address.zipCode);

    return 0;
}
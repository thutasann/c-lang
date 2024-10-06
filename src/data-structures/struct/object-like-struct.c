#include <stdio.h>
#include <string.h>

// Define a struct to present a Person
struct Person {
    char name[50];
    int age;
    float height;
};

// display person util
void displayPerson(struct Person p) {
    printf("Name : %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height; %f\n", p.height);
}

int main() {
    struct Person person1;

    strcpy(person1.name, "Thuta");
    person1.age = 22;
    person1.height = 1.75;

    displayPerson(person1);

    return 0;
}
#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

void displayPerson(struct Person p) {
    printf("Name: %s\n", p.name);
    printf("Age: %d\n", p.age);
    printf("Height: %f\n", p.height);
}

int main() {

    // an array of 3 person objects
    struct Person person[3];

    strcpy(person[0].name, "Thuta");
    person[0].age = 30;
    person[0].height = 1.25;

    strcpy(person[1].name, "Bob");
    person[1].age = 25;
    person[1].height = 1.75;

    strcpy(person[2].name, "Charlie");
    person[2].age = 28;
    person[2].height = 1.80;

    int size = sizeof(person) / sizeof(person[0]);

    for (int i = 0; i < size; i++) {
        printf("\nPerson %d details: \n", i + 1);
        displayPerson(person[i]);
    }

    return 0;
}
#include <stdio.h>
#include <string.h>

void userInput() {

    printf("\n------>> User Input \n");

    char name[25];
    int age;

    printf("What's your name ? ");
    // scanf("%s", name);
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0'; // prevent next line

    printf("How old are you ? ");
    scanf("%d", &age);

    printf("Hello %s, how are you ? ", name);
    printf("You are %d years old\n", age);
}
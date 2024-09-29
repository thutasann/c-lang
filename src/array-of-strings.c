#include <stdio.h>
#include <string.h>

// array of strings
void arrayOfStrings() {
    printf("\n------>> array of strings \n");

    char cars[][10] = {"Mustang", "Coverette", "Camaro"};

    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++) {
        printf("car -> %s\n", cars[i]);
    }
}
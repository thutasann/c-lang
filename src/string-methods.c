#include <stdio.h>
#include <string.h>

// String Methods
void stringMethods() {
    printf("\n------>> String Methods \n");

    char string1[] = "Thuta";
    char string2[] = "Sann";

    // strcpy(string1, string2);     // copy string2 to string1
    // strncpy(string1, string2, 2); // copy n characters of string2 to string1
    // strcat(string1, string2); // append string2 to end of string 1
    // strncat(string1, string2, 1); // append n characters of string2 to end of string 1

    int strLength = strlen(string1);
    int compareResult = strcmp(string1, string2); // string compare characters;

    printf("string 1 -> %s\n", string1);
    printf("string 2 -> %s\n", string2);
    printf("string 1 length -> %d\n", strLength);
    printf("string compare result -> %d\n", compareResult);
}
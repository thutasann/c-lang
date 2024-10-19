#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// concatenate two strings
char *concatenate_string(const char *str1, const char *str2) {

    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int totalLen = len1 + len2;

    // allocate memory on the heap for the concatenated string
    char *result = (char *)malloc(totalLen * sizeof(char));

    if (result == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    // copy the first string to the allocated memory
    strcpy(result, str1);

    // append the second string to the allocated memory
    strcat(result, str2);

    return result;
}

int main() {

    char str1[] = "Hello, ";
    char str2[] = "World!;";

    char *result = concatenate_string(str1, str2);

    printf("result: %s\n", result);

    free(result);

    return 0;
}
#include <stdio.h>
#include <string.h>

void using_strlen(void);
int manually_find_function(char *string);

void manually_find_length_of_string(void) {
    printf("\n------>> Manually Find Length of String\n");

    using_strlen();

    char *s1 = "This is the way.";
    int length = manually_find_function(s1);
    printf("Length of manually found string: %d\n", length);
}

void using_strlen(void) {
    char *s1 = "This is the way.";
    int length = strlen(s1);
    printf("Length of string: %d\n", length);
}

int manually_find_function(char *string) {
    int length = 0;
    while (string[length] != '\0') {
        length++;
    }
    return length;
}
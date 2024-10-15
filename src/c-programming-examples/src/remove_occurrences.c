#include <stdio.h>

void remove_char(char *string, char r);

// removing all occurrences of a character from a string
void remove_occurrences() {
    printf("\n------>> removing all occurrences of a char in a string\n");

    char s1[] = "A string with some words!";
    printf("s1 before : %s\n", s1);
    remove_char(s1, 'i');
    printf("s1 after : %s\n", s1);
}

/**
    ## reomve character
    - we've got a string here.
 */
void remove_char(char *string, char r) {
    int pos = 0;

    while (string[pos] != '\0') {
        if (string[pos] == r) {
            int newpos = pos;
            while (string[newpos] != '\0') {
                string[newpos] = string[newpos + 1];
                newpos++;
            }
        } else {
            pos++;
        }
    }
}
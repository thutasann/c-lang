#include <stdio.h>
#include <string.h>

void replace(char *string, char replace, char new);

// Replace a character in a string with another character
void replace_char_with_another() {
    printf("\n------>> Replace Character with another Character\n");

    char s1[] = "This is my string!";
    replace(s1, 'i', 'Z');
    printf("after replaced: %s\n", s1);
}

void replace(char *string, char replace, char new) {
    int slen = strlen(string);

    for (int i = 0; i < slen; i++) {
        if (string[i] == replace)
            string[i] = new;
    }
}
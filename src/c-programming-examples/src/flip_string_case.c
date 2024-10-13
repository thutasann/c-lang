#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Flip a string's lowercase characters to uppercase and vice versa
void flip_string_lowercase() {
    printf("\n------>> Flip String Lowercase\n");

    char s[] = "abcdeABCDE";

    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
        } else if (islower(s[i])) {
            s[i] = toupper(s[i]);
        }
    }

    printf("Output; %s\n", s);
}
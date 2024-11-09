#include <stdio.h>

/** Null Terminator in the string */
void null_terminator(void) {
    printf("\n------>> Null Terminator\n");

    const char str[] = "Hello";

    for (int i = 0; str[i] != '\0'; i++) {
        printf("char -> %c\n", str[i]);
    }
}

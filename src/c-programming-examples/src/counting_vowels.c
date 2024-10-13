#include <ctype.h>
#include <stdio.h>
#include <string.h>

int vowel_counts(char *s);

// counting vowels (a,e,i,o,u) in a string
void counting_vowels() {
    printf("\n------>> Counting vowels in a string\n");

    char s1[] = "It's a wonderful life";

    int result = vowel_counts(s1);

    printf("vowels count : %d\n", result);
}

int vowel_counts(char *s) {
    int length = strlen(s);
    int count = 0;

    for (int i = 0; i < length; i++) {
        switch (toupper(s[i])) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        default:
            break;
        }
    }

    return count;
}
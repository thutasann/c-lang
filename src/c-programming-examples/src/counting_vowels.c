#include <ctype.h>
#include <stdio.h>
#include <string.h>

// counting vowels (a,e,i,o,u) in a string
void counting_vowels() {
    printf("\n------>> Counting vowels in a string\n");

    char s1[] = "It's a wonderful life";
    int length = strlen(s1);
    int count = 0;

    for (int i = 0; i < length; i++) {
        switch (toupper(s1[i])) {
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

    printf("vowes count : %d\n", count);
}

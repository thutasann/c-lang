#include <stdio.h>
#include <string.h>

// Remove all Vowels from A String
void remove_all_vowels_from_string(void) {
    printf("\n------>> Remove All Vowels From a string\n");

    char s[] = "This is the way.";
    int curpos = 0;
    int newpos = 0;

    while (curpos < strlen(s)) {
        if (!(s[curpos] == 'a' || s[curpos] == 'e' || s[curpos] == 'i' || s[curpos] == 'o' || s[curpos] == 'u')) {
            s[newpos] = s[curpos];
            newpos++;
        }
        curpos++;
    }
    s[newpos] = '\0';

    printf("new string: %s\n", s);
}

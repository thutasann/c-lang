#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int word_count(char *string, char *word);

// count occurrences of a word in a string
void count_occurrences_string() {
    printf("\n------>> counting occurrences of a word in a string\n");

    char s[] = "It is in this string once.";
    char w[] = "It";
    int count = word_count(s, w);
    printf("count: %d\n", count);

    char s2[] = "A string with some words in it.";
    char w2[] = "w";
    int count_two = word_count(s2, w2);
    printf("count_two: %d\n", count_two);
}

/**
    ### word count util
    - example string `A string with some words in it.`
    - with - 4
    - check every position in the string for the word
    - check to see if the word occurs starting at every posiition in the string
 */
int word_count(char *s, char *word) {
    int slen = strlen(s);
    int wlen = strlen(word);
    int end = slen - wlen + 1;
    int count = 0;

    // i is keeping track of our current position in the string
    for (int i = 0; i < end; i++) {
        bool word_found = true;

        // j is keeping track of our current position in the word
        for (int j = 0; j < wlen; j++) {
            if (word[j] != s[i + j]) {
                word_found = false;
                break;
            }
        }

        if (word_found)
            count++;
    }

    return count;
}
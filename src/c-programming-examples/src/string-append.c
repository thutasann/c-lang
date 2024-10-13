#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_append(char *s1, char *s2);

// string append (concatenation) with dynamic memory allocation
void string_append_concat() {
    printf("\n------>> String append\n");

    // [22] to append second string and for enough memory space
    char first[22] = "First ";
    char second[10] = "Second";
    strcat(first, second);
    printf("first: %s\n", first);
    printf("second: %s\n", second);

    //------------------------ Dynamic

    char s1[] = "abc";
    char s2[] = "wxyz";
    char *s = string_append(s1, s2);
    printf("dynamic result: %s\n", s);
    free(s);
}

/**
    ## string append fn with dynamic memory allocation
    - util function to return a pointer
    - to the new string on the heap
    - two args are going to allocate space on the heap for the new string
    - that is enough to fit both of them

    ### Steps
    - make space for a new string on the heap
    - that can store a new string that's large enough to contain both s1 and s2
    - use `strlen` for both s1 and s2 to figure out how much space to store the new string

    ### Example
    - s1 - "abc" <- s1_length = 3
    - a  b  c  \0 <- data of the string
    - 0  1  2  3 <- indexes
    - s2 - "wxyz" <- s2_length = 4
    - w  x  y  z  \0 <- data of the string
    - 0  1  2  3  4  <- indexes
    - s <- new string
    - a  b  c  w  x  y  z  \0
    - 0  1  2  3  4  5  6  7 <- indexes of new string

    ### Keywords
    - `\0` -> null terminator
 */
char *string_append(char *s1, char *s2) {

    // s1 length
    int s1_length = strlen(s1);

    // s2 length
    int s2_length = strlen(s2);

    // +1 to store the null terminator
    int size = s1_length + s2_length + 1;

    // get space in memory on the heap
    char *s = calloc(size, sizeof(char));

    // s1 append
    for (int i = 0; i < s1_length; i++) {
        s[i] = s1[i];
    }

    // s2 append
    for (int i = 0; i < s2_length; i++) {
        s[s1_length + i] = s2[i];
    }

    // null terminator append
    s[size - 1] = '\0';

    return s;
}
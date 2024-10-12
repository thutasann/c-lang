#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// helper function
bool is_palindrome(char string[]) {

    int middle = strlen(string) / 2;
    int length = strlen(string);

    for (int i = 0; i < middle; i++) {
        if (string[i] != string[length - i - 1]) {
            return false;
        }
    }

    return true;
}

// check is string palidrome
void is_string_palindrome() {
    printf("\n------>> Check string is palidrome or not\n");

    char string1[] = "not a palidrome!";
    char string2[] = "abccba";
    char string3[] = "abcdcba";

    bool result = is_palindrome(string2);
    printf("result : %s\n", result ? "True" : "False");
}
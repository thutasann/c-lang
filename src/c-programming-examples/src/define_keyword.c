#include <stdio.h>

#define PI 3.14159
#define MAX_LENGTH 100
#define SQUARE(x) ((x) * (x))

// `#define` keyword
void identifier_keyword() {
    printf("\n------>> Identifier Keyword\n");

    printf("value of PI: %f\n", PI);
    printf("Maximum length: %d\n", MAX_LENGTH);
}

// marcos with parameters
void marcos_with_parameters() {
    printf("\n------>> Marcos with Parameters\n");

    int num = 5;
    int result = SQUARE(num);
    printf("Square of %d: %d\n", num, SQUARE(num));
}
#include <stdio.h>
#include <string.h>

/**
    swap two strings
    - when use string copy function,
    - if the length of the second argument is less than the first argument,
    - this can lead to unexpected behavior
    - solution one: make these characters arrays the same size
 */
int main() {

    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);

    printf("x = %s\n", x);
    printf("y = %s\n", y);

    return 0;
}
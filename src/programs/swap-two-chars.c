#include <stdio.h>

// swap two chars
int main() {

    char x = 'X';
    char y = 'Y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x = %c\n", x);
    printf("y = %c\n", y);

    return 0;
}
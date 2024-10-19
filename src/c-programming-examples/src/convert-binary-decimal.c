#include <stdio.h>
#include <string.h>

int convert(char *string);

/**
    Convert Binary To Decimal
    - 10101 binary -> 21 decimal
    - 1    0    1     0     1
    - 2^4  2^3  2^2   2^1   2^0
    - 16 + 0  + 4 + 0 + 1
    - result -> 21
 */
void convert_binary_decimal() {

    printf("\n------>> Convert Binary to Decimal\n");

    char s1[] = "10101";
    int val1 = convert(s1);

    printf("string 1 in decimal %d\n", val1);
}

int convert(char *string) {

    int slen = strlen(string);
    int total = 0;
    int decval = 1;

    for (int i = (slen - 1); i >= 0; i--) {
        if (string[i] == '1')
            total += decval;
        decval *= 2;
    }

    return total;
}
#include <ctype.h>
#include <stdio.h>

// Temperature Conversion Program
int main() {

    char unit;
    float temp;

    printf("\nIts the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C') {
        printf("\nEnter the temp in C ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temperature in F is : %.1f\n", temp);
    } else if (unit == 'F') {
        printf("\nEnter the temp in F ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temperature in C is : %.1f\n", temp);
    } else {
        printf("\n %c is not a valid unit of measurement", unit);
    }

    return 1;
}
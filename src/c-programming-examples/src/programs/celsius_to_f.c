#include <stdio.h>

/**
    ## converting celsius to fahrenheit:
    - multiply by 1.8 (or 9/5) and add 32
 */
int main() {
    printf("\n------>> Convert Celsius to Fahrenheit\n");

    double C = 0;
    double start = 0;
    double stop = 0;
    double end = 0;
    double step = 0;
    double F = 0;

    printf("Enter start C Temp : ");
    scanf("%lf", &start);

    printf("Enter end C Temp : ");
    scanf("%lf", &end);

    printf("Enter step value : ");
    scanf("%lf", &step);

    printf("C           F\n");
    for (double C = start; C <= end; C += step) {
        F = (C * 1.8) + 32;
        printf("%-8.2lf %8.2lf\n", C, F);
    }

    return 0;
}
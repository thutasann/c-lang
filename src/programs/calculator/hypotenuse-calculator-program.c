#include <math.h>
#include <stdio.h>

// Hypotenuse calculator program
int main() {

    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A * A + B * B);

    printf("Side C %lf\n", C);

    return 0;
}
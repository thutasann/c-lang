#include <math.h>
#include <stdio.h>
#include <stdlib.h> // required abs function

// Math Functions
void mathFunctions() {
    printf("\n------>> Math Functions \n");

    double A = sqrt(9);
    double B = pow(2, 4);
    double C = round(3.14);
    double D = round(3.14);
    double E = floor(3.99);
    int F = abs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("A -> %lf\n", A);
    printf("B -> %lf\n", B);
    printf("C -> %lf\n", C);
    printf("D -> %lf\n", D);
    printf("E -> %lf\n", E);
    printf("F -> %d\n", F);
    printf("G -> %lf\n", G);
    printf("H -> %lf\n", H);
    printf("I -> %lf\n", I);
    printf("J -> %lf\n", J);
}
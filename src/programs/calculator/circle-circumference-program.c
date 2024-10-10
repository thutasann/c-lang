#include <stdio.h>

// Circle Circumference Program
int main() {

    const double PI = 3.1429;
    double radius;
    double circumference;
    double area;

    printf("\nEnter radius of a circle : ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Circumference Result :>> %lf\n", circumference);
    printf("Area Result :>> %lf\n", area);

    return 0;
}
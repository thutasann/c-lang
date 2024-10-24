#include <stdio.h>

// Area of a Circle
int main(void) {
    printf("\n------>> Area of a Circle\n");

    double radius = 0;
    printf("Enter radius: ");
    scanf("%lf", radius);
    double area = 3.14592 * radius * radius;
    printf("area: %lf\n", area);

    return 0;
}
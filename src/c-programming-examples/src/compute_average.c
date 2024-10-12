#include <stdio.h>

// computer average in the array
void compute_average_in_array() {
    printf("\n------>> Average value in the Array\n");

    double arr[] = {5.2, 9.3, 6.5, 4.1, 7.8};
    int length = sizeof(arr) / sizeof(arr[0]);
    double sum = 0;
    double average = 0;

    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    average = sum / length;

    printf("average: %.2lf\n", average);
}
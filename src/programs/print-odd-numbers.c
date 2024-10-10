#include <stdio.h>

void printOdds(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 == 1) {
            printf("Odd: %d\n", arr[i]);
        }
    }
    printf("**************\n");
}

int countOdds(int arr[], int length) {
    int total_odd = 0;
    for (int i = 0; i < length; i++) {
        if (arr[i] % 2 == 1) {
            total_odd++;
        }
    }
    return total_odd;
}

// print out only odd numbers in the array
int main() {

    // indexes: 0 1 2 3 4 5 6 7 8 9
    int array[] = {2, 5, 9, 17, 15, 14, 20, 21, 3, 1};
    int length = sizeof(array) / sizeof(array[0]);

    printOdds(array, length);
    int totalOdds = countOdds(array, length);
    printf("Total Odds --> %d\n", totalOdds);

    return 0;
}
#include <stdio.h>

/**
    sort an array of integers
    - bubble sort usage
    @param array[] the array to be sorted
    @param size the number of elements in the array
 */
void sortUtil(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// print array util
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("sorted item -> %d\n", array[i]);
    }
}

// sort an array
int main() {

    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};

    int size = sizeof(array) / sizeof(array[0]);

    printf("size -> %d\n", size);

    sortUtil(array, size);

    printArray(array, size);

    return 0;
}
#include <stdio.h>

void bubbleSort(char array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                char temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(char array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("sorted item -> %c\n", array[i]);
    }
}

int main() {

    char array[] = {'F', 'A', 'B', 'D', 'C', 'E'};

    int size = sizeof(array) / sizeof(array[0]);

    bubbleSort(array, size);

    printArray(array, size);

    return 0;
}
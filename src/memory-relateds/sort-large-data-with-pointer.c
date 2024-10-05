#include <stdio.h>

// swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// partition function to quicksort
int partition(int array[], int low, int high) {
    // choose the last element as the pivot
    int pivot = array[high];

    // index of smaller element
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        // if current element is smaller than or equal to pivot
        if (array[j] <= pivot) {
            i++;                        // increment index of smaller element
            swap(&array[i], &array[j]); // swap the smaller element with current element
        }
    }
    swap(&array[i + 1], &array[high]); // swap the pivot with the element at i+1
    return (i + 1);
}

// quick sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        // Recursively sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// print array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int largeData[] = {29, 10, 14, 37, 14, 45, 76, 55, 32, 89, 65, 77, 100, 24, 67, 91};
    int size = sizeof(largeData) / sizeof(largeData[0]);

    printf("Original array:\n");
    printArray(largeData, size);

    quickSort(largeData, 0, size - 1);

    printf("Sorted array:\n");
    printArray(largeData, size);

    return 0;
}
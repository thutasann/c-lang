#include <stdio.h>

/**
    2 Dimensional Array needs to specify
    - maximum amount of arrays within two-dimensional array
    - maximum size of elements withing each of these arrays
 */
void twoDArray() {
    printf("\n------>> 2D Array \n");

    int numbers[][4] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9, 10},
                        {11, 12, 13, 14}};

    // ----------

    int numbersTwo[2][3];
    numbersTwo[0][0] = 1;
    numbersTwo[0][1] = 2;
    numbersTwo[0][2] = 3;
    numbersTwo[1][0] = 4;
    numbersTwo[1][1] = 5;
    numbersTwo[1][2] = 6;

    int rows = sizeof(numbersTwo) / sizeof(numbersTwo[0]);
    int columns = sizeof(numbersTwo[0]) / sizeof(numbersTwo[0][0]);

    printf("rows : %d\n", rows);
    printf("columns : %d\n", columns);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("Number %d\n", numbersTwo[i][j]);
        }
    }
}
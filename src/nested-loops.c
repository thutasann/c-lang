#include <stdio.h>
#include <stdlib.h>

void nestedLoop() {
    printf("\n------>> Nested Loop \n");

    int rows;
    int columns;
    char symbol;

    printf("\nEnter # of rows : ");
    scanf("%d", &rows);

    printf("\nEnter # of columns: ");
    scanf("%d", &columns);

    // scanf("%c");

    printf("\nEnter a symbole to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < columns; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
}
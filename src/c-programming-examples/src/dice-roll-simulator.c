#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// dice roll simulator
void dice_roll(void) {

    printf("\n------>> Dice roll simulator\n");

    srand(time(NULL));

    int dice = 5;
    int roll = 0;

    for (int i = 0; i < dice; i++) {
        roll = rand() % 6 + 1;
        printf("Dice %d: %d\n", i, roll);
    }
}
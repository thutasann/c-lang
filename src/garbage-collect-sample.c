#include <stdio.h>
#include <stdlib.h>

// Garbage Collect Sample
void garbageCollectSample() {

    printf("\n------>> Garbage Collect Sample \n");

    char *str = malloc(4);

    if (str == NULL) {
        printf("Memory Allocation failed\n");
        return;
    }

    str[0] = 'h';
    str[1] = 'e';
    str[2] = 'y';
    str[3] = '\0'; // ending with the null character

    printf("The string is: %s\n", str);

    // use free to release it back the computer's Ram
    free(str);
}
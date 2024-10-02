#include <stdio.h>

int main() {

    FILE *filePointer;

    // open a file for writing ("w" mode) or create it if it doesn't exit
    filePointer = fopen("output.txt", "w");

    if (filePointer == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // write to the file
    fprintf(filePointer, "Hello World!\n");
    fprintf(filePointer, "Writing to a file in C.\n");

    // close the file
    fclose(filePointer);

    printf("Data written to the file successfully.\n");

    return 0;
}
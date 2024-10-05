#include <stdio.h>

void readFile() {

    char file[] = "poem.txt";

    FILE *pF = fopen(file, "r");
    char buffer[255];

    if (pF == NULL) {
        printf("Unable to open file!\n");
    } else {
        while (fgets(buffer, 255, pF) != NULL) {
            printf("content %s\n", buffer);
        }
    }

    fclose(pF);
}

// reading files
int main() {

    readFile();

    return 0;
}
#include <stdio.h>

/** write file */
void writeFile() {

    // example location
    char fileLocationFromDesktop[] = "/Users/thutasann/Desktop/test.txt";
    // file location
    char fileLocation[] = "test.txt";

    FILE *pF = fopen(fileLocation, "w");
    fprintf(pF, "Spongebob Squarepants");
    fclose(pF);
}

/** remove file */
void removeFile() {
    if (remove("test.txt") == 0) {
        printf("That file was deleted succesfully!\n");
    } else {
        printf("That file was NOT deleted!\n");
    }
}

// writing file
int main() {

    writeFile();
    // removeFile();

    return 0;
}
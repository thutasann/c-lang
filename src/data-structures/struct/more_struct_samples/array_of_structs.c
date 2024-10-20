#include <stdio.h>
#include <string.h>

/** Book structure */
struct Book {
    char title[100];
    char author[50];
    int year;
};

int main() {
    printf("---> Array of Structs\n");

    struct Book library[3]; // Array of 3 books

    strcpy(library[0].title, "1984");
    strcpy(library[0].author, "George Orwell");
    library[0].year = 1949;

    strcpy(library[1].title, "The Catcher in the Rye");
    strcpy(library[1].author, "J.D. Salinger");
    library[1].year = 1951;

    strcpy(library[2].title, "To Kill a Mockingbird");
    strcpy(library[2].author, "Harper Lee");
    library[2].year = 1960;

    for (int i = 0; i < 3; i++) {
        printf("Book %d: '%s' by %s, published in %d\n", i + 1, library[i].title, library[i].author, library[i].year);
    }
}
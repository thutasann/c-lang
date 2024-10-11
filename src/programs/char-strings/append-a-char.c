#include <stdio.h>
#include <string.h>

// append a chracter to a string
int main(void) {

    printf("*** Append a character to a string ***\n");

    char buffer[100] = "subscribe";
    char character = 'r';
    // char source[] = "AAA";

    strncat(buffer, &character, 1);

    printf("appended string ==> %s\n", buffer);

    return 0;
}
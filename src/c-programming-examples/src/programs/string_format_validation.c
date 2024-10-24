#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool is_postal_code(char postal_code[]);

// string format validation
int main() {
    printf("\n------>> String Format Validation\n");

    char code1[] = "L8K 4B6";

    if (is_postal_code(code1)) {
        printf("%s is postal code\n", code1);
    } else {
        printf("%s is not a postal code\n", code1);
        }
}

bool is_postal_code(char postal_code[]) {
    if (strlen(postal_code) != 7) {
        return false;
    }

    if (!isalpha(postal_code[0])) {
        return false;
    }

    if (!isdigit(postal_code[1])) {
        return false;
    }

    if (!isalpha(postal_code[2])) {
        return false;
    }

    if (postal_code[3] != ' ') {
        return false;
    }

    if (!isdigit(postal_code[4])) {
        return false;
    }

    if (!isalpha(postal_code[5])) {
        return false;
    }

    if (!isdigit(postal_code[6])) {
        return false;
    }

    return true;
}
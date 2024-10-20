#include <stdio.h>

struct Status {
    unsigned int online : 1;  // 1-bit field
    unsigned int error : 1;   // 1-bit field
    unsigned int retries : 4; // 1-bit field
};

/** Structs with BitFields */
int main() {
    printf("---> Structs with BitFields\n");

    struct Status status = {1, 0, 3};

    printf("Online: %d, Error: %d, Retries: %d\n", status.online, status.error, status.retries);

    return 0;
}
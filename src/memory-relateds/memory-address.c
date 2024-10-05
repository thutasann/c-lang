#include <stdio.h>

/**
    ## Memory Address
    - memory = an array of bytes within RAM (street)
    - memory block = a single unit (byte) within memory, used to hold some value (person)
    - memory address = the address of where a memory block is located (house address)
    ---------
    - think of `memory` as a street with a bunch of different houses and each house is a memory block which can hold some value like they are storing a person
    - memory address is the house address on that street where that memory block is located.
    ---------
    - `char a;` when we declare a variable
    - we are setting some amount of memory blocks to store some value
    - so the memory block that this variable is using up has some memory address
    - `char a = 'X';` if a assign this variable a value,
    - if i was to go into my computer's memory and look for this address,
    -  I would find this character
    ---------
    - imagine we're walking down the street and we're looking for somebody's address
    - so we're going house to house and we find a matching address and if I were to open their front door, I should probably knock and then I would find the character (X)
 */
int main() {

    printf("\n------>> memory address\n");

    // each of these variables is using one block of memory
    // a single block of memory is a byte

    short a = 'X';
    char b = 'Y';
    char c = 'X';
    char d[1];
    int e[3];

    printf("Bytes of a -> %lu\n", sizeof(a));
    printf("Bytes of b -> %lu\n", sizeof(b));
    printf("Bytes of c -> %lu\n", sizeof(c));
    printf("Bytes of d -> %lu\n", sizeof(d));
    printf("Bytes of e -> %lu\n", sizeof(e)); // 4 x 3 = 12

    printf("***********************\n");

    printf("Address of a -> %p\n", &a);
    printf("Address of b -> %p\n", &b);
    printf("Address of c -> %p\n", &c);
    printf("Address of d -> %p\n", &d);
    printf("Address of e -> %p\n", &e);

    return 0;
}
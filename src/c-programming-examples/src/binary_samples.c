#include <stdio.h>
#include <stdlib.h>

/** Binary Sample */
void binary_sample() {
    printf("\n------>> Binary Sample\n");

    int a = 5;
    printf("Decimal: %d\n", a);
    int eightBit = 8;

    printf("Binary : ");

    for (int i = (eightBit - 1); i >= 0; i--) {
        printf("%d", (a >> i) & 1); // right-shift and bitwise AND to isolate each bit
    }

    printf("\n");
}

/**
    ### Binary Data and Files
    - Binary data refers to data stored in files in raw binary format (as opposed to human-readable text).
    - In C, binary files are read and written using file handling functions like fread and fwrite.
 */
void binary_data_and_files() {
    printf("\n------>> Binary Data and Files\n");

    FILE *file;
    int data[] = {1, 2, 3, 4, 5};

    // write the data to a binary file
    file = fopen("data.bin", "wb");
    if (file == NULL) {
        printf("Unable to open file!\n");
    }
    fwrite(data, sizeof(int), 5, file);
    fclose(file);

    // Read the data from the binary file
    int read_data[5];
    file = fopen("data.bin", "rb");
    if (file == NULL) {
        printf("Unable to open file!\n");
    }
    fread(read_data, sizeof(int), 5, file);
    fclose(file);

    // Display the read data
    for (int i = 0; i < 5; i++) {
        printf("data: %d\n", read_data[i]);
    }
}

/**
    ### BitWise Operators
    - Binary is fundamental when working with bitwise operations. C provides operators like & (AND), | (OR), ^ (XOR), ~ (NOT), << (left shift), and >> (right shift) to manipulate data at the bit level.
 */
void bitwise_operators() {
    printf("\n------>> BitWise Opertors\n");

    int a = 5; // Binary: 00000101
    int b = 9; // Binary: 00001001

    // Bitwise AND
    printf("a & b: %d\n", a & b); // Output: 1 (Binary: 00000001)

    // Bitwise OR
    printf("a | b: %d\n", a | b); // Output: 13 (Binary: 00001101)

    // Bitwise XOR
    printf("a ^ b: %d\n", a ^ b); // Output: 12 (Binary: 00001100)

    // Left shift
    printf("a << 1: %d\n", a << 1); // Output: 10 (Binary: 00001010)

    // Right shift
    printf("b >> 1: %d\n", b >> 1); // Output: 4 (Binary: 00000100)
}
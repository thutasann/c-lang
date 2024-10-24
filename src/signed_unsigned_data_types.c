#include <stdio.h>

void signed_data_types(void);
void unsigned_data_types(void);
void overflow_sample(void);

void signed_unsigned_data_types(void) {
    signed_data_types();
    unsigned_data_types();
    overflow_sample();
}

/**
    ## Signed Data Types:
    - A signed data type can represent both positive and negative values.
    - By default, most integer types are signed unless explicitly specified as unsigned.
    - Storage: The most significant bit (MSB) is used to indicate the sign of the number.
    - 0 represents positive numbers.
    - 1 represents negative numbers.
    - Range: The range of signed integers includes both positive and negative numbers.
    - For example, for a signed int on a 32-bit system:
 */
void signed_data_types(void) {
    printf("\n------>> Signed Data Types\n");

    // signed integer can hold negative number
    signed int x = -10;

    printf("Signed int : %d\n", x);
}

/**
    ## Unsigned Data Type
    - An unsigned data type can only represent non-negative numbers (0 and positive values).
    - Storage: All bits are used to store the magnitude of the number, allowing for a larger range of positive values compared to signed types.
    - Range: The range of unsigned integers is from 0 to the maximum positive value. For example, for an unsigned int on a 32-bit system:
 */
void unsigned_data_types(void) {
    printf("\n------>> Unsigned Data Types\n");

    // An unsigned integer cannot hold negative numbers.
    unsigned int x = 10;

    printf("Signed int : %u\n", x);
}

void overflow_sample(void) {

    printf("\n------>> Signed Unsigned Overflow Sample\n");

    unsigned int x = 4294967295; // Maximum value for 32-bit unsigned int
    x += 1;                      // This will cause overflow, resulting in x = 0
    printf("Unsigned int after overflow: %u\n", x);

    signed int y = 2147483647; // Maximum value for 32-bit signed int
    y += 1;                    // This will cause overflow, resulting in undefined behavior
    printf("Signed int after overflow: %d\n", y);
}
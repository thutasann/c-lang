#include <stdbool.h>
#include <stdio.h>

// Data Types
void dataTypes() {

    printf("\n------>> Data Types\n");

    char c = 'C';     // single character %c
    char b[] = "Bro"; // array of characters %s

    float cfloat = 3.142;        // 4 bytes (32 bits of precision) 6 - 7 digits %f
    double d = 2.32342342342342; // 8 bytes (64 bits of precision) 15 - 16 digies %lf

    bool e = true; // 1 byte (true or false) %d

    signed f = 120;        // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short int h = 32767;         // 2 bytes (-32,768 to + 32,767) %d
    unsigned short int i = 6555; // 2 bytes (0 to +65,535) %d

    int j = 2131231231;         // 4 bytes (-2,147,483,648 to + 2,147,483,647) %d
    unsigned int k = 231231231; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 999999391291391;              // 8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 1888888321312031820; // 8 bytes (0 to +19 quintillion) %llu

    printf("Float %0.15f\n", cfloat);
    printf("Double %0.15lf\n", d);
    printf("Boolean %d\n", e);
    printf("Char %c\n", c);
    printf("Char Int %d\n", f);
    printf("Unsigned Char %d\n", g);
    printf("Short Int %d\n", h);
    printf("Unsigned Short int %d\n", i);
    printf("Int %d\n", j);
    printf("Unsigned Int %d\n", k);
    printf("Long Long Int %llu\n", l);
    printf("Unsigned Long Long Int %llu\n", m);
}
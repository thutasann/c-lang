#include <stdio.h>

/** Day Enum */
enum Day { Sun = 1,
           Mon = 2,
           Tue = 3,
           Wed = 4,
           Thu = 5,
           Fri = 6,
           Sat = 7 };

/**
    enums
    - a user defined type of named integer identifiers
    - help to make a program more readable
    - enums are NOT STRINGS, but they can be treated as int
 */
void enums() {
    printf("\n------>> enums \n");

    enum Day today = Tue;
    printf("today --> %d\n", today);

    if (today == 1 || today == 7) {
        printf("Its the weekend! Party time!");
    } else if (today == Sat || today == Sun) {
        printf("Its the weekend! Party time!");
    } else {
        printf("I have to work today!\n");
    }
}
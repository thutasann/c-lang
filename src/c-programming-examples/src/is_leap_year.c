#include <stdbool.h>
#include <stdio.h>

bool check_leap_year(int year);

/**
    ## determine if an year is leap_year
    - if not divisible by 4 -> common year
    - if not divisible by 100 -> leap year
    - if not divisible by 400 -> common year
    - else -> leap year
 */
void is_leap_year() {
    printf("\n------>> Is LeapYear?\n");

    for (int i = 2090; i < 2100; i++) {
        if (check_leap_year(i)) {
            printf("Year %d is a Leap Year \n", i);
        } else {
            printf("Year %d is not a Leap Year \n", i);
        }
    }
}

bool check_leap_year(int year) {
    if (year % 4 != 0)
        return false;
    else if (year % 100 != 0)
        return true;
    else if (year % 400 != 0)
        return false;
    else
        return true;
}
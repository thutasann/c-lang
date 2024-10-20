#include <stdio.h>
#include <string.h>

struct Car {
    char model[50];
    int year;
};

/** print car */
void printCar(struct Car car) {
    printf("Car: %s, Year: %d\n", car.model, car.year);
}

/** update car */
void updateCar(struct Car *car, const char *newModel, const int newYear) {
    strcpy(car->model, newModel);
    car->year = newYear;
}

/**
    ## Passing Structs to Functions
 */
int main() {

    printf("---> Passing structs to Functions\n");

    struct Car car1 = {"Tesla Model S", 2020};

    printCar(car1);

    updateCar(&car1, "Tesla Model X", 2023);

    printCar(car1);

    return 0;
}
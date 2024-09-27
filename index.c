#include <stdio.h>

extern int myVariable;
extern void printVariable();

int main()
{
    printf("Hello world From Index --> \n");
    printf("\" I Like Pizza\" - Thuta");
    printf("\\I like Pizza\\ - Thuta Sann \n");

    printVariable();

    return 0;
}
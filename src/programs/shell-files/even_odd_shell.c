#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;
    char command[50]; // buffer to hold the command

    printf("Enter a number : ");
    scanf("%d", &number);

    // Prepare the command to execute the shell script
    snprintf(command, sizeof(command), "../scripts/check_even_odd.sh");

    int result = system(command);

    // Check if the script executed successfully
    if (result == -1) {
        perror("Error executing script");
        return 1;
    } else {
        printf("Shell script executed successfully.\n");
    }

    return 0;
}
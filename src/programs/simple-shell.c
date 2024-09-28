#include <stdio.h>
#include <stdlib.h>

/**
    ## Simple Shell Script Execute Program
    - Make sure to give it executable permissions by running the following command in your terminal:
    - chmod +x your_script.sh
 */
int main() {

    // path to shell script
    const char *scriptPath = "../scripts/simple_script.sh";

    // execute the shell script
    int result = system(scriptPath);

    if (result == -1) {
        perror("Error executing script");
    } else {
        printf("Shell script executed successfully. \n");
    }

    return 0;
}
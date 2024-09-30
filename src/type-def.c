#include <stdio.h>

/** user typedef */
typedef char user[25];

/** strcut User */
struct User {
    char name[25];
    char password[12];
    int id;
};

/** typedef strcut UserTwo */
typedef struct
{
    char name[25];
    char password[12];
    int id;
} UserTwo;

/**
    ## type def
    - reserved keyword that gives an existing datatype a "nickname"
 */
void typeDef() {
    printf("\n------>> typedef \n");

    user user1 = "typedef Thuta";

    struct User user2 = {"struct Thuta", "password123", 123456};

    UserTwo user3 = {"typedef strcut Thuta", "password123", 123456};

    printf("typedef user1 -> %s\n", user1);
    printf("strcut user2 -> %s\n", user2.name);
    printf("typedef struct user3 -> %s\n", user3.name);
}
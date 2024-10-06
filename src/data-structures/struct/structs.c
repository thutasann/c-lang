#include <stdio.h>
#include <string.h>

/** Player Struct */
struct Player {
    char name[12];
    int score;
};

/**
    ## structs
    - collection of related members ("variables")
    - they can be of different data types
    - listed under one name in a block of memory
    - VERY SIMILAR to classes in other languages (but no method)
 */
int main() {

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Thuta");
    player1.score = 4;

    strcpy(player2.name, "James");
    player2.score = 5;

    printf("player 1 name -> %s\n", player1.name);
    printf("player 1 score -> %d\n", player1.score);

    printf("player 2 name -> %s\n", player2.name);
    printf("player 2 score -> %d\n", player2.score);

    return 0;
}
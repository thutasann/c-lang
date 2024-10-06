#include <ctype.h>
#include <stdio.h>

void resetBoard();
void printBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char winner);

/**
    ## TIC TAC TOE GAME
    - gcc main.c utils.c -o tic-tac-toe && ./tic-tac-toe
*/
int main() {

    printf("*************** Tic Tac Toe ***************\n");

    char winner = ' ';
    char response;

    do {

        winner = ' ';
        response = ' ';

        resetBoard();

        while (winner == ' ' && checkFreeSpaces() != 0) {
            printBoard();

            playerMove();
            winner = checkWinner();

            if (winner != ' ' && checkFreeSpaces() == 0) {
                break;
            }

            computerMove();
            winner = checkWinner();

            if (winner != ' ' && checkFreeSpaces() == 0) {
                break;
            }
        }

        printBoard();
        printWinner(winner);

        printf("\nWould you like to play again? (Y/N): ");
        getchar();
        scanf("%c", &response);
        response = toupper(response);
    } while(response == 'Y');

    printf("THANK FOR PLAYING!....\n");

    return 0;
}

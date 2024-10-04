#include <ctype.h>
#include <stdio.h>

// quiz-game
int main() {

    // questions
    char questions[][100] = {
        "1. What year did the C language debut?:",
        "2. Who is credited with creating C ? :",
        "3: What is the predecessor of C ? : "};

    // options
    char options[][100] = {
        "A: 1969", "B: 1972", "C: 1975", "D. 1999",
        "A. Dennis Ritchie", "B. Nikola Tesla", "C. John Carmack", "D. Doc Brown",
        "A. Object C", "B. B", "C. C++", "D. C#"};

    // answers
    char answers[3] = {'B', 'A', 'B'};

    // number of questions
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    char guess;
    int score = 0;

    printf("🚀 QUIZ GAME....\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("\n********************************\n");
        printf("Question --> %s\n", questions[i]);
        printf("********************************\n");

        for (int j = (i * 4); j < (i * 4) + 4; j++) {
            printf("option --> %s\n", options[j]);
        }

        printf("guess: ");
        scanf("%c", &guess);
        getchar(); // clear \n from input buffer

        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("CORRECT!\n");
            score++;
        } else {
            printf("WRONG!\n");
        }
    }

    printf("\n********************************\n");
    printf("FINAL SCORE -> %d/%d\n", score, numberOfQuestions);
    printf("\n********************************\n");

    return 0;
}
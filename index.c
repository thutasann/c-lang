#include <stdio.h>

void variables();
void dataTypes();
void formatSpecifiers();
void constantsSample();
void arithmeticOperators();
void augmentedAssignmentOperators();
// void userInput();
void mathFunctions();
// void ifStmt();
// void switchStatements();
void andLogicalOperator();
void orLogicalOperator();
void notLogicalOperator();
void functions();
void ternaryOperator();
void functionPrototype(char name[], int age);
void stringMethods();
void forLoops();
// void whileLoops();
// void doWhileLoop();
// void nestedLoop();
void breakVsContinue();
void arrayStructure();
void printAnArray();
void twoDArray();
void garbageCollectSample();
void arrayOfStrings();
void typeDef();

/**
    ## C language kickoff
    - this is the repo where I started learning c language.
    - the purpose is to deep dive into low-level programming.
    - some of the methods are commented out as they include user inputs.
 */
int main() {
    printf("------>> Hello world From Index --> \n");
    printf("\" I Like Pizza\" - Thuta \n");

    variables();
    dataTypes();
    garbageCollectSample();
    formatSpecifiers();
    constantsSample();
    arithmeticOperators();
    augmentedAssignmentOperators();
    // userInput();
    mathFunctions();
    // ifStmt();
    // switchStatements();
    andLogicalOperator();
    orLogicalOperator();
    notLogicalOperator();
    functions();
    ternaryOperator();
    functionPrototype("Thuta", 22);
    stringMethods();
    forLoops();
    // whileLoops();
    // doWhileLoop();
    // nestedLoop();
    breakVsContinue();
    arrayStructure();
    printAnArray();
    twoDArray();
    arrayOfStrings();
    typeDef();

    return 0;
}
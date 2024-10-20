#include <stdio.h>
#include <stdlib.h>

/** Stack Strcucture */
struct Stack {
    int *data;    // pointer to the array that hold stack elements
    int top;      // Index of the top element
    int capacity; // Maximum number of elements the stack can hold
};

/** Function to create a stack with given capacity */
struct Stack *createStack(int capcity) {
    // allocate memory for stack
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));

    stack->capacity = capcity;
    stack->top = -1; // stack is empty initially
    stack->data = (int *)malloc(stack->capacity * sizeof(int));

    return stack;
}

/** Funciton to check if the stack is empty */
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

/** Function to check if the stack is full  */
int isFull(struct Stack *stack) {
    return stack->top == stack->capacity - 1;
}

/** Function to push an element onto the stack */
void push(struct Stack *stack, int value) {
    if (isFull(stack)) {
        printf("Stack overflow!, Cannot push %d\n", value);
        return;
    }

    // increment top and insert value
    stack->data[++stack->top] = value;
    printf("%d pushed to the tack\n", value);
}

/** Function to pop an element from the stack */
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! cannot pop\n");
        return -1;
    }

    // return the top element and decrease top
    return stack->data[stack->top--];
}

/** Function to return the top element of the stack without poping it */
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->data[stack->top];
}

/** Function to free the allocated memory */
void freeStack(struct Stack *stack) {
    free(stack->data);
    free(stack);
}

/**
    Stack Data Structure
    - follows the Last In, First Out (LIFO) principle.
    - using pointers to dynamically allocate memory and store elements.
 */
int main() {
    printf("\n------>> Stack Data Structure\n");

    struct Stack *stack = createStack(5);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Top element is %d\n", peek(stack));
    printf("%d popped from stack\n", pop(stack));
    printf("Top element is %d\n", peek(stack));

    freeStack(stack);

    return 0;
}
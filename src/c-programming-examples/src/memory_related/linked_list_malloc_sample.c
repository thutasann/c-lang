#include <stdio.h>
#include <stdlib.h>

// Linked list node structure
struct Node {
    int data;
    struct Node *next;
};

/**
    ## Linked List node using `malloc()`
    - require dynamic memory allocation since their sizes change during runtime.
 */
int main() {
    printf("size: %lu\n", sizeof(struct Node));

    struct Node *node = (struct Node *)malloc(sizeof(struct Node));

    if (node == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    node->data = 10;
    node->next = NULL;

    printf("Node Data: %d\n", node->data);

    free(node);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Node strcuture with a void pointer to data and a type indicator  */
typedef struct Node {
    void *data;
    char type; // 'i' for int, 'f' for float, 's' for string
    struct Node *next;
} Node;

Node *create_node(void *data, char type);
void print_node(Node *node);
void free_list(Node *head);

/**
    ## Generic Linked List 🚀
    - this is the real life example of using `void *`
    - the `current` variable is needed for traversing the linked list without modifying the original head pointer.
 */
void generic_linked_list(void) {
    printf("\n------>> Generic Linked List (Void Pointer Sample)\n");
    Node *head = NULL;
    Node *current;

    // Add integer node
    int int_data = 42;
    head = create_node(&int_data, 'i');

    // Add float node
    float float_data = 3.14;
    head->next = create_node(&float_data, 'f');

    // Add string node
    char str_data[] = "Hello World!";
    head->next->next = create_node(str_data, 's');

    current = head;
    while (current != NULL) {
        print_node(current);
        current = current->next;
    }

    free_list(head);
}

/** Function to create a new node with any type of data */
Node *create_node(void *data, char type) {
    Node *new_node = (Node *)malloc(sizeof(Node));
    new_node->type = type;
    new_node->next = NULL;

    // allocate memory based on type and copy data
    // - allocate memory to store an value;
    // - copy the actual value from the source to the newly allocated memory;
    switch (type) {
    case 'i':
        new_node->data = malloc(sizeof(int));
        *(int *)new_node->data = *(int *)data;
        break;
    case 'f':
        new_node->data = malloc(sizeof(float));
        *(float *)new_node->data = *(float *)data;
        break;
    case 's':
        new_node->data = malloc(sizeof(strlen((char *)data) + 1));
        strcpy((char *)new_node->data, (char *)data);
        break;
    }

    return new_node;
}

/** Function to print a node's data based on its type */
void print_node(Node *node) {
    if (node == NULL)
        return;

    switch (node->type) {
    case 'i':
        printf("Integer: %d\n", *(int *)node->data);
        break;
    case 'f':
        printf("Float: %.2lf\n", *(float *)node->data);
        break;
    case 's':
        printf("String: %s\n", (char *)node->data);
        break;
    }
}

/**
    Function to free the list
    - The temporary variable is needed because of the order of operations when freeing a linked list. If we tried to free the node directly without storing its reference, we'd lose access to the next pointer before we could move to it. Here's what happens step by step:
 */
void free_list(Node *head) {
    Node *temp;
    while (head) {
        temp = head;
        head = temp->next;
        free(temp->data);
        free(temp);
    }
}
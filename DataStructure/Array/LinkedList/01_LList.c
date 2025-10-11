#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Function to print the linked list
void display(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

int main() {
    // Create nodes using struct keyword
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));

    // Initialize node data and link
    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = NULL;

    // Print the list
    printf("Linked List: ");
    display(head);
    int size = 0;
struct Node* current = head;
while (current != NULL) {
    size++;
    current = current->next;
}
    printf("Size of Linked List: %d\n", size);
    return 0;
}
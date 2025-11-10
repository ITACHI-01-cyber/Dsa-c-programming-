#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in doubly linked list
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to print the list from head to tail
void printList(struct Node* head) {
    struct Node* temp = head;
    printf("List forward: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to print the list from tail to head
void printListReverse(struct Node* tail) {
    struct Node* temp = tail;
    printf("List backward: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

int main() {
    // Create nodes
    struct Node* head = createNode(10);
    struct Node* second = createNode(20);
    struct Node* third = createNode(30);

    // Link nodes together
    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    // Print list forward and backward
    printList(head);
    printListReverse(third);

    return 0;
}

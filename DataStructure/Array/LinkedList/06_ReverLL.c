#include<stdio.h>
#include<stdlib.h>

// REVERSE THE lINKEDLIST
struct Node {
    int data;
    struct Node *next;
};

// Insert node at the end
struct Node* Insert(struct Node* head, int data) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if(head == NULL) {
        head = temp;
    } else {
        struct Node* temp1 = head;
        while (temp1->next != NULL) {
            temp1 = temp1->next;
        }
        temp1->next = temp;
    }
    return head;
}

// Print the linked list
void Print(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

// Reverse the linked list
struct Node* Reverse(struct Node* head) {
    struct Node *current = head;
    struct Node *prev = NULL;
    struct Node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return head;
}

int main() {
    struct Node *head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);

    printf("Original list: ");
    Print(head);

    head = Reverse(head);

    printf("Reversed list: ");
    Print(head);
}
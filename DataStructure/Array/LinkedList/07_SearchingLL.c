#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int search(struct Node* head, int key) {
    struct Node* current = head;
    int position = 1; 

    while (current != NULL) {
        if (current->data == key) {
            return position; 
        }
        current = current->next;
        position++;
    }
    return -1; 
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}


int main() {
    struct Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);
    head->next->next->next = createNode(40);

    printList(head);

    int key = 30;
    int pos = search(head, key);
    if (pos != -1) {
        printf("Element %d found at position %d.\n", key, pos);
    } else {
        printf("Element %d not found in the linked list.\n", key);
    }

    return 0;
}
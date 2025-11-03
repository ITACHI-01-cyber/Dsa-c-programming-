#include <stdio.h>
#include <stdlib.h>

// Deletion of a LinkedList Node at a Given Position

// 1. FIX THE LINKS
// 2. FREE THE SPACE

  struct Node {
    int data;
    struct Node *next;
};

struct Node *head = NULL;

// Insert at the beginning
void Insert(int data) {
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = head;
    head = temp;
}

// Print the linked list
void print() {
    struct Node *temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Delete node at position n (1-based index)
void Delete(int n){
    struct Node *temp1 = head;
    if (n == 1) {
        head = temp1->next;
        free(temp1);
        return;
    }
    int i;
    for (i = 0; i < n - 2; i++) {
        if (temp1 == NULL || temp1->next == NULL) return; // Out of range safety
        temp1 = temp1->next;
    }
    struct Node *temp2 = temp1->next;
    if (temp2 == NULL) return; // Out of range safety
    temp1->next = temp2->next;
    free(temp2);
}

int main() {
    Insert(2);
    Insert(4);
    Insert(5);
    Insert(6); // List will be 6->5->4->2
    print();
    int n;
    printf("Enter the Position: ");
    scanf("%d", &n);
    Delete(n);
    print();
    return 0;
}
    
#include <stdio.h>
#include <stdlib.h>

// Searching in a Linked List

    struct node
    {
        int data;
        struct node *next;
    };

    int main(){
        struct node *head = (struct node*) malloc(sizeof(struct node));
        struct node *second = (struct node*) malloc(sizeof(struct node));
        struct node *third = (struct node*) malloc(sizeof(struct node));

        head -> data = 20;
        head -> next = second;

        second -> data = 45;
        second -> next = third;

        third -> data = 50;
        third -> next = NULL;

        int key = 45;
        int result = search(head, key);

        if (result != -1) {
        printf("Element %d found at position %d\n", key, result);
         } else {
        printf("Element %d not found in the list\n", key);
        }

        printf("The Linked list is: ");
        LinkedList(head);
       

    }

    void LinkedList(struct node *node ){

        while (node  != NULL)
        {
            printf("%d -> ",node -> data);
            node = node -> next;
        }

        printf("NULL \n");
    }

    int search(struct node* head, int key) {
    struct node* current = head;
    int position = 0;
    while (current != NULL) {
        if (current->data == key) {
            return position; // Element found, return position
        }
        current = current->next;
        position++;
    }
    return -1; // Element not found
}


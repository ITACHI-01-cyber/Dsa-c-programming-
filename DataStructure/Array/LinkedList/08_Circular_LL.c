#include<stdio.h>
#include<stdlib.h>

// CIRCULAR LINKED LIST ____________________________________________________________________________________________________________________________________
    // struct Node{
    //     int data;
    //     struct Node *next;
    // };

    // struct Node *insertEnd(struct Node *head, int value){
    //     struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    //     newNode -> data = value;

    //     if(head == NULL){
    //         newNode -> next = newNode;
    //         return newNode;
    //     }

    //     struct Node *temp = head;
    //     while(temp -> next != head){
    //         temp = temp -> next;
    //     }
    //     temp -> next = newNode;
    //     newNode -> next = head;

    //     return head;
    // }

    // void display(struct Node *head){
    //     if(head == NULL){
    //         printf("LIST IS EMPTY: \n");
    //         return;
    //     }

    //     struct Node *temp = head;
    //     do{
    //         printf("%d ->",temp ->data);
    //         temp = temp -> next;
    //     }
    //     while(temp != head); printf("<-back to head -><-\n");
    // }

    // int main(){
    //     struct Node *head = NULL;

    //     head = insertEnd(head,20);
    //     head = insertEnd(head,40);
    //     head = insertEnd(head,80);
    //     head = insertEnd(head,100);

    //     display(head);
    // }

// Traversal over circular linked list____________________________________________________________________________________________________________________________

    struct Node{
        int data;
        struct Node *next;
    };

    struct Node *insertEnd(struct Node *head,int value){
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode -> data = value;

        if(head == NULL){
            newNode -> next = newNode;
            return newNode;
        }

        struct Node *temp = head;
        while (temp -> next != head)
        {
            temp = temp -> next;
        }
        temp -> next = newNode;
        newNode -> next = head;

        return head;
    }

    void display(struct Node *head) {
    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    struct Node *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);

    printf("(back to head)\n");
}

    int main(){
        struct Node *head = NULL;
        head = insertEnd(head,10);
        head = insertEnd(head,20);
        head = insertEnd(head,30);
        head = insertEnd(head,40);
        head = insertEnd(head,50);
        head = insertEnd(head,60);
        head = insertEnd(head,70);

        display(head);
    }
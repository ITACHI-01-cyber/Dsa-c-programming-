#include<stdio.h>
#include<stdlib.h>


// Print Linked list in C using Recursion

    // struct Node{
    //     int data;
    //     struct Node *next;
    // };

    // void Print(struct Node *p){
    //     if (p == NULL) return;
    //     else{
    //     printf("%d -> ",p -> data);
    //     Print(p -> next);
    //     }
    //     printf("NULL\n");
    // }

    // struct Node*Insert(struct Node *head,int data){
    //     struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
    //     temp -> data = data;
    //     temp -> next = NULL;

    //     if(head == NULL) head = temp;
    //     else{
    //         struct Node*temp1 = head;
    //         while(temp1 -> next != NULL) temp1 = temp1 ->next;
    //         temp1 ->next = temp;
    //     }
    //     return head;
    // }

    // int main(){
    //     struct Node *head = NULL;
    //     head = Insert(head,10);
    //     head = Insert(head,20);
    //     head = Insert(head,30); 
    //     head = Insert(head,40);
    //     head = Insert(head,50);
    //     Print(head);
    // }


// Reverse Linked list in C using Recursion

  struct Node{
        int data;
        struct Node *next;
    };

    void Print(struct Node *p){
        if (p == NULL) return;
        else{
        Print(p -> next);
        printf("%d -> ",p -> data);
        }
    }

    struct Node*Insert(struct Node *head,int data){
        struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
        temp -> data = data;
        temp -> next = NULL;

        if(head == NULL) head = temp;
        else{
            struct Node*temp1 = head;
            while(temp1 -> next != NULL) temp1 = temp1 ->next;
            temp1 ->next = temp;
        }
        return head;
    }

    int main(){
        struct Node *head = NULL;
        head = Insert(head,10);
        head = Insert(head,20);
        head = Insert(head,30); 
        head = Insert(head,40);
        head = Insert(head,50);
        Print(head);
        printf("NULL\n");
    }
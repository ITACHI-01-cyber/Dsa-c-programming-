#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* Insert(struct Node *head,int data){

    struct Node* temp1 = (struct Node*) malloc(sizeof(struct Node));
    temp1 -> data = data;
    temp1 -> next = NULL;

    if (head == NULL)
    {
        head = temp1;
    }
    else{
        struct Node *raw = head;
        while (raw -> next != NULL)
        {
                raw = raw -> next;
        }
            raw -> next = temp1;
    }
    return head;
}

void Print(struct Node *head){
    while (head != NULL)
    {
        printf("%d -> ",head -> data);
        head = head -> next;
    }
    printf("NULL \n");
}

int CountNode(struct Node *head){
    int count = 0;
    struct Node *temp = head;
    while (temp != NULL)
    {
        count ++;
        temp = temp -> next;
    }
    return count;
}

int main(){
    struct Node *head = NULL;
    head = Insert(head,10);
    head = Insert(head,20);
    head = Insert(head,30);
    head = Insert(head,40);
    head = Insert(head,50);
    head = Insert(head,60);

    printf("the Linked List is: ");
    Print(head);

    int toalNodes = CountNode(head);
    printf("The Total Number of Node is :- %d\n:",toalNodes);
}
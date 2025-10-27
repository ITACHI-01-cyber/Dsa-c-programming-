#include <stdio.h>
#include <stdlib.h>

// struct node
// {
//     int data;          // Data part of the node
//     struct node *next; // Pointer to the next node
// };

// int main(){

//     struct node *head = (struct node *)malloc(sizeof(struct node)); // Memory allocation for head node
//     struct node *second = (struct node *)malloc(sizeof(struct node)); // Memory allocation for second node
//     struct node *third = (struct node *)malloc(sizeof(struct node)); // Memory allocation for third node

//         head -> data = 10;  // Assign data in first node
//         head -> next = second; // Link first node with second node

//         second -> data = 20;  // Assign data to second node
//         second -> next = third; // Link second node with third node

//         third -> data = 30;  // Assign data to third node
//         third -> next = NULL; // Terminate the list at the third node

//         printf("Linked List: "); 
//         LL(head);  // Function call to print the linked list
//     }

//     void LL(struct node* node){ 
//         while (node != NULL){  // Traverse through the linked list
//             printf(" %d  -> ", node->data); // Print the data of current node
//             node = node->next;  // Move to the next node
//         }
//         printf(" NULL\n");  // Print NULL at the end of the list
//     }


// Alternative Method

struct Node
{
    int data;
    struct Node* next;
};
struct Node*head; // Global variable

void Insert(int x){
   struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = NULL;
    if (head != NULL)
    {
        temp -> next = head;
    }
    head = temp;
}

void print(){
    struct Node *temp = head;
    printf("Linked List : ");
    while (temp != NULL)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
    printf(" NULL\n");
}

int main(){
    head = NULL;
    int n, x;
    printf("How many numbers :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the number :");
        scanf("%d",&x);
        Insert(x);
         print();
    }
}

#include <stdio.h>
#include <stdlib.h>

// TRAVERSE THE LINKED LIST----------------------------------------------------------------------------------------------------

    // struct node{
    //     int data;
    //     struct node *next;
    // };

    // void traverselist(struct node*head){
    //     struct node *temp = head;

    //     if(temp == NULL){
    //         printf("LIST IS EMPTY\n");
    //     }
    //     printf("THE ELEMENTS IN THE LINKED LIST ARE:\n");
    //     while(temp != NULL){
    //         printf("%d -> ", temp -> data);
    //         temp = temp -> next;
    //     }
    //     printf("NULL\n");
    // }

    // struct node *createNode(int data){
    //     struct node *newNode = (struct node*)malloc(sizeof(struct node));
    //       if(newNode == NULL){
    //         printf("Memory allocation fail\n");
    //         exit(1);
    //      }
    //       newNode -> data = data;
    //       newNode -> next = NULL;
    //       return newNode;
    // }

    //     int main(){
    //         struct node *head = createNode(10);
    //         head -> next = createNode(20);
    //         head -> next -> next = createNode(30);
    //         head -> next -> next -> next = createNode(40);

    //         traverselist(head);
         
    //     }

//  INSERTION IN LINKED LIST-------------------------------------------------------------------------------------------------------------------
    
//       #include <stdio.h>
// #include <stdlib.h>

// struct node{
//     int data;
//     struct node *next;
// };

// struct node* createNode(int data) {
//     struct node *newNode = (struct node*)malloc(sizeof(struct node));
//     if (newNode == NULL) {
//         printf("Memory allocation fail\n");
//         exit(1);
//     }
//     newNode->data = data;
//     newNode->next = NULL;
//     return newNode;
// }

// void traverselist(struct node* head) {
//     struct node *temp = head;
//     if (temp == NULL) {
//         printf("LIST IS EMPTY\n");
//         return;
//     }
//     printf("THE ELEMENTS IN THE LINKED LIST ARE:\n");
//     while (temp != NULL) {
//         printf("%d -> ", temp->data);
//         temp = temp->next;
//     }
//     printf("NULL\n");
// }

// struct node* insertAtBeginning(struct node* head, int data) {
//     struct node* newNode = createNode(data);
//     newNode->next = head;
//     head = newNode;
//     return head;
// }

// int main() {
//     struct node *head = createNode(10);
//     head->next = createNode(20);
//     head->next->next = createNode(30);
//     head->next->next->next = createNode(40);

//     printf("BEFORE INSERTION:\n");
//     traverselist(head);

//     head = insertAtBeginning(head, 5);

//     printf("AFTER INSERTION AT BEGINNING:\n");
//     traverselist(head);

//     return 0;
// }


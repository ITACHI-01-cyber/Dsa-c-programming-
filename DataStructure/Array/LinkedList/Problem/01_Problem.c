#include <stdio.h>
#include <stdlib.h>

// Create and display a singly linked list

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Node *head;

// struct Node *Insert(struct Node *head, int data)
// {
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     temp->data = data;
//     temp->next = NULL;

//     if (head == NULL)
//     {
//         head = temp;
//     }
//     else
//     {
//         struct Node *node = head;
//         while (node->next != NULL)
//         {
//             node = node->next;
//         }
//         node->next = temp;
//     }
//     return head;
// }

// void Print(struct Node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d -> ", head->data);
//         head = head->next;
//     }
//     printf("NULL \n");
// }

// int main()
// {
//     struct Node *head = NULL;

//     head = Insert(head, 20);
//     head = Insert(head, 50);
//     head = Insert(head, 250);
//     head = Insert(head, 70);
//     head = Insert(head, 90);

//     Print(head);
// }


// Find Middle of a Linked List
  
//  struct Node
//  {
//     int data;
//     struct Node *next;
//  };

//  struct Node *head;

//  struct Node *Insert(struct Node *head,int data){
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     temp -> data = data;
//     temp -> next = NULL;

//     if(head == NULL){
//         head = temp;
//     }
//     else{
//         struct Node* node = head;
//         while (node -> next != NULL )
//         {
//             node = node -> next;
//         }
//         node -> next = temp;     
//     }
//     return head;
// }

// void print(struct Node *head){
//      while(head != NULL){
//         printf("%d -> ",head -> data);
//         head = head -> next;
//      }
//      printf("NULL \n");
//     }

// void PrintMiddle(struct Node *head){
//     struct Node *slow = head;
//     struct Node *fast = head;

//     if(head != NULL){
//         while (fast != NULL && fast -> next != NULL)
//         {
//             slow = slow -> next;
//             fast = fast -> next -> next;
//         }
//         printf("The middle element is %d\n",slow -> data);
//     }
//     else{
//         printf("The linked list is empty\n");
//     }
// }

// int main(){
//       struct Node *head = NULL;
//         head = Insert(head,20);
//         head = Insert(head,50);
//         head = Insert(head,250);
//         head = Insert(head,70);
//         head = Insert(head,90);


//         print(head);
//         PrintMiddle(head);
//         free(head); 

// }

// Reverse a List 

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// struct Node *head;

// struct Node *Insert(struct Node *head, int data)
// {
//     struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
//     temp->data = data;
//     temp->next = NULL;

//     if (head == NULL)
//     {
//         head = temp;
//     }
//     else
//     {
//         struct Node *node = head;
//         while (node->next != NULL)
//         {
//             node = node->next;
//         }
//         node->next = temp;
//     }
//     return head;
// }

// void Print(struct Node *head)
// {
//     while (head != NULL)
//     {
//         printf("%d -> ", head->data);
//         head = head->next;
//     }
//     printf("NULL \n");
// }

// struct Node *Reverse(struct Node *head){
//     struct Node *curent = head;
//     struct Node *prev = NULL;
//     struct Node *next = NULL;

//     while (curent != NULL)
//     {
//         next = curent -> next;
//         curent -> next = prev;
//         prev = curent;
//         curent = next;
        
//     }
//     head = prev;
//     return head;
// }

// int main()
// {
//     struct Node *head = NULL;

//     head = Insert(head, 20);
//     head = Insert(head, 50);
//     head = Insert(head, 250);
//     head = Insert(head, 70);
//     head = Insert(head, 90);

//     Print(head);
//     printf("Reversing the linked list\n");
//     head = Reverse(head);
//     Print(head);
// }

//  Delete first, middle, and last nodes

    struct Node
    {
        int data;
        struct Node *next;
    };

    struct Node *head;

    
    struct Node *Insert(struct Node *head,int data){
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node));

            temp -> data = data;
            temp -> next = NULL;

        if (head == NULL)
        {
            head = temp;
        }
        else{
            struct Node *node = head;

            while (node != NULL)
            {
                node = node -> next;
            }
            node -> next = temp;
        }
        return head;
    }

    void Print(struct Node*head){

        while (head != NULL)
        {
            printf("%d -> ", head -> data);
            head = head -> next;
        }
        printf("NULL\n");
    }

    void deletionFirst(struct Node *head){
        if(head == NULL){
            return;
        }
        struct Node *temp = head;
        head = head -> next;
        free(temp);
        return head;
    }

    void deletionMiddle(struct Node *head){
        if(head == NULL){
            return;
        }
        struct Node *slow = head;
        struct Node *fast = head;
        struct Node *prev = NULL;

        while (fast != NULL && fast -> next != NULL)
        {
            prev = slow;
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        prev -> next = slow -> next;
        free(slow);
        return head;
    }

    void deletionLast(struct Node *head){
        if(head == NULL){
            return;
        }
        if(head -> next == NULL){
            free(head);
            return NULL;
        }
        struct Node *temp = head;
        while (temp -> next -> next != NULL)
        {
            temp = temp -> next;
        }
        free(temp -> next);
        temp -> next = NULL;
        return;
    }

    int main(){
        struct Node *head = NULL;

        head = Insert(head,20);
        head = Insert(head,50);
        head = Insert(head,250);
        head = Insert(head,70);
        head = Insert(head,90);
        printf("Original Linked List:\n");
        Print(head);
        head = deletionFirst(head);
        printf("After deleting first node:\n");
        Print(head);
        head = deletionMiddle(head);
        printf("After deleting middle node:\n");
        Print(head);
        printf("After deleting last node:\n");
        deletionLast(head);
    }
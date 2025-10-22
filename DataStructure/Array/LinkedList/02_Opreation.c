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

// DELETION IN LINKED LIST (beginning, end, specific position)

// Beginning Deletion ----------------------------------------------------------------------------------------------------------

// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to delete node at the beginning
// void deleteStart(struct Node** head) {
//     if (*head == NULL) {
//         printf("Linked List Empty, nothing to delete\n");
//         return;
//     }
//     struct Node* temp = *head;
//     *head = (*head)->next;
//     printf("Deleted: %d\n", temp->data);
//     free(temp);
// }

// // Function to display the linked list
// void display(struct Node* node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* head = NULL;
//     struct Node* node2 = NULL;
//     struct Node* node3 = NULL;
//     struct Node* node4 = NULL;

//     // Allocate nodes
//     head = (struct Node*) malloc(sizeof(struct Node));
//     node2 = (struct Node*) malloc(sizeof(struct Node));
//     node3 = (struct Node*) malloc(sizeof(struct Node));
//     node4 = (struct Node*) malloc(sizeof(struct Node));

//     // Initialize data and links
//     head->data = 22;
//     head->next = node2;

//     node2->data = 30;
//     node2->next = node3;

//     node3->data = 24;
//     node3->next = node4;

//     node4->data = 20;
//     node4->next = NULL;

//     printf("Linked List Before Deletion: ");
//     display(head);

//     // Deleting nodes from the beginning twice
//     deleteStart(&head);
//     deleteStart(&head);

//     printf("Linked List After Deletion: ");
//     display(head);

//     return 0;
// }

// End---------------------------------------------------------------------------------------------------------------------

//     struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to delete node at the end
// void deleteEnd(struct Node** head) {
//     if (*head == NULL) {
//         printf("Linked List Empty, nothing to delete\n");
//         return;
//     }
//     struct Node* temp = *head;
//     struct Node* prev = NULL;

//     // If only one node in the list
//     if (temp->next == NULL) {
//         printf("Deleted: %d\n", temp->data);
//         free(temp);
//         *head = NULL;
//         return;
//     }

//     // Traverse to the last node
//     while (temp->next != NULL) {
//         prev = temp;
//         temp = temp->next;
//     }
//     prev->next = NULL;  // Disconnect last node
//     printf("Deleted: %d\n", temp->data);
//     free(temp);
// }

// // Function to display the linked list
// void display(struct Node* node) {
//     while (node != NULL) {
//         printf("%d ", node->data);
//         node = node->next;
//     }
//     printf("\n");
// }

// int main() {
//     struct Node* head = NULL;
//     struct Node* node2 = NULL;
//     struct Node* node3 = NULL;
//     struct Node* node4 = NULL;

//     // Allocate nodes
//     head = (struct Node*) malloc(sizeof(struct Node));
//     node2 = (struct Node*) malloc(sizeof(struct Node));
//     node3 = (struct Node*) malloc(sizeof(struct Node));
//     node4 = (struct Node*) malloc(sizeof(struct Node));

//     // Initialize data and links
//     head->data = 10;
//     head->next = node2;

//     node2->data = 20;
//     node2->next = node3;

//     node3->data = 30;
//     node3->next = node4;

//     node4->data = 40;
//     node4->next = NULL;

//     printf("Linked List Before Deletion: ");
//     display(head);

//     // Delete node at end
//     deleteEnd(&head);

//     printf("Linked List After Deletion: ");
//     display(head);

//     return 0;
// }

// deletion specific Position------------------------------------------------------------------------------------------

struct Node {
    int data;
    struct Node* next;
};

// Function to delete node at a specific position (1-based index)
void deleteAtPosition(struct Node** head, int pos) {
    if (*head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }

    struct Node* temp = *head;

    // If deleting the first node
    if (pos == 1) {
        *head = temp->next;
        printf("Deleted: %d\n", temp->data);
        free(temp);
        return;
    }

    struct Node* prev = NULL;
    int count = 1;

    // Traverse to the node to be deleted
    while (temp != NULL && count < pos) {
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) {
        printf("Position does not exist.\n");
        return;
    }

    // Unlink the node from the list
    prev->next = temp->next;
    printf("Deleted: %d\n", temp->data);
    free(temp);
}

// Function to display the linked list
void display(struct Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    struct Node* node2 = NULL;
    struct Node* node3 = NULL;
    struct Node* node4 = NULL;

    // Allocate nodes
    head = (struct Node*) malloc(sizeof(struct Node));
    node2 = (struct Node*) malloc(sizeof(struct Node));
    node3 = (struct Node*) malloc(sizeof(struct Node));
    node4 = (struct Node*) malloc(sizeof(struct Node));

    // Initialize data and links
    head->data = 10;
    head->next = node2;

    node2->data = 20;
    node2->next = node3;

    node3->data = 30;
    node3->next = node4;

    node4->data = 40;
    node4->next = NULL;

    printf("Linked List Before Deletion: ");
    display(head);

    // Delete node at 3rd position
    deleteAtPosition(&head, 3);

    printf("Linked List After Deletion: ");
    display(head);

    return 0;
}
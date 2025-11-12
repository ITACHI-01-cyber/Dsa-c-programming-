#include <stdio.h>
#include <stdlib.h>
// Count occurrences of a value___________________________________________________________________________________________-

//   struct Node{
//         int data;
//         struct Node *next;
//     };

//     void Print(struct Node *p){
//         if (p == NULL) return;
//         else{
//         printf("%d -> ",p -> data);
//         Print(p -> next);
//         }
//     }

//     struct Node*Insert(struct Node *head,int data){
//         struct Node*temp = (struct Node*)malloc(sizeof(struct Node));
//         temp -> data = data;
//         temp -> next = NULL;

//         if(head == NULL) head = temp;
//         else{
//             struct Node*temp1 = head;
//             while(temp1 -> next != NULL) temp1 = temp1 ->next;
//             temp1 ->next = temp;
//         }
//         return head;
//     }

//     int Count(struct Node *head, int key){
//         int count = 0;
//         struct Node *curr = head;
//         while (curr != NULL)
//         {
//             if(curr -> data == key){
//                 count++;
//             }
//             curr = curr -> next;
//         }
//         return count;
//     }

//     int main(){
//         struct Node *head = NULL;
//         head = Insert(head,10);
//         head = Insert(head,20);
//         head = Insert(head,30); 
//         head = Insert(head,30);
//         head = Insert(head,50);
//         Print(head);
//         printf("NULL\n");
//         int key = 30;
//         printf("Occurrences of %d: %d\n", key, Count(head, key));
//     }

// Pairwise node swap_________________________________------    ------------------------------------------------------------------------------------

struct Node {
    int data;
    struct Node* next;
};

// Function to pairwise swap nodes of the linked list
struct Node* pairwiseSwap(struct Node* head) {
    // If list is empty or has only one node
    if (head == NULL || head->next == NULL)
        return head;

    struct Node* newHead = head->next;  // New head will be the second node
    struct Node* prev = NULL;
    struct Node* curr = head;

    while (curr != NULL && curr->next != NULL) {
        struct Node* next = curr->next;
        struct Node* nextPair = next->next;

        // Swap nodes by changing links
        next->next = curr;
        curr->next = nextPair;

        if (prev != NULL) {
            prev->next = next;
        }

        prev = curr;
        curr = nextPair;
    }
    return newHead;
}

// Utility function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Utility function to print linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {
    // Creating a linked list 1->2->3->4->5
    struct Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    printf("Original list:\n");
    printList(head);

    head = pairwiseSwap(head);

    printf("List after pairwise swap:\n");
    printList(head);

    return 0;
}

// Nth node from end___________________________________________________________________________________________-


struct Node {
    int data;
    struct Node *next;
};

void Print(struct Node *p) {
    if (p == NULL) return;
    printf("%d -> ", p->data);
    Print(p->next);
}

struct Node* Insert(struct Node *head, int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
        head = temp;
    else {
        struct Node* temp1 = head;
        while (temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp;
    }
    return head;
}

struct Node* reverseList(struct Node* head) {
    if (head == NULL || head->next == NULL)
        return head;
    struct Node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}

struct Node* nthNodeFromStart(struct Node* head, int n) {
    struct Node* current = head;
    int count = 1;
    while (current != NULL && count < n) {
        current = current->next;
        count++;
    }
    return current;
}

int main() {

    struct Node* head = NULL;
    head = Insert(head, 10);
    head = Insert(head, 20);
    head = Insert(head, 30);
    head = Insert(head, 40);
    head = Insert(head, 50);

    printf("Original list:\n");
    Print(head);
    printf("NULL\n");

    head = reverseList(head);

    printf("Reversed list:\n");
    Print(head);
    printf("NULL\n");

    int n = 2; // get 2nd node from end

    struct Node* nthNode = nthNodeFromStart(head, n);
    if (nthNode != NULL) {
        printf("%dth node from end is %d\n", n, nthNode->data);
    }
    else {
        printf("List is shorter than %d elements\n", n);
    }
    return 0;
}

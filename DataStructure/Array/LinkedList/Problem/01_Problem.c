#include <stdio.h>
#include <stdlib.h>

// Create and display a singly linked list

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;

struct Node *Insert(struct Node *head, int data)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node *node = head;
        while (node->next != NULL)
        {
            node = node->next;
        }
        node->next = temp;
    }
    return head;
}

void Print(struct Node *head)
{
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL \n");
}

int main()
{
    struct Node *head = NULL;

    head = Insert(head, 20);
    head = Insert(head, 50);
    head = Insert(head, 250);
    head = Insert(head, 70);
    head = Insert(head, 90);

    Print(head);
}

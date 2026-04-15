#include <stdio.h>
#include <stdlib.h>

// Self-referencing structure
struct node {
    int data;
    struct node *next;
};

// Display function
void display(struct node *head) {
    struct node *p = head;

    while (p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

// Insert at beginning
struct node* InsertAtBeginning(struct node* head, int value) {

    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));

    // if (newnode == NULL) {
    //     printf("Memory allocation failed\n");
    //     return head;
    // }

    newnode->data = value;
    newnode->next = head;

    head = newnode;

    return head;
}

int main() {

    struct node* head = NULL;

    // Creating initial list
    head = InsertAtBeginning(head, 40);
    head = InsertAtBeginning(head, 30);
    head = InsertAtBeginning(head, 20);

    printf("Initial List:\n");
    display(head);

    int value;
    printf("Enter value to insert at beginning: ");
    scanf("%d", &value);

    head = InsertAtBeginning(head, value);

    printf("After Inserting at Beginning:\n");
    display(head);

    return 0;
}
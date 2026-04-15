#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *next;
};

int display(struct node *first) {
    struct node *p = first;

    while (p != NULL) {
        printf("\t %d", p->data);
        p = p->next;
    }
    return 0;
}

struct node* Getnode(int y) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = y;
    newnode->next = NULL;
    return newnode;
}

void Insertatend(struct node *head, int y) {
    struct node *p = head;
    struct node *q = Getnode(y);

    while (p->next != NULL) {
        p = p->next;
    }

    p->next = q;
}

struct node* getList() {

    struct node *head = Getnode(20);
    struct node *second = Getnode(30);
    struct node *third = Getnode(40);
    struct node *fourth = Getnode(50);

    head->next = second;
    second->next = third;
    third->next = fourth;

    return head;
}

int main() {
    struct node *h = getList();

    display(h);
    printf("\n");
    int t;
    
    printf("Enter the value of last node to insert at last : ");
    scanf("%d", &t);
    Insertatend(h, t);

    printf("\nAfter inserting:\n");
    display(h);

    return 0;
}
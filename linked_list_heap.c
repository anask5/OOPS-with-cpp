    #include <stdio.h>
#include <stdlib.h>

// Self-referencing structure
struct node {
    int data;
    struct node *next;   // pointer to another struct node
};

int main() {
    struct node *head;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *second;
    second = (struct node *)malloc(sizeof(struct node));                   // Defining the struct 
    struct node *third;
    third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth;
    fourth = (struct node *)malloc(sizeof(struct node));
    struct node *p;
    p=head;


    head->data=20;
    head->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=fourth;
    fourth->data=50;
    fourth->next=NULL;
display(head);

    //     while (p->next != NULL) {
    //     printf("\t %d", p->data);
    //     p = p->next;
    // }
    //         printf("\t %d", p->data);
    return 0;
}
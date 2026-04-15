        #include <stdio.h>
    #include <stdlib.h>

    // Self-referencing structure
    struct node {
        int data;
        struct node *next;   // pointer to another struct node
    };

    int display (struct node *first){
        struct node *p;
        p=first;
            while (p != NULL) {
            printf("\t %d", p->data);
            p = p->next;
            }
            return 0;
    }

    struct node *getList(){
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

    int Getnode(int y){
           struct node *head;
        head = (struct node *)malloc(sizeof(struct node));
        head->data=y;
        head->next; = NULL
        return 0;
    }

    int Insertatend(struct node *head, int x){
        struct node *p,*q;
        p=head;
        q=Getnode(x);
        while(p->next != NULL) {
            p = p->next;
        }
        p->link=q;

        return 0;
    }

        head->data=20;
        head->next=second;
        second->data=30;
        second->next=third;
        third->data=40;
        third->next=fourth;
        fourth->data=50;
        fourth->next=NULL;
        
        return head;
    }
    int main() {
    struct node *h;
    h=getList();
    display(h);
    Insertattend(h, 77)
    display(h);
        return 0;
    }
#include <stdio.h>

// Self-referencing structure
struct node {
    int data;
    struct node *link;   // pointer to another struct node
};

int main() {
 // this is under stack memory not heap
    struct node *p;

    struct node a = {5, NULL};
    struct node b = {4, NULL};
    struct node c = {3, NULL};
    struct node d = {2, NULL};

    a.link = &b;
    b.link = &c;
    c.link = &d;

    p = &a;

    while (p != NULL) {
        printf("\t %d", p->data);
        p = p->link;
    }

    return 0;
}
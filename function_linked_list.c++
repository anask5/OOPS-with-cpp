#include <iostream>
using namespace std;


//A linked list is a linear data structure in which elements are connected using pointers.

// Each element is called a node.

// Each node contains:

// Data + Address of next node

class Node {
    public:
    int data;
    Node *next;
};

void display(Node *head){
    Node *p = head;
    while(p != NULL){
        cout<< p->data << "->";
        p=p->next;
    }
    cout<<"NULL";
}

Node * getnode() {
        Node * head = new Node();
    Node * second = new Node();
    Node * third = new Node();
    Node * four = new Node();
    Node * five = new Node();
    
    
    head->data=10;
    head->next=second;
    
    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=four;
    
    four->data=40;
    four->next=five;
    
    five->data=50;
    five->next=NULL;
    
    return head;
    
}
int main(){
    
    Node *head = getnode();

    
    display(head);
    
    
    return 0;
}
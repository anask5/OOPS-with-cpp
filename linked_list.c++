#include <iostream>
using namespace std;

class Node {
    public: 
    int data;
    Node *next;
};

void display(Node* head){
    Node *p = head;
    
    while (p != NULL) {
        
        cout << p->data << "->";
        p = p->next;
    }
        cout << "NULL";
    
}

int main(){
    Node * head = new Node();  // Replaces Malloc with new
    Node * second = new Node();
    Node * third = new Node();
    Node * four = new Node();
    
    head->data=20;
    head->next=second;
    
    second->data=40;
    second->next=third;
    
    
    third->data=60;
    third->next=four;
    
    four->data=80;
    four->next=NULL;
    
    display(head);
    
    return 0;
    
}
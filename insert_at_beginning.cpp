#include <iostream>
using namespace std;


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

Node * Insertatbeg(Node * head, int value) {
    Node * newNode = new Node();
    
    newNode->data = 5;
    newNode->next = head;
    
    head = newNode;
    
    return head;
}
int main(){
    Node* head = getnode();

    cout << "Original List:\n";
    display(head);

    head = Insertatbeg(head, 5);
    cout << endl;
    cout << "After Insert at Beginning:\n";
    display(head);
    
    
    return 0;
}   
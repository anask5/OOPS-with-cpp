#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
};
void display (Node * head) {
     Node * p = head;
    
    while(p!= NULL){
        cout<<p->data<<" -> ";
        p=p->next;
    }
    cout<<"NULL";
    
}

Node* insertatbeg(Node * head, int value){
    Node * newNode = new Node();
    newNode->data=value;
    newNode->next=head;
    
    head = newNode;
    
    return head;
}

Node * delatbeg(Node * head){
    Node * temp = head;
    head = head->next;
    
    delete temp;
    
    return head;
}

Node* delatend(Node *head){
    Node *p = head;
    Node *q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    delete q;
    
    return head;
}

Node * insertatend(Node * head, int value){
    Node * newNode = new Node();
    Node * p = head;
    newNode->data=value;
    newNode->next=NULL;
    
    
    while(p->next!= NULL){
        p = p->next;
    }
    p->next = newNode;
    
    return head;
    
    
}

int main(){
    Node * head = new Node();
    Node * second = new Node();
    Node * third = new Node();
    Node * fourth = new Node();
    Node * fifth = new Node();
    
    
    head->data=10;
    head->next=second;
    second->data=20;
    second->next=third;
    third->data=30;
    third->next=fourth;
    fourth->data=40;
    fourth->next=fifth;
    fifth->data=50;
    fifth->next=NULL;
    
//  head = insertatbeg(head, 4);
//  head = delatbeg(head);
// delatend(head);

insertatend(head, 55);
    display(head);
}
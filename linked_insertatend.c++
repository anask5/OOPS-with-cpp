#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * next;
};


Node * insertatend( Node * head, int value) {
    Node * newNode = new Node();
    newNode->data=value;
    Node * p = head;
    while (p->next!=NULL){
       p = p->next;
    }
    p->next= newNode;
    
    return head;
}
void display (Node * head) {
     Node * p = head;
    
    while(p!= NULL){
        cout<<p->data<<" -> ";
        p=p->next;
    }
    cout<<"NULL";
    
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
    
   head = insertatend(head, 60);
   head = insertatend(head, 70);
    
    display(head);
}
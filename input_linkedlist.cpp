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
        cout << p->data << "->";
        p = p->next;
    }
     cout << "NULL";
    
}

int getdata(int &a, int &b, int &c,int &d, int &e){
       
    
    cout << "Enter Value of First Node  :  ";
    cin >> a;
    cout << "Enter Value of Second Node  :  ";
    cin >> b;
    cout << "Enter Value of Third Node  :";
    cin >> c;
    cout << "Enter Value of Four Node  :";
    cin >> d;
    cout << "Enter Value of Five Node  :";
    cin >> e;
    return 0;
}

int main(){
     int a,b,c,d,e; 
    getdata(a,b,c,d,e);
    
    Node * head = new Node();
    Node * second = new Node();
    Node * third = new Node();
    Node * four = new Node();
    Node * five = new Node();
    
    
    head->data = a;
    head->next = second;
    
    second->data=b;
    second->next=third;
    
    
    third->data=c;
    third->next=four;
    
    four->data=d;
    four->next=five;
    
    
    five->data=e;
    five->next=NULL;
    
    
    display(head);
    
    return 0;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
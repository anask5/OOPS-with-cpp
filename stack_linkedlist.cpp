#include <iostream>
using namespace std;

// Node (like one box)
class Node {
public:
    int data;
    Node* next;
};

class Stack {
public:
    Node* top = NULL;

    // Push (same as stack push)
    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = top;
        top = newNode;

        cout << "Item pushed: " << x << endl;
    }

    // Pop (same as stack pop)
    int pop() {
        if (top == NULL) {
            cout << "Stack underflow";
            return -1;
        }
        else {
            int value = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;

            cout << "Popped: ";
            return value;
        }
    }
};

int main() {

    Stack s;

    s.push(10);
    s.push(20);

    cout << s.pop() << endl;

}
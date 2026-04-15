#include <iostream>
using namespace std;

class Queue {
public:
    int front = -1;
    int rear = -1;
    int size = 10;
    int* arr = new int[size];

    void enqueue(int x) {
        if (rear == size - 1) {
            cout << "Queue overflow";
        }
        else {
            if (front == -1) 
            front = 0;
            rear++;
            arr[rear] = x;
            cout << "Item added: " << x << endl;
        }
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue underflow";
            return -1;
        }
        else {
            int value = arr[front];
            front++;
            cout << "Removed: ";
            return value;
        }
    }
};

int main() {

    Queue q;

    q.enqueue(10);
    q.enqueue(20);

    cout << q.dequeue() << endl;

}
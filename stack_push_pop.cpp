#include <iostream>
using namespace std;
struct stack {
    int size;
    int top;
    int* arr;
};

void push(struct stack* S, int value) {
    if (S->top == S->size - 1) {
        cout << "Stack Overflow!\n";
        return;s
    }
    S->top++;
    S->arr[S->top] = value;
}

int pop(struct stack* S) {
    if (S->top == -1) {
        cout << "Stack Underflow!\n";
        return -1;
    }
    int val = S->arr[S->top];
    S->top--;
    return val;
}

int main() {
    struct stack S;
    S.size = 5;
    S.top = -1;
    S.arr = new int[S.size];

    push(&S, 10);
    push(&S, 20);
    push(&S, 30);

    cout << "Popped: " << pop(&S) << std::endl;
    cout << "Popped: " << pop(&S) << std::endl;

    delete[] S.arr;
    return 0;
}
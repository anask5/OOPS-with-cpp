#include <iostream>
using namespace std;
#include <vector>

class stack {
    vector<int> v;

public:
    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        if (v.empty()) {
            cout << "Stack Underflow! Cannot pop.\n";
            return;
        }
        v.pop_back();
    }

    int top() {
        if (v.empty()) {
            cout << "Stack is empty!\n";
            return -1;
        }
        return v.back();  // cleaner than v[v.size()-1]
    }

    void print_stack() {
        if (v.empty()) {
            cout << "Stack is empty\n";
            return;
        }
        for (int ele : v) {
            cout << ele << endl;
        }
    }
};

int main() {
    stack s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);

    s1.print_stack();

    cout << "Top element: " << s1.top() << endl;

    s1.pop();
    s1.print_stack();

    return 0;
}
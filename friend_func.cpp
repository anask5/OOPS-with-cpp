#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number() {
        num = 100;
    }

    friend void display(Number n); // friend declaration
};

void display(Number n) {   // normal function
    cout << n.num;         // accessing private member
}

int main() {
    Number obj;
    display(obj);
}
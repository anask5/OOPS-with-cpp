#include <iostream>
using namespace std;

int sum(float a, int b){
    cout << "Using function with 2 arguments -- > " << endl;
    return a + b;
}

int sum(int a, int b, int c){
    cout << "Using function with 3 arguments -- > " << endl;
    return a + b + c;
}

int main() {
    int i;

    cout << "How many times do you want to enter values? ";
    cin >> i;

    while(i <= 2) {
        int e, f;

        cout << "Enter value of first number: ";
        cin >> e;

        cout << "Enter value of second number: ";
        cin >> f;

        cout << "The sum of both numbers is --> "
             << sum(e, f) << endl;

        i--;
    }

while(i > 2) {
    int e, f, l;


        cout << "Enter value of first number: ";
        cin >> e;

        cout << "Enter value of second number: ";
        cin >> f;
        
        cout << "Enter value of third number: ";
        cin >> l;

        cout << "The sum of three numbers is --> "
             << sum(e, f, l) << endl;

        i--;
}

    return 0;
}   
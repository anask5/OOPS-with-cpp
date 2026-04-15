#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b, float c) {
    return a + b + c;
}

int main() {
    
    add(3.5f, 4.5f);

    cout << "Sum of two integers: " << add(x,y) << "\n";

    return 0;
}
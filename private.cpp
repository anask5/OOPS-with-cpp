#include <iostream>
using namespace std;

class Student {

private:         // only accessible within the class
    int marks;  

public:

    void setMarks(int m) {
        marks = m;
    }

    void display() {
        cout << marks;
    }
};

int main() {

    Student s;

    s.setMarks(90);
    s.display();

}
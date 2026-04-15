#include <iostream>
using namespace std;

class Student {

public:
    int roll;

    Student(){ // constructur declaration
        roll = 10;
    }
};

int main(){

    Student s;

    cout << s.roll;

}
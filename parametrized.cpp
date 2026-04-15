#include <iostream>
using namespace std;

class Student {

public:
    int roll;

    Student(int r){
    roll = r;
}
};

int main(){
    Student s(5);
    
    cout << s.roll;

}
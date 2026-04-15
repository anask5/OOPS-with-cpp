#include <iostream>
// #include <string.h>
using namespace std;



// Structure is user defined data type in c++ where u can group multiple variables.
struct Student {
    int RollNo;
    string Name;
    void display(){
        cout<<RollNo;
    }
};

int main(){
    
    Student s1;
    s1.RollNo = 33;
    s1.Name = "Anas";
     s1.display();  // The difference between c and c++ structure is c++ can have functions inside structure
    cout << "Stored Data " << endl;
    cout << "ROLL NO " << endl;
    cout << s1.RollNo << endl;
    cout<< s1.Name<<"Name";
    
}
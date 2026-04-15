#include <iostream>
using namespace std;


class Student {
    public:    // Acess anywhere 
    int marks;
    void display(){
        cout<<marks;
    }
    
};





int main(){
    
    Student s1;
    s1.marks=50;
    
    s1.display();
}
#include <iostream>
using namespace std;

class Student {
    public:
    int Roll;
    int Marks;
    string Name;
    
    Student(int r, int m, string n){
        Roll = r;
        Marks = m;
        Name = n;
    }
    
    void display(){
        cout<<Roll;
        cout<<endl;
        cout<<Marks;
        cout<<endl;
        cout<<Name;
    }
};

int main(){
    Student s1(10, 100, "anas");
    Student s2(11, 004, "shivam");
    Student s3(12, 200, "suryansh");
    Student s4(13, 450, "tej");
    Student s5(13, 450, "relu");
    

}
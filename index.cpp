#include <iostream>
#include <fstream>
using namespace std;

struct student {
    char name[30];
    int age;
    float marks;
};

int main(){
    struct student s = {
        "john", 19, 85.5
    };

    ofstream outFile("student.dat", ios::binary);
    outFile.write((char*)&s, sizeof(s));  
    outFile.close();                     

    cout << "Data saved";
    return 0;
}
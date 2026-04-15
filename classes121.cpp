#include <iostream>
using namespace std;

class Rectangle {

public:
    int length;
    int breadth;

    Rectangle(int l, int b){
    length = l;
     breadth = b;
}

void display(){
    cout<<"The area of rectangle is"<<endl;
    cout << length*breadth;
}
};

int main(){

Rectangle r(20,50);
r.display();

}   
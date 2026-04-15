#include <iostream>
using namespace std;

class Car{

public:

    static int count; // static 

    Car(){
        count++;
    }
};

int Car::count = 0;

int main(){

    Car c1;
    Car c2;
    Car c3;

    Car c4;
    Car c5;
    Car c6;

    Car c7;
    Car c8;
    Car c9;

    cout << "Total Cars = " << Car::count;

}
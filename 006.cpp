#include <iostream>
using namespace std;

class Distance{

public:

    int feet;
    int inch;

    Distance(int f,int i){
        feet = f;
        inch = i;
    }

    Distance operator +(Distance d){

        Distance temp(0,0);

        temp.feet = feet + d.feet;
        temp.inch = inch + d.inch;

        return temp;
    }
};

int main(){

    Distance d1(5,6);
    Distance d2(3,4);

    Distance d3 = d1 + d2;

    cout << d3.feet << " ft " << d3.inch << " in";

}
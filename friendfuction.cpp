#include <iostream>
using namespace std;

class Box {

private:
    int width;

public:
    Box(){
        width = 10;
    }

    friend void show(Box b);
};

void show(Box b){
    cout<<b.width;
}

int main(){

    Box b1;

    show(b1);

}
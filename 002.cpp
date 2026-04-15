#include <iostream>
using namespace std;

class Num{
    private:
    int num;

    public:
    Num(){
        num = 5000;
    }

    friend void show(Num);
};

void show(Num n){
    cout << "Salary = " << n.num;
}

int main(){
    Num n1;
    show(n1);
}
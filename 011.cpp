#include <iostream>
using namespace std;

class Num{
private:
    int num;

public:
    Num(){
        num = 5000;
    }

    int getNum(){
        return num;
    }
};

// void show(Num n){
//     cout << "Salary = " << n.getNum();
// }

int main(){
     Num n1;
     cout<<n1.getNum();
}
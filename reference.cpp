#include <iostream>
using namespace std;

int main(){
    int a = 5; //5  
    int &b = a; // b 

    b = 15; // 20 

    cout << a;
}
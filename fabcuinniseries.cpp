#include<iostream>
using namespace std;

int main(){
    
    int a = 0, b = 1, c = 0, count = 0 ;

    cout << "How much numbers do you need in fibonacci series :" ;
    cin >> count;

    // cout << a << endl << b << endl;
    while(count != 0){

        c = a+b;
        cout << c << endl;
        a = b;
        b = c;
        count--;
    }
    return 0;
}
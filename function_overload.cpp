#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout<<sum(5,6,9)<<endl;
    cout<<sum(5,6);
}
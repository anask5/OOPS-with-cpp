#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
int sub(int a, int b, int c){
    return a-b-c;
}
int sub(int a, int b){
    return a-b;
}

int main(){
    cout<<"The sum of two numbers are "<<sum(2,3);
    cout<<endl;
    cout<<"The sum of three numbers are "<<sum(2,3,5);
        cout<<endl;
    cout<<"The sum of two numbers are "<<sub(2,3);
    cout<<endl;
    cout<<"The sum of three numbers are "<<sub(2,3,5);
}#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}
int sum(int a, int b, int c){
    return a+b+c;
}
int sub(int a, int b, int c){
    return a-b-c;
}
int sub(int a, int b){
    return a-b;
}

int main(){
    cout<<"The sum of two numbers are "<<sum(2,3);
    cout<<endl;
    cout<<"The sum of three numbers are "<<sum(2,3,5);
        cout<<endl;
    cout<<"The sum of two numbers are "<<sub(2,3);
    cout<<endl;
    cout<<"The sum of three numbers are "<<sub(2,3,5);
}
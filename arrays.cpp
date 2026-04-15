#include <iostream>
using namespace std;

int main(){
int arr[5];

for(int i = 0; i<=5; i++){
    cout<<"Enter the value  of "<<(i)<<"th index :";
    cin>>arr[i];
}


for(int i = 0; i<=5;i++){
    cout<<"The value of "<<(i)<<"th index"<<"     " <<arr[i];
    cout<<endl;
}
}
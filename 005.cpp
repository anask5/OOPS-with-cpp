#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    string rev="";
    
    cout<<"Enter something : ";
    cin>>s;
    
    for(int i=s.length()-1;i>=0;i--){
        rev += s[i];
    }
    
    if (rev == s){
        cout<<"Palindrome";
    }
    
    else {
        cout<<"Not Palindrome";
    }
    
    return 0;
}
#include <iostream>
using namespace std;


void leapyear(int year){
  if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        cout<<"Entered Year is a leap year : "<<year;
        
    else {
        cout<<"Entered year is not a leap year : "<<year;
    }
}
int main(){
    int year;
       cout<<"Enter an year to check if its leap year : ";
        cin>>year;
        
        leapyear(year);
    return 0;
}
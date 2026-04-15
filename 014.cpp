#include <iostream>
using namespace std;

class Car{
    private:
    string model;
    float price;
    public:
    Car(){} 
    Car(string x, float p){
        model = x;
        price = p;
    }
    void showdata(){
        cout<<model;
        cout<<endl;
        cout<<price;
    }
    void insertdata(string x, float p){
         model = x;
        price = p;
    }
};

int main(){
    // Car c1("venue", 15000);
    Car c1;
    c1.insertdata("venue", 15000);
    
    c1.showdata();
}
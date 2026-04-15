#include <iostream>
using namespace std;
 
 
class Stack{
  public:
  int top = -1;
  int size = 10;
  int * arr = new int[size];
  
  void push(int x){
      if (top == size - 1){
          cout<<"Stack overflow";
      }
      else {
          top++;
          arr[top]=x;
        cout << "Item pushed: "<< x << endl;

      }
  }
  
  int pop(){
      if (top == -1){
          cout<<"Stack underflow";
          return -1;
      }
      else{
          int value = arr[top];
          top--;
          cout<< "Popped:";
          return value;
      }
  }
};

int main(){
    
    
    Stack s;
    s.push(10);
    s.push(20);
    cout<< s.pop() << endl;
    
    
}
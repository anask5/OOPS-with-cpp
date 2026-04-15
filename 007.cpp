#include <iostream>
using namespace std;

int main() {

    int num = 2;
    int count = 0;

    while(count < 10) {

        int i;
        for(i = 2; i < num; i++) {
            if(num % i == 0) {
                break;
            }
        }

        if(i == num) {
            cout << num << " ";
            count++;
        }

        num++;
    }

}
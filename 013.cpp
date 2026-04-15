#include <iostream>
using namespace std;

int main() {

    int count = 0;
    int num = 2;

    while(count < 10) {

        int flag = 0;

        for(int i = 2; i <= num/2; i++) {

            if(num % i == 0){
                flag = 1;
                break;
            }

        }

        if(flag == 0){
            cout << num << " ";
            count++;
        }

        num++;

    }

    return 0;
}
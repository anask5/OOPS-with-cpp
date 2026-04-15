#include <iostream>

struct stack {
    int size;
    int top;
    int * arr;
};

int main() {

    struct stack S;
    S.size = 80;
    S.top = -1;
    S.arr = new int[S.size];

    // delete[] S.arr;  // clean up memory
    return 0;
}
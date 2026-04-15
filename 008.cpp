#include <iostream>
using namespace std;

class Inventory {
public:
    int item[100];
    int n;

    Inventory() {
        n = 0;
    }

    void insert(int val) {
        item[n++] = val;
    }

    void deleteItem(int val) {
        for(int i = 0; i < n; i++) {
            if(item[i] == val) {
                for(int j = i; j < n-1; j++) {
                    item[j] = item[j+1];
                }
                n--;
                break;
            }
        }
    }

    void update(int oldVal, int newVal) {
        for(int i = 0; i < n; i++) {
            if(item[i] == oldVal) {
                item[i] = newVal;
                break;
            }
        }
    }

    void display() {
        for(int i = 0; i < n; i++) {
            cout << item[i] << " ";
        }
        cout << endl;
    }
};

int main() {

    Inventory inv;

    inv.insert(10);
    inv.insert(20);
    inv.insert(30);

    cout << "Inventory: ";
    inv.display();

    inv.deleteItem(20);

    cout << "After deletion: ";
    inv.display();

    inv.update(30, 50);

    cout << "After update: ";
    inv.display();

}
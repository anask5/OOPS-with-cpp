#include <iostream>
using namespace std;

int main() {

    int amount;
    int totalNotes = 0;

    cout << "Enter amount: ";
    cin >> amount;

    int notes[9] = {500,200,100,50,20,10,5,2,1};

    for(int i = 0; i < 9; i++) {

        if(amount >= notes[i]) {

            int count = amount / notes[i];

            amount = amount % notes[i];

            totalNotes += count;

            cout << notes[i] << " x " << count << endl;

        }

    }

    cout << "Minimum number of notes = " << totalNotes;

}
// Lab Task 1: Print Values from 5 to 1 Using While Loop
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>
using namespace std;

int main() {
    int i = 5;

    while (i > 0) {
        cout << i << endl;
        i = i - 1; // Decrease value in each iteration
    }

    cout << "Outside loop now" << endl;
    return 0;
}

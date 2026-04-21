// Lab Task 4: Password Checker Using Do While Loop
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>
using namespace std;

int main() {
    int password;

    do {
        cout << "Enter password (1234 to exit): ";
        cin >> password;

        if (password != 1234) {
            cout << "Wrong password! Try again." << endl;
        }
    } while (password != 1234); // do...while ensures the loop runs at least once

    cout << "Access Granted!" << endl;
    return 0;
}

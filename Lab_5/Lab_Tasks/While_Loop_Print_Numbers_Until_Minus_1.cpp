// Lab Task 2: Print Numbers Until -1 is Entered
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>
using namespace std;

int main() {
    int num = 0;

    while (num != -1) {
        cout << "Enter a number to print (-1 to quit): ";
        cin >> num;

        if (num != -1) { // Avoid printing the sentinel value
            cout << "You entered: " << num << endl;
        }
    }

    cout << "Outside loop now" << endl;
    return 0;
}

// Lab Task 2: Multiplication Table Using Nested for Loop
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Multiplication Table (1 to 10)" << endl;
    cout << "================================" << endl;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            cout << setw(5) << i * j; // setw keeps the columns aligned
        }
        cout << endl;
    }

    return 0;
}

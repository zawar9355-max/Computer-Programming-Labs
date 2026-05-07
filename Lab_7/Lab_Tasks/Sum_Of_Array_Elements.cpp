// Lab Task 4: Sum of Array Elements
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;

    cout << "Enter 5 integer numbers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "Sum of all array elements = " << sum << endl;

    return 0;
}

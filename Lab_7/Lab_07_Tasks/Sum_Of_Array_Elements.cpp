// Lab Task 4: Sum of Array Elements
// Name: Muhammad Adil
// Registration No: 0669

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
        sum + = numbers[i];
    }

    cout << "Sum of all array elements = " << sum << endl;

    return 0;
}


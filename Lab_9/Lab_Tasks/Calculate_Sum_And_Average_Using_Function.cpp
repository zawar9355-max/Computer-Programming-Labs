// Lab Task 3: Calculate Sum and Average Using Function
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int calculateSum(const int numbers[], int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += numbers[i];
    }

    return sum; // Return the total sum of the array elements
}

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int sum = calculateSum(numbers, SIZE);
    double average = static_cast<double>(sum) / SIZE;

    cout << "\nSum of array elements = " << sum << endl;
    cout << "Average of array elements = " << average << endl;

    return 0;
}

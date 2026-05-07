// Assignment 2 - Question 1
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int maximumValue, minimumValue, sum = 0;
    double average;

    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    maximumValue = numbers[0];
    minimumValue = numbers[0];

    for (int i = 0; i < SIZE; i++) {
        if (numbers[i] > maximumValue) {
            maximumValue = numbers[i];
        }

        if (numbers[i] < minimumValue) {
            minimumValue = numbers[i];
        }

        sum += numbers[i];
    }

    average = static_cast<double>(sum) / SIZE; // Convert to double to get decimal average

    cout << "\nMaximum value = " << maximumValue << endl;
    cout << "Minimum value = " << minimumValue << endl;
    cout << "Average = " << average << endl;

    return 0;
}

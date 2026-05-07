// Assignment 2 - Question 2
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

void displayArray(const int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void reverseArray(int array[], int size) {
    for (int start = 0, end = size - 1; start < end; start++, end--) {
        int temp = array[start];
        array[start] = array[end];
        array[end] = temp;
    }
}

int main() {
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter 10 integers for the array:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Value " << i + 1 << ": ";
        cin >> numbers[i];
    }

    cout << "\nArray before reversal: ";
    displayArray(numbers, SIZE);

    reverseArray(numbers, SIZE); // Reverse the original array through a function

    cout << "Array after reversal: ";
    displayArray(numbers, SIZE);

    return 0;
}

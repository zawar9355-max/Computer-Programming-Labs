// Lab Task 2: Function With Return Value
// Name: Muhammad Adil
// Registration No: 0669

#include <iostream>

using namespace std;

int getSquare(int number) {
    return number * number; // Return the square of the given number
}

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

     getSquare(number);
    cout << "Square of the number = " << getSquare(number) << endl;

    return 0;
}


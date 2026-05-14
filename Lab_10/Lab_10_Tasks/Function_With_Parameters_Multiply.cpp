// Lab Task 1: Function With Parameters
// Name: Muhammad Adil
// Registration No: 0669

#include <iostream>

using namespace std;

void multiply(int num1, int num2) {
    int product = num1 * num2;
    cout << "Product of the two numbers = " << product << endl; // Display result inside the function
}

int main() {
    int firstNumber, secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    multiply(firstNumber, secondNumber); // Pass two numbers from main to function

    return 0;
}


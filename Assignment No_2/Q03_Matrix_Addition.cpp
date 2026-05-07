// Assignment 2 - Question 3
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int matrixA[ROWS][COLS];
    int matrixB[ROWS][COLS];
    int result[ROWS][COLS];

    cout << "Enter elements of first 3x3 matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> matrixA[i][j];
        }
    }

    cout << "\nEnter elements of second 3x3 matrix:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> matrixB[i][j];
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j]; // Add matching elements
        }
    }

    cout << "\nResultant matrix after addition:" << endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}

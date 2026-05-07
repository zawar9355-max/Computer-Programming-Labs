// Lab Task 2: Sum of Rows and Columns in a Two Dimensional Array
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int main() {
    int matrix[3][3] = {
        {2, 4, 6},
        {1, 3, 5},
        {7, 8, 9}
    };
    int totalSum = 0;

    cout << "Matrix values:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
            totalSum += matrix[i][j];
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of row " << i + 1 << " = " << rowSum << endl;
    }

    cout << endl;
    for (int j = 0; j < 3; j++) {
        int columnSum = 0;
        for (int i = 0; i < 3; i++) {
            columnSum += matrix[i][j];
        }
        cout << "Sum of column " << j + 1 << " = " << columnSum << endl;
    }

    cout << "\nTotal sum of all elements = " << totalSum << endl;
    return 0;
}

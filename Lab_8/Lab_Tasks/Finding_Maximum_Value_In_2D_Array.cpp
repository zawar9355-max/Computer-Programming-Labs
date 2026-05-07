// Lab Task 3: Finding Maximum Value in a Two Dimensional Array
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {
        {12, 5, 8, 19},
        {7, 25, 4, 16},
        {11, 3, 28, 9},
        {6, 14, 10, 21}
    };
    int maximumValue = matrix[0][0];

    cout << "4x4 array values:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
            if (matrix[i][j] > maximumValue) {
                maximumValue = matrix[i][j];
            }
        }
        cout << endl;
    }

    cout << "\nMaximum value in the array = " << maximumValue << endl;
    return 0;
}

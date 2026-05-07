// Lab Task 3: Copying Arrays
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int source[SIZE] = {11, 22, 33, 44, 55};
    int destination[SIZE];

    for (int i = 0; i < SIZE; i++) {
        destination[i] = source[i]; // Copy elements one by one into destination array
    }

    cout << "Source array values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << source[i] << " ";
    }

    cout << "\nDestination array values:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << destination[i] << " ";
    }

    cout << endl;
    return 0;
}

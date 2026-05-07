// Lab Task 1: Array Declaration and Initialization
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    cout << "Values stored in the array:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl; // Display each element using a loop
    }

    return 0;
}

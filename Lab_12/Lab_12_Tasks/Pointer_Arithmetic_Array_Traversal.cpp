// Lab 12 Task: Pointer Arithmetic Array Traversal
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>

using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50}; // array of integers
    int* ptr = numbers;                    // pointer to the first element
    int size = sizeof(numbers) / sizeof(numbers[0]); // number of elements in the array

    cout << "Array elements using pointer arithmetic:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl; // access each element by pointer offset
    }

    return 0; // successful execution
}


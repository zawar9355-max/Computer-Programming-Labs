// Lab 12 Task: Pointer Declaration and Initialization
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>

using namespace std;

int main() {
    int num = 25;      // integer variable
    int* ptr = &num;   // pointer stores the address of num

    cout << "Value of num: " << num << endl;           // direct value access
    cout << "Address stored in ptr: " << ptr << endl;   // pointer address output
    cout << "Value pointed to by ptr: " << *ptr << endl; // dereference pointer to get value

    return 0; // successful termination
}


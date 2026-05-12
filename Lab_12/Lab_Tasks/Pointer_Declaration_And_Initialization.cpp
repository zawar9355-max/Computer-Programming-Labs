#include <iostream>

using namespace std;

int main() {
    int num = 25;
    int* ptr = &num;

    cout << "Value of num: " << num << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}

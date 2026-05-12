#include <iostream>

using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int* ptr = numbers;
    int size = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Array elements using pointer arithmetic:" << endl;

    for (int i = 0; i < size; i++) {
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }

    return 0;
}

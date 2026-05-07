// Lab Task 2: Accessing Array Elements
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int main() {
    char message[] = "HELLO";

    cout << "Characters of the array on separate lines:" << endl;
    for (int i = 0; message[i] != '\0'; i++) {
        cout << message[i] << endl; // Print one character per line
    }

    return 0;
}

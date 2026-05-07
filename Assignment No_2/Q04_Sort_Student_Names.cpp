// Assignment 2 - Question 4
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    string names[SIZE];

    cout << "Enter names of 5 students:" << endl;
    cin.ignore();
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (names[j] > names[j + 1]) {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "\nNames in alphabetical order:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << endl;
    }

    return 0;
}

// Assignment 2 - Question 6
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
#include <string>
using namespace std;

int findTopperIndex(const int marks[], int size) {
    int topperIndex = 0;
    for (int i = 1; i < size; i++) {
        if (marks[i] > marks[topperIndex]) {
            topperIndex = i;
        }
    }
    return topperIndex;
}

void displayPassFailStatus(const string names[], const int marks[], int size) {
    cout << "\nPass/Fail Status:" << endl;
    for (int i = 0; i < size; i++) {
        cout << names[i] << " = " << (marks[i] >= 50 ? "Pass" : "Fail") << endl;
    }
}

int searchStudentByName(const string names[], int size, const string& targetName) {
    for (int i = 0; i < size; i++) {
        if (names[i] == targetName) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int SIZE = 5;
    string names[SIZE];
    int marks[SIZE];
    string searchName;

    cout << "Enter names and marks of 5 students:" << endl;
    cin.ignore();
    for (int i = 0; i < SIZE; i++) {
        cout << "\nStudent " << i + 1 << " name: ";
        getline(cin, names[i]);

        cout << "Marks of " << names[i] << ": ";
        cin >> marks[i];
        cin.ignore();
    }

    int topperIndex = findTopperIndex(marks, SIZE);

    cout << "\nTopper = " << names[topperIndex]
         << " with marks " << marks[topperIndex] << endl;

    displayPassFailStatus(names, marks, SIZE);

    cout << "\nEnter student name to search: ";
    getline(cin, searchName);

    int foundIndex = searchStudentByName(names, SIZE, searchName);
    if (foundIndex != -1) {
        cout << searchName << " found with marks " << marks[foundIndex] << endl;
    } else {
        cout << searchName << " not found in the record." << endl;
    }

    return 0;
}

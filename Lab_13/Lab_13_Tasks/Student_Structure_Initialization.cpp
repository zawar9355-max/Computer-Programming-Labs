// Lab 13 Task: Student Structure Initialization
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name; // student name
    int age;     // student age
    char grade;  // student grade
};

int main() {
    Student student1 = {"Ali Khan", 19, 'A'}; // initialize student record

    cout << "Student Information:" << endl;
    cout << "Name: " << student1.name << endl;  // display student name
    cout << "Age: " << student1.age << endl;    // display student age
    cout << "Grade: " << student1.grade << endl; // display student grade

    return 0; // successful termination
}


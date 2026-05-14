// Lab 11 Task: String Concatenation
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>
#include <string>

using namespace std;

int main() {
    string firstName = "Zawar"; // first part of the name
    string lastName = "Shah";   // last part of the name
    string fullName = firstName + " " + lastName; // combine names with a space

    cout << "First Name: " << firstName << endl; // display first name
    cout << "Last Name: " << lastName << endl;   // display last name
    cout << "Full Name: " << fullName << endl;   // display concatenated name

    return 0; // successful termination
}


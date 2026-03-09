                                // Lab Task 3: Average Marks Calculator
                                // Name: [Zawar Shah]
                                // Registration Number: [BF25NWELE0677]
                 


#include <iostream>
using namespace std;

int main() {
    // Variables for five subject marks (using meaningful names)
    double subject1, subject2, subject3, subject4, subject5;
    double average;
    
    // Initialize all variables to 0
    subject1 = subject2 = subject3 = subject4 = subject5 = 0;
    average = 0;
    
    // Prompt user to enter marks for five subjects
    cout << "Enter marks for Subject 1: ";
    cin >> subject1;
    
    cout << "Enter marks for Subject 2: ";
    cin >> subject2;
    
    cout << "Enter marks for Subject 3: ";
    cin >> subject3;
    
    cout << "Enter marks for Subject 4: ";
    cin >> subject4;
    
    cout << "Enter marks for Subject 5: ";
    cin >> subject5;
    
    // Calculate average: sum of all marks divided by number of subjects
    average = (subject1 + subject2 + subject3 + subject4 + subject5) / 5.0;
    
    // Display the average with 2 decimal precision
    cout << "\n--- Average Marks ---" << endl;
    cout << "Subject 1: " << subject1 << endl;
    cout << "Subject 2: " << subject2 << endl;
    cout << "Subject 3: " << subject3 << endl;
    cout << "Subject 4: " << subject4 << endl;
    cout << "Subject 5: " << subject5 << endl;
    cout << "Average Marks: " << average << endl;
    
    return 0;
}

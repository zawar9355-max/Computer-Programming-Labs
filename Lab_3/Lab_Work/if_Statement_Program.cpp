// Lab 3: If Statement Program
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>
using namespace std;
int main () 
{
    // This program checks if the entered number is positive or negative
    int number;
    cout << "Enter and integer:";

    // Taking input from the user
    cin >> number;
    
    // condition to check if the number is positive
    if (number > 0)
{
    cout << "The number is positive." << endl;

}   // condition to check if the number is negative
    if ( number < 0)
{
        cout << "The number is negative." << endl;
}
    return 0;
}
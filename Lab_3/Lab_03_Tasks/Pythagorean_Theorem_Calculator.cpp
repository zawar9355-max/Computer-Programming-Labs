// Lab Task 8: Pythagorean Theorem Calculator
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]
// Date: [05/03/2026]

#include <iostream>
#include <cmath> // Required for sqrt() function
#include <iomanip> // Required for setprecision()

using namespace std;

int main() {
// Define variables for right-angled triangle
    double base;          // Base of triangle (one leg)
    double perpendicular; // Perpendicular/Height (other leg)
    double hypotenuse;    // Hypotenuse (side opposite to right angle)

// Get input from user
    cout << "Enter the base of the triangle: ";
    cin >> base;

    cout << "Enter the perpendicular (height) of the triangle: ";
    cin >> perpendicular;

// Calculate hypotenuse using Pythagoras theorem: cÂ² = aÂ² + bÂ²
// Therefore: c = âˆš(aÂ² + bÂ²)
// Using pow() for squaring and sqrt() for square root from cmath library
    hypotenuse = sqrt(pow(base, 2) + pow(perpendicular, 2));

// Alternative without pow(): hypotenuse = sqrt((base * base) + (perpendicular * perpendicular));

// Display results
    cout << "\n--- Pythagoras Theorem ---" << endl;
    cout << "Base (a): " << base << endl;
    cout << "Perpendicular (b): " << perpendicular << endl;
    cout << "Hypotenuse (c): " << hypotenuse << endl;
    cout << "Verification: " << base << "Â² + " << perpendicular << "Â² = " << hypotenuse << "Â²" << endl;

    return 0;
}


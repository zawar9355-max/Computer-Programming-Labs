                                // Lab Task 4: Circle Properties Calculator
                                // Name: [Zawar Shah]
                                // Registration Number: [BF25NWELE0677]
                                


#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    // Define variables for circle calculations
    double radius;
    double circumference;
    
    // Initialize as specified: radius to 0, circumference to 1
    radius = 0;
    circumference = 1;
    
    // Prompt user for radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calculate circumference: C = 2 * π * r
    // Using M_PI constant from cmath or define manually (3.14159)
    const double PI = 3.14159;
    circumference = 2 * PI * radius;
    
    // Display results
    cout << "\n--- Circle Properties ---" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Circumference: " << circumference << endl;
    
    return 0;
}

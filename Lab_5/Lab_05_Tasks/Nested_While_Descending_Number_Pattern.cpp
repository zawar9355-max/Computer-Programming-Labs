// Lab Task 3: Descending Number Pattern Using Nested While Loop
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>

using namespace std;

int main() {
    int num = 7;
    int j;

    while (num > 0) {
        j = 1; // Reset inner loop variable for each row

        while (j <= num) { // Nested loop prints pattern in each row
            cout << j << " ";
            j++;
        }

        cout << endl;
        num--;
    }

    return 0;
}


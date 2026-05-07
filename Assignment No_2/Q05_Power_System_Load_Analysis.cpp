// Assignment 2 - Question 5
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

double calculateTotalLoad(const double loads[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += loads[i];
    }
    return total;
}

double findPeakLoad(const double loads[], int size) {
    double peak = loads[0];
    for (int i = 1; i < size; i++) {
        if (loads[i] > peak) {
            peak = loads[i];
        }
    }
    return peak;
}

int main() {
    const int HOURS = 24;
    double loadData[HOURS];

    cout << "Enter load demand in MW for 24 hours:" << endl;
    for (int i = 0; i < HOURS; i++) {
        cout << "Hour " << i + 1 << ": ";
        cin >> loadData[i];
    }

    double totalLoad = calculateTotalLoad(loadData, HOURS);
    double peakLoad = findPeakLoad(loadData, HOURS);

    cout << "\nTotal load for the day = " << totalLoad << " MW" << endl;
    cout << "Peak load = " << peakLoad << " MW" << endl;

    return 0;
}

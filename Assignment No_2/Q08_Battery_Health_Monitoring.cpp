// Assignment 2 - Question 8
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

int countUnsafeReadings(const double voltages[], int size, double minimumSafe, double maximumSafe) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (voltages[i] < minimumSafe || voltages[i] > maximumSafe) {
            count++;
        }
    }
    return count;
}

double findMinimumVoltage(const double voltages[], int size) {
    double minimumValue = voltages[0];
    for (int i = 1; i < size; i++) {
        if (voltages[i] < minimumValue) {
            minimumValue = voltages[i];
        }
    }
    return minimumValue;
}

double findMaximumVoltage(const double voltages[], int size) {
    double maximumValue = voltages[0];
    for (int i = 1; i < size; i++) {
        if (voltages[i] > maximumValue) {
            maximumValue = voltages[i];
        }
    }
    return maximumValue;
}

int main() {
    const int SIZE = 20;
    const double MIN_SAFE_VOLTAGE = 3.0;
    const double MAX_SAFE_VOLTAGE = 4.2;
    double voltages[SIZE];

    cout << "Enter 20 voltage readings of the battery:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Reading " << i + 1 << ": ";
        cin >> voltages[i];
    }

    int unsafeReadings = countUnsafeReadings(voltages, SIZE, MIN_SAFE_VOLTAGE, MAX_SAFE_VOLTAGE);
    double minimumVoltage = findMinimumVoltage(voltages, SIZE);
    double maximumVoltage = findMaximumVoltage(voltages, SIZE);

    cout << "\nMinimum voltage = " << minimumVoltage << " V" << endl;
    cout << "Maximum voltage = " << maximumVoltage << " V" << endl;
    cout << "Unsafe readings count = " << unsafeReadings << endl;

    if (unsafeReadings > 0) {
        cout << "Warning: Unsafe voltage readings exist." << endl;
    } else {
        cout << "All voltage readings are within the safe range." << endl;
    }

    return 0;
}

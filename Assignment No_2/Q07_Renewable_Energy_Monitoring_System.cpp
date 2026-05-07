// Assignment 2 - Question 7
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

double calculateTotalEnergy(const double energy[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += energy[i];
    }
    return total;
}

int findMaximumGenerationHour(const double energy[], int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (energy[i] > energy[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

double calculateAverageEnergy(const double energy[], int size) {
    return calculateTotalEnergy(energy, size) / size;
}

int main() {
    const int HOURS = 24;
    double energyGenerated[HOURS];

    cout << "Enter energy generation data in kWh for 24 hours:" << endl;
    for (int i = 0; i < HOURS; i++) {
        cout << "Hour " << i + 1 << ": ";
        cin >> energyGenerated[i];
    }

    double totalEnergy = calculateTotalEnergy(energyGenerated, HOURS);
    int maxHourIndex = findMaximumGenerationHour(energyGenerated, HOURS);
    double averageEnergy = calculateAverageEnergy(energyGenerated, HOURS);

    cout << "\nTotal energy generated = " << totalEnergy << " kWh" << endl;
    cout << "Hour with maximum generation = " << maxHourIndex + 1 << endl;
    cout << "Average energy generation = " << averageEnergy << " kWh" << endl;

    return 0;
}

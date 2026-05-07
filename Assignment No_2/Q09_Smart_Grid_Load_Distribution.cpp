// Assignment 2 - Question 9
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

void calculateRegionTotals(const double consumption[][7], int rows, int cols, double totals[]) {
    for (int i = 0; i < rows; i++) {
        totals[i] = 0;
        for (int j = 0; j < cols; j++) {
            totals[i] += consumption[i][j];
        }
    }
}

int findHighestDemandDay(const double consumption[][7], int rows, int cols) {
    int highestDayIndex = 0;
    double highestTotal = 0;

    for (int day = 0; day < cols; day++) {
        double dayTotal = 0;
        for (int region = 0; region < rows; region++) {
            dayTotal += consumption[region][day];
        }

        if (day == 0 || dayTotal > highestTotal) {
            highestTotal = dayTotal;
            highestDayIndex = day;
        }
    }

    return highestDayIndex;
}

double calculateOverallAverage(const double consumption[][7], int rows, int cols) {
    double total = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            total += consumption[i][j];
        }
    }
    return total / (rows * cols);
}

int main() {
    const int REGIONS = 4;
    const int DAYS = 7;
    double consumption[REGIONS][DAYS];
    double regionTotals[REGIONS];

    cout << "Enter power consumption in MW for 4 regions over 7 days:" << endl;
    for (int i = 0; i < REGIONS; i++) {
        for (int j = 0; j < DAYS; j++) {
            cout << "Region " << i + 1 << ", Day " << j + 1 << ": ";
            cin >> consumption[i][j];
        }
    }

    calculateRegionTotals(consumption, REGIONS, DAYS, regionTotals);
    int highestDemandDay = findHighestDemandDay(consumption, REGIONS, DAYS);
    double overallAverage = calculateOverallAverage(consumption, REGIONS, DAYS);

    cout << "\nTotal consumption for each region:" << endl;
    for (int i = 0; i < REGIONS; i++) {
        cout << "Region " << i + 1 << " = " << regionTotals[i] << " MW" << endl;
    }

    cout << "\nDay with highest total demand = Day " << highestDemandDay + 1 << endl;
    cout << "Overall average consumption = " << overallAverage << " MW" << endl;

    return 0;
}

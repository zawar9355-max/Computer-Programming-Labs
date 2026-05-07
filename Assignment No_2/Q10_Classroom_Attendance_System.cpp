// Assignment 2 - Question 10
// Name: Zawar Shah
// Registration No: BF25NWELE0677

#include <iostream>
using namespace std;

void calculateStudentAttendance(const int attendance[][7], int rows, int cols, int totals[]) {
    for (int i = 0; i < rows; i++) {
        totals[i] = 0;
        for (int j = 0; j < cols; j++) {
            totals[i] += attendance[i][j];
        }
    }
}

int findHighestAttendanceStudent(const int totals[], int size) {
    int highestIndex = 0;
    for (int i = 1; i < size; i++) {
        if (totals[i] > totals[highestIndex]) {
            highestIndex = i;
        }
    }
    return highestIndex;
}

double calculateAttendancePercentage(const int attendance[][7], int rows, int cols) {
    int presentCount = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            presentCount += attendance[i][j];
        }
    }

    return (static_cast<double>(presentCount) / (rows * cols)) * 100;
}

int main() {
    const int STUDENTS = 5;
    const int DAYS = 7;
    int attendance[STUDENTS][DAYS];
    int studentTotals[STUDENTS];

    cout << "Enter attendance for 5 students over 7 days (1 for present, 0 for absent):" << endl;
    for (int i = 0; i < STUDENTS; i++) {
        for (int j = 0; j < DAYS; j++) {
            cout << "Student " << i + 1 << ", Day " << j + 1 << ": ";
            cin >> attendance[i][j];
        }
    }

    calculateStudentAttendance(attendance, STUDENTS, DAYS, studentTotals);
    int highestAttendanceStudent = findHighestAttendanceStudent(studentTotals, STUDENTS);
    double attendancePercentage = calculateAttendancePercentage(attendance, STUDENTS, DAYS);

    cout << "\nTotal attendance of each student:" << endl;
    for (int i = 0; i < STUDENTS; i++) {
        cout << "Student " << i + 1 << " = " << studentTotals[i] << " days" << endl;
    }

    cout << "\nStudent with highest attendance = Student " << highestAttendanceStudent + 1 << endl;
    cout << "Overall class attendance percentage = " << attendancePercentage << "%" << endl;

    return 0;
}

// ============================================================
//  Lab 14 - Relative Grading System (UET Peshawar)
//  Course : Computer Programming (EE-170L)
//  Name   : Zawar Shah
//  Reg No : BF25NWELE0677
//  Date   : 19-May-2026
// ============================================================

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// ─── Constants ───────────────────────────────────────────────
const int MAX_STUDENTS = 100;

// ─── Function Prototypes ──────────────────────────────────────
float  normalizeMarks(float actual, float highest);
string assignGrade(float normalized);
float  gradeToGPA(string grade);
void   printLine(char ch, int n);
void   printTable(string names[], float actual[], float normalized[],
                  string grades[], float gpa[], int n);
void   printStats(float actual[], float normalized[], string grades[],
                  float gpa[], int n);

// ─── Main ─────────────────────────────────────────────────────
int main() {

    // ── Variables ──
    int    n;
    string names[MAX_STUDENTS];
    float  actual[MAX_STUDENTS];
    float  normalized[MAX_STUDENTS];
    string grades[MAX_STUDENTS];
    float  gpa[MAX_STUDENTS];
    float  highest = 0;

    // ── Header ──
    printLine('=', 60);
    cout << "   UET PESHAWAR — RELATIVE GRADING SYSTEM\n";
    printLine('=', 60);
    cout << endl;

    // ── Input: number of students ──
    cout << "Enter total number of students: ";
    cin >> n;

    if (n <= 0 || n > MAX_STUDENTS) {
        cout << "Invalid number of students. Exiting.\n";
        return 1;
    }

    cout << endl;

    // ── Input: names and marks ──
    cout << "Enter each student's name and marks obtained (out of 100):\n";
    printLine('-', 45);

    for (int i = 0; i < n; i++) {
        cout << "Student " << setw(2) << (i + 1) << " Name  : ";
        cin.ignore();
        getline(cin, names[i]);

        cout << "Student " << setw(2) << (i + 1) << " Marks : ";
        cin >> actual[i];

        // Validate marks
        while (actual[i] < 0 || actual[i] > 100) {
            cout << "  [!] Invalid marks. Enter a value between 0 and 100: ";
            cin >> actual[i];
        }

        // Track highest marks
        if (actual[i] > highest)
            highest = actual[i];

        cout << endl;
    }

    // ── Calculate Normalized Marks, Grade, GPA ──
    for (int i = 0; i < n; i++) {
        normalized[i] = normalizeMarks(actual[i], highest);
        grades[i]     = assignGrade(normalized[i]);
        gpa[i]        = gradeToGPA(grades[i]);
    }

    // ── Display Results ──
    cout << "\n";
    printLine('=', 60);
    cout << "              GRADING RESULTS\n";
    printLine('=', 60);
    cout << "Highest Marks in Class : " << fixed << setprecision(2) << highest << "\n\n";

    printTable(names, actual, normalized, grades, gpa, n);

    cout << "\n";
    printStats(actual, normalized, grades, gpa, n);

    return 0;
}

// ─── Normalize Marks ──────────────────────────────────────────
// Formula: Normalized = (Actual / Highest) * 100
float normalizeMarks(float actual, float highest) {
    if (highest == 0) return 0;
    return (actual / highest) * 100.0f;
}

// ─── Assign Grade Based on Normalized Marks ───────────────────
// Range 50-100 split into 10 intervals of 5 marks each.
// F  → normalized < 50
// D  → 50 - 54.99
// D+ → 55 - 59.99
// C- → 60 - 64.99
// C  → 65 - 69.99
// C+ → 70 - 74.99
// B- → 75 - 79.99
// B  → 80 - 84.99
// B+ → 85 - 89.99
// A- → 90 - 94.99
// A  → 95 - 99.99
// A+ → 100 (top scorer / maximum threshold)
string assignGrade(float nm) {
    if (nm >= 100.0f) return "A+";
    if (nm >= 95.0f)  return "A";
    if (nm >= 90.0f)  return "A-";
    if (nm >= 85.0f)  return "B+";
    if (nm >= 80.0f)  return "B";
    if (nm >= 75.0f)  return "B-";
    if (nm >= 70.0f)  return "C+";
    if (nm >= 65.0f)  return "C";
    if (nm >= 60.0f)  return "C-";
    if (nm >= 55.0f)  return "D+";
    if (nm >= 50.0f)  return "D";
    return "F";
}

// ─── Convert Grade to GPA Points (4.0 Scale) ─────────────────
float gradeToGPA(string grade) {
    if (grade == "A+") return 4.00f;
    if (grade == "A")  return 4.00f;
    if (grade == "A-") return 3.67f;
    if (grade == "B+") return 3.33f;
    if (grade == "B")  return 3.00f;
    if (grade == "B-") return 2.67f;
    if (grade == "C+") return 2.33f;
    if (grade == "C")  return 2.00f;
    if (grade == "C-") return 1.67f;
    if (grade == "D+") return 1.33f;
    if (grade == "D")  return 1.00f;
    return 0.00f; // F
}

// ─── Print a Horizontal Line ──────────────────────────────────
void printLine(char ch, int n) {
    for (int i = 0; i < n; i++) cout << ch;
    cout << "\n";
}

// ─── Print Results Table ──────────────────────────────────────
void printTable(string names[], float actual[], float normalized[],
                string grades[], float gpa[], int n) {

    // Header row
    cout << left
         << setw(4)  << "#"
         << setw(20) << "Name"
         << setw(10) << "Marks"
         << setw(14) << "Normalized"
         << setw(8)  << "Grade"
         << setw(6)  << "GPA"
         << "\n";
    printLine('-', 60);

    // Data rows
    for (int i = 0; i < n; i++) {
        cout << left
             << setw(4)  << (i + 1)
             << setw(20) << names[i]
             << setw(10) << fixed << setprecision(2) << actual[i]
             << setw(14) << normalized[i]
             << setw(8)  << grades[i]
             << setw(6)  << gpa[i]
             << "\n";
    }
    printLine('-', 60);
}

// ─── Print Class Statistics ───────────────────────────────────
void printStats(float actual[], float normalized[], string grades[],
                float gpa[], int n) {

    float sumMarks = 0, sumNorm = 0, sumGPA = 0;
    float minNorm  = normalized[0], maxNorm = normalized[0];
    int   passCount = 0, failCount = 0;
    int   topIdx = 0;

    for (int i = 0; i < n; i++) {
        sumMarks += actual[i];
        sumNorm  += normalized[i];
        sumGPA   += gpa[i];

        if (normalized[i] < minNorm) minNorm = normalized[i];
        if (normalized[i] > maxNorm) { maxNorm = normalized[i]; topIdx = i; }

        if (grades[i] == "F") failCount++;
        else                  passCount++;
    }

    float avgMarks = sumMarks / n;
    float avgNorm  = sumNorm  / n;
    float avgGPA   = sumGPA   / n;

    cout << "CLASS STATISTICS\n";
    printLine('-', 40);
    cout << fixed << setprecision(2);
    cout << "Total Students    : " << n          << "\n";
    cout << "Passed            : " << passCount  << "\n";
    cout << "Failed            : " << failCount  << "\n";
    cout << "Class Average     : " << avgMarks   << " marks\n";
    cout << "Avg Normalized    : " << avgNorm    << "\n";
    cout << "Avg GPA           : " << avgGPA     << "\n";
    cout << "Top Scorer        : " << grades[topIdx]
         << "  (" << actual[topIdx] << " marks)\n";
    printLine('=', 60);

    // Grade distribution
    cout << "\nGRADE DISTRIBUTION\n";
    printLine('-', 30);

    string allGrades[] = {"A+","A","A-","B+","B","B-","C+","C","C-","D+","D","F"};
    int    gCount = 12;

    for (int g = 0; g < gCount; g++) {
        int cnt = 0;
        for (int i = 0; i < n; i++)
            if (grades[i] == allGrades[g]) cnt++;

        if (cnt > 0) {
            cout << setw(4) << allGrades[g] << " : ";
            for (int k = 0; k < cnt; k++) cout << "*";
            cout << "  (" << cnt << ")\n";
        }
    }
    printLine('=', 60);
}

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    char grade;
};

int main() {
    Student student1 = {"Ali Khan", 19, 'A'};

    cout << "Student Information:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Age: " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;

    return 0;
}

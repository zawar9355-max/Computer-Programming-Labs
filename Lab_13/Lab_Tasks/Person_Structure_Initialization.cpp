#include <iostream>
#include <string>

using namespace std;

struct Person {
    string name;
    int age;
    string address;
};

int main() {
    Person person1 = {"Zawar Shah", 20, "Peshawar, Pakistan"};

    cout << "Person Information:" << endl;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Address: " << person1.address << endl;

    return 0;
}

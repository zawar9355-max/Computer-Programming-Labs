// Task Name: [Simple Calculator Using Switch]
// Name: [Zawar Shah]
// Registration Number: [BF25NWELE0677]

#include <iostream>
using namespace std;

int main() {
    double leftOperand{}, rightOperand{}, result{};
    char operation{};

    cout << "Enter two numbers followed by an operator (+ - * /): ";
    cin >> leftOperand >> rightOperand >> operation; // gather inputs in one line

    switch (operation) {
        case '+': // addition
            result = leftOperand + rightOperand;
            break;
        case '-': // subtraction
            result = leftOperand - rightOperand;
            break;
        case '*': // multiplication
            result = leftOperand * rightOperand;
            break;
        case '/': // division with basic validation
            if (rightOperand != 0) {
                result = leftOperand / rightOperand;
            } else {
                cout << "Division by zero is not allowed." << endl;
                return 1;
            }
            break;
        default: // unsupported operator
            cout << "Operator not recognized." << endl;
            return 1;
    }

    cout << leftOperand << ' ' << operation << ' ' << rightOperand << " = " << result << endl;
    return 0;
}

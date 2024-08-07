//Develop a C++ program to implement simple calculator
#include <iostream>
using namespace std;

int main() {
    float num1, num2, result;
    char op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            }
            else {
                cout << "Cannot divide by zero" << endl;
                return 0;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
            return 0;
    }
    cout << "Result: " << result << endl;
    return 0;
}
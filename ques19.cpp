//Develop a C++ program write a program to find the multiplication values and the cubic values using inline function
#include <iostream>
using namespace std;

// inline function to find the product of two numbers
inline int multiply(int x, int y) {
    return x * y;
}

// inline function to find the cubic value of a number
inline int cube(int x) {
    return x * x * x;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int product = multiply(num1, num2);
    int cubeNum1 = cube(num1);
    int cubeNum2 = cube(num2);

    cout << "Product of " << num1 << " and " << num2 << " is " 
    << product << endl;
    cout << "Cube of " << num1 << " is " << cubeNum1 << endl;
    cout << "Cube of " << num2 << " is " << cubeNum2 << endl;

    return 0;
}
//undone

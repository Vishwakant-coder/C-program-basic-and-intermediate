//Write a C++ program to find the value of a number raised to its power that demonstrates a function using call by value
#include <iostream>
#include <math.h>
using namespace std;

double power(double num, int exponent)
{
    double result = pow(num, exponent);
    return result;
}
int main()
{
    double num, result;
    int exponent;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Enter the exponent: ";
    cin >> exponent;

    result = power(num, exponent);

    cout << num << " raised to the power " << exponent << " is " << result << endl;

    return 0;
}


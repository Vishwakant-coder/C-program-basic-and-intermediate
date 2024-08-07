//Develop a C++ program write a program to add two complex numbers using binary operator overloading
#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;
public:
    void input()
    {
        cout << "Enter real and imaginary number :";
        cin >> real >> imaginary;
    }
    void output()
    {
        cout << "The sum of comples number is " << real << " + " << imaginary << "i" << endl;
    }
    Complex operator+(Complex c2)
    {
        Complex c;
        c.real = real + c2.real;
        c.imaginary = imaginary + c2.imaginary;
        return c;
    }
};
int main()
{
    Complex c, c1, c2;

    c1.input();
    c2.input();

    c = c1 + c2;

    c.output();
    return 0;
}
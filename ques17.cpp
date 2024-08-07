//Write a C++ program to use pointer for both base and derived classes and call the member function. Use Virtual keyword.
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class" << endl;
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "Derived class" << endl;
    }
};

int main() {
    Base* ptr;

    Base b_obj;
    Derived d_obj;

    ptr = &b_obj;
    ptr->show();

    ptr = &d_obj;
    ptr->show();

    return 0;
}

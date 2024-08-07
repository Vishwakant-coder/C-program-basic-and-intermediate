//Write a C++ program to use scope resolution operator. Display the various values of the same
#include <iostream>
using namespace std;
int x=10; // global variable

int main() {
    int x=5; // local variable
    cout<<"Local variable x = "<<x<<endl; // prints 5
    cout<<"Global variable x = "<<::x<<endl; // prints 10
    return 0;
}
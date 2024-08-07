//Write a program in C++ to implement classes with pointers as data member
#include <iostream>
using namespace std;

class MyClass {
    private:
        int *ptr;
        
    public:
        MyClass() {
            ptr = new int;
            *ptr = 0;
        }
        
        void setValue(int val) {
            *ptr = val;
        }
        
        int getValue() {
            return *ptr;
        }
        
        ~MyClass() {
            delete ptr;
        }
};

int main() {
    MyClass obj1, obj2;
    
    obj1.setValue(5);
    obj2.setValue(10);
    
    cout << "Value of obj1: " << obj1.getValue() << endl;
    cout << "Value of obj2: " << obj2.getValue() << endl;
    
    return 0;
}
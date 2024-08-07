// Write a C++ program to declare a class.
// Declare pointer to class. Initialize and display the contents of the class member.
#include <iostream>
#include<string>
using namespace std;

class pointer {
    public:
        int class_num;
        string teach_name;
};

int main() {
    pointer pon;    // declare object of pointer
    pointer *ptr;   // declare pointer to pointer
    
    pon.class_num = 11;
    pon.teach_name = "Object Oriented Programming Using C++";
    
    ptr = &pon;     // initialize pointer to address of obj
    
    cout << "Contents of MyClass object:\n";
    cout << "class_num = " << ptr->class_num << endl;
    cout << "teach_name = " << ptr->teach_name << endl;
    
    return 0;
}
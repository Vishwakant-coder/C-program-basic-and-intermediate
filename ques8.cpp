//Write a program in C++ to prepare a student Record using class and object with functions getdata,
// compute and display for getting marks, computing total and displaying results
#include <iostream>
using namespace std;

class Student {
        string name;
        int rollno;
        float marks[5];
        float total;
    public:
        void getData() {
            cout << "Enter name: ";
            getline(cin, name);
            cout << "Enter roll number: ";
            cin >> rollno;
            cout << "Enter marks for 5 subjects:\n";
            for(int i=0; i<5; i++) {
                cout << "Subject " << i+1 << ": ";
                cin >> marks[i];
            }
        }
        void display() {
            cout << "\nName: " << name << endl;
            cout << "Roll number: " << rollno << endl;
            cout << "Marks:\n";
            for(int i=0; i<5; i++) {
                cout << "Subject " << i+1 << ": " << marks[i] << endl;
            }
            cout << "Total marks: " << total << endl;
        }
        void computeTotal() {
            total = 0;
            for(int i=0; i<5; i++) {
                total += marks[i];
            }
        }
};
int main() {
    Student st;
    st.getData();
    st.computeTotal();
    st.display();
    return 0;
}

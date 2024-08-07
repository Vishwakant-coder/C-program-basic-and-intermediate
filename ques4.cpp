// Write a C++ Program to display Names, Roll No., and grades of 3 students who have appeared in the examination.
// Declare the class of name, Roll No. and grade.
//  Create an array of class objects. Read and display the contents of the array.
#include <iostream>
#include <string>
using namespace std;
class Student
{
  string name;
  int rollNo, i, count = 0;
  char grade;
public:
  void input()
  { // Reading input
    cout << "Enter details for student " << endl;
    cout << "Name: ";
    cin >> name;
    cout << "Roll No.: ";
    cin >> rollNo;
    cout << "Grade: ";
    cin >> grade;
    cout << endl;
  }

  void display()
  { // Displaying output
    cout << "Details of all  students:" << endl;
    cout << "Name:" << name << endl;
    cout << "Roll No.: " << rollNo << endl;
    cout << "Grade: " << grade << endl
         << endl;
  }
};

int main()
{
  int turn = 3;
  Student s[turn];
  for (int i = 0; i < turn; i++)
  {
    s[i].input();
  }
  for (int i = 0; i < turn; i++)
  {
    s[i].display();
  }
  return 0;
}
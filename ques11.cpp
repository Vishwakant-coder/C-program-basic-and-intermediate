// Develop a C++ program write a program to find out the student details including total marks using multiple inheritance

#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;

public:
    void getStudentDetails()
    {
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student roll number: ";
        cin >> rollNo;
    }
};

class Marks
{
protected:
    int marks1;
    int marks2;

public:
    void getMarks()
    {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }
};

class Result : public Student, public Marks
{
private:
    int totalMarks;

public:
    void calculateTotalMarks()
    {
        totalMarks = marks1 + marks2;
    }

    void displayResult()
    {
        cout << "Student name: " << name << endl;
        cout << "Student roll number: " << rollNo << endl;
        cout << "Marks for subject 1: " << marks1 << endl;
        cout << "Marks for subject 2: " << marks2 << endl;
        cout << "Total marks: " << totalMarks << endl;
    }
};

int main()
{
    Result resultObj;

    resultObj.getStudentDetails();
    resultObj.getMarks();
    resultObj.calculateTotalMarks();
    resultObj.displayResult();

    return 0;
}

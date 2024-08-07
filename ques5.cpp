// Write a C++ program to find average marks of three subjects of N students in a class
#include <iostream>
using namespace std;
class average
{
   float marks1, marks2, marks3, avr;

public:
   void Average(int n)
   {
      for (int i = 1; i <= n; i++)
      {
         cout << "Enter the marks of student " << i << " in three subjects: ";
         cin >> marks1 >> marks2 >> marks3;

         avr = (marks1 + marks2 + marks3) / 3;

         cout << "The average marks of student " << i << " is: " << avr << endl;
      }
   }
};
int main()
{
   int n;
   cout << "Enter the number of students: ";
   cin >> n;
   average A;
   A.Average(n);
   return 0;
}
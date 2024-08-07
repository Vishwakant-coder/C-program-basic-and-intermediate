//Develop a C++ program to find reverse of a number
#include <iostream>
using namespace std;

int main() {
   int num, reversedNum = 0, remainder;

   cout << "Enter an integer: ";
   cin >> num;

   while (num != 0) {
      remainder = num % 10;
      reversedNum = reversedNum * 10 + remainder;
      num /= 10;
   }

   cout << "The reversed number is: " << reversedNum << endl;

   return 0;
}

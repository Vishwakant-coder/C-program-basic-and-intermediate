//Develop a C++ program to increment and decrement complex numbers using unary operator overloading
#include <iostream>
using namespace std;
class Complex {
  private:
    int real;
    int imaginary;
  public:
    Complex(int r, int i ) {
      real = r;
      imaginary = i;
    }

    Complex operator++() {
      real++;
      imaginary++;
      return Complex(real, imaginary);
    }

    Complex operator--() {
      real--;
      imaginary--;
      return Complex(real, imaginary);
    }

    void display() {
      cout << real << " + " << imaginary << "i" << endl;
    }
};
int main() {
  Complex c1(2, 3);
  Complex c2(4, 5);

  cout << "Original values:" << endl;
  c1.display();
  c2.display();

  ++c1;
  --c2;

  cout << "Values after incrementing c1 and decrementing c2:" << endl;
  c1.display();
  c2.display();
  return 0;
}

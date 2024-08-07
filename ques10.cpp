//Write a program to demonstrate the use of special functions, constructor and destructor in the class template.
// The program is used to find the bigger of two entered numbers
#include <iostream>
using namespace std;

template <class T>
class Bigger {
    private:
        T a, b;
    public:
        Bigger(T x, T y) {
            a = x;
            b = y;
        }
        ~Bigger() {
            cout << "Object destroyed.\n";
        }
        T max() {
            return (a > b ? a : b);
        }
};

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    Bigger<int> obj(x, y);
    cout << "The bigger number is " << obj.max() << endl;
    return 0;
}

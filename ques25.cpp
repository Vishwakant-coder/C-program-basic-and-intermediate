//Develop a C++ program to find the Fibonacci series till the limit entered by the user
#include <iostream>
using namespace std;

void fibonacci(int limit) {
    int a = 0, b = 1, c;

    cout << "Fibonacci series till " << limit << ":\n";
    cout << a << " " << b << " ";

    for (int i = 2; i < limit; i++) {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    int limit;

    cout << "Enter the limit: ";
    cin >> limit;

    fibonacci(limit);

    return 0;
}


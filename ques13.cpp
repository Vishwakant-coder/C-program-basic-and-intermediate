//Develop a C++ program to find the area of a rectangle by converting the member of
// a class square which is a friend class of rectangle.
// Declare Rectangle as a friend of Square so that Rectangle member
#include <iostream>
using namespace std;

class Rectangle;

class Square {
private:
    int side;
public:
    Square(int s) {
        side = s;
    }
    friend class Rectangle;
};

class Rectangle {
private:
    int length, width;
public:
    Rectangle(Square s) {
        length = s.side ;
        width = s.side;
    }
    int area() {
        return length * width;
    }
};

int main() {
    Square sq(5);
    Rectangle rect(sq);
    cout << "The area of the rectangle is: " << rect.area() << endl;
    return 0;
}

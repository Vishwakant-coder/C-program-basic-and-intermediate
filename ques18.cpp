//Write a program to raise an exception if any attempt is made to refer to an element whose index is beyond the array size.
#include <iostream>
using namespace std;

class Array {
  private:
    int* data;
    int size,index;
  public:
    Array(int s) {
        size = s;
        data = new int[size];
    }
 void input(int n) {
    size=n;
        for (int i = 0; i <size; i++) {
                cin >> data[i];
            }
        
    }
   void check(int x) {
    index=x;
        if (index < 0 || index >= size) {
            cout<<"Index out of range";
        }
        else{
        cout<< data[index];
    }
}
};

int main() {
    int index,size;
    Array a1(size);
    cout<<"Enter size of array :";
    cin>>size;
    cout<<"Enter array :";
    a1.input(size);
    cout<<"Enter index for visit value of array :";
    cin>>index;
   a1.check(index);
    

    return 0;
}

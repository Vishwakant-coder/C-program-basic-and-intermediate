#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter first number : ";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;
    cout<<"Before swaping the number is.......   \nFirst number="<<n1<<"\nSecond number="<<n2;
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    cout<<"\nBefore swaping the number is.......   \nFirst number="<<n1<<"\nSecond number="<<n2;
    return 0;
}
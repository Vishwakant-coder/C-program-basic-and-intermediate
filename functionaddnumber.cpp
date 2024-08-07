#include<iostream>
using namespace std; int sum(int n1,int n2);
int main(){
    int n1,n2;
cout<<"Enter first number: ";
cin>>n1;
cout<<"Enter second number: ";
cin>>n2;
cout<<"The sum of first number and second number is "<<sum(n1,n2);
    return 0;
}
int sum(int n1,int n2){
 int su;
 su=n1+n2;
    return su;
}
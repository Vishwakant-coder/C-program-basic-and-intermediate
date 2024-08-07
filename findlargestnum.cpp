#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3;
    cout<<"Enter first number :";
    cin>>n1;
    cout<<"Enter second number : ";
    cin>>n2;
    cout<<"Enter third number : ";
    cin>>n3;

    if(n1>n2 && n1>n3)
    cout<<"Large number is first number ("<<n1<<")";
    
    else if(n2>n3)
    cout<<"Large number is second number ("<<n2<<")";
    
    else
         cout<<"Large number is third number ("<<n3<<")";
    
    return 0;
}
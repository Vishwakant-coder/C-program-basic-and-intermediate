#include<iostream>
using namespace std;
int main(){
int p,r,t;
float si;
cout<<"Enter principle amount : ";
cin>>p;
cout<<"Enter rate : ";
cin>>r;
cout<<"Enter time : ";
cin>>t;
si=(p*r*t)/100;
cout<<"Simple Interset is equal to "<<si;
return 0;
}
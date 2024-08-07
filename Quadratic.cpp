#include<iostream>
using namespace std;
#include<math.h>
int main(){
int a,b,c, qr1,qr2;
int z;
cout<<"Enter qurdatic equation(ax^2+bx+c) : ";
cout<<"Variable of x^2 : ";
cin>>a;
cout<<"Variable of x : ";
cin>>b;
cout<<"Variable of constact : ";
cin>>c;
cout<<"Your equation is "<<a<<"x^2+"<<b<<"x+"<<c<<endl;
z=b*b-4*a*c;
if(z>=0){
    qr1=(-b+pow(z,0.5))/2*a;
    qr2=(-b-pow(z,0.5))/2*a;
   cout<<"x is equal to \nx= "<<qr1<<"and  x=  "<<qr2<<endl;
}
else
{
    cout<<"this is not quradatic equation."<<endl;
}
    return 5;
}
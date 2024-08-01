#include<iostream>
using namespace std;
int main(){
int num,i,j,k,b,x,y=1,z=1; 
cout<<"Enter the number of rows : ";
cin>>num;
x=num*3;                                              
    for(i=num;i>=1;i--){ 
        for(k=1;k<=x;k++){
        cout<<" ";
      }
        for(j=y;j>=1;j--){   
         cout<<" "<<j<<" ";
        }
        for(b=2;b<=z;b++){  
           cout<<" "<<b<<" ";
      }
       x--;
       x--;
       x--;
       y++;
       z++;
    cout<<endl;
  }
}
#include<iostream>
using namespace std;
int main(){
   int i,n,sum=0;
    cout<<"Enter number : ";
    cin>>n;
    for(i=0;i<=n;i++){
    sum+=i;
    }
    cout<<"The sum of "<<n<<" term of natural number is "<<sum;
    
    return 0;
}
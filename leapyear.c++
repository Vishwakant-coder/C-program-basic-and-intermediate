#include<iostream>
using namespace std;
int main(){
    int yr;
    cout<<"Enter year for finding leap year or not : ";
    cin>>yr;
    if(yr%100!=0){
    if(yr%4==0)
    cout<<"This is leap year";
    else 
    cout<<"This is not leap year";
    }
    else
    {
        if(yr%400==0)
        cout<<"This is leap year";
    else 
    cout<<"This is not leap year";
    }
    return 0;
}
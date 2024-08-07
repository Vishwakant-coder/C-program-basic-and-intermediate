#include<iostream>
using namespace std;

class employees{
int id; //id 
char name[30];   //name of employees
int basic;
int it;   //income tax
int da;
int to_sa;  //total salary
public:
void fil_det();   //fill detial
void dis_det();  //display salary
};
void employees::fil_det(){
    cout<<"Enter the detail........."<<endl;
    cout<<"Eter the employee id : ";
    cin>>id;
    cout<<"Enter the name of employee : ";
    cin>>name;
    cout<<"Enter the basic of employee : ";
    cin>>basic;
    cout<<"Enter the da of employee : ";
    cin>>da;
    cout<<"Enter the Income tax of employee : ";
    cin>>it;
    to_sa=it+da;
}
void employees::dis_det(){
    cout<<".........The detials of Employees......";
    cout<<"The name of employee : "<<name<<endl;
    cout<<"The id of employee : "<<id<<endl;
    cout<<"Basic is : "<<basic<<endl;
    cout<<"DA : "<<da<<endl;
    cout<<"Income Tax : "<<it<<endl;
    cout<<"Total salary : "<<to_sa<<endl;
}

int main(){
    employees emp;
    emp.fil_det();
    emp.dis_det();
    return 0;
}


//8115570925
#include<iostream>
using namespace std;
class Employee{
    private:
        char name[10];
        int roll;
        char dept[10];
    public:
        void getdata(){
            cout<<"Enter name, roll and dept ";
            cin>>name>>roll>>dept;
        }
        void display(){
            cout<<name;
            cout<<roll;
            cout<<dept;
        }
       // void test(int num){
      //      cout<<num;
      //  }
};

int  main(){
    Employee emp;
    // emp.roll =101;      //give error because it is private
     emp.getdata();      //give error because it is private
     emp.display();      //give error because it is private
    //emp.test();
    return 0;
}
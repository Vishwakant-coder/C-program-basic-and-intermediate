//Write A1 C++ program to create multilevel inheritance. (Hint: Classes A1, A2, A3)C++ program to implementMultilevel Inheritance
#include <iostream>
using namespace std;
// single base class
class A1 {
public:
	int a;
	void get_A1_data()
	{
		cout << "Enter first value : ";
		cin >> a;
	}
};
class B1 : public A1 {// derived class from base class
public:
	int b;
	void get_B1_data()
	{
		cout << "Enter second value : ";
		cin >> b;
	}
};
class C1 : public B1 {// derived from class derive1
	int c;
public:
	void get_C1_data()
	{
		cout << "Enter third value : ";
		cin >> c;
	}
	void sum()
	{
		int ans = a + b + c;
		cout << "sum: " << ans;
	}
};
int main()
{
	C1 obj;

	obj.get_A1_data();
	obj.get_B1_data();
	obj.get_C1_data();
	obj.sum();
	return 0;
}

//Write a C++ Program to find total salary of n employees in a department where da = 50%,basicpay and hra = 10% of basicpay
#include <iostream>
using namespace std;

class Employee {
    private:
        float basicpay, hr, da;
        
    public:
        void getBasicPay() {
            cout << "Enter basic pay of employee: ";
            cin >> basicpay;
        }
        
        void calculateSalary() {
            hr = 0.1 * basicpay;
            da = 0.5 * basicpay;
        }
        
        float getTotalSalary() {
            return basicpay + hr + da;
        }
};

int main() {
    int n;
    float total_salary = 0;
    
    cout << "Enter the number of employees: ";
    cin >> n;
    
    Employee employees[n]; // create an array of n Employee objects
    
    for(int i=0; i<n; i++) {
        cout<<"Employee"<<1+i<<endl;
        employees[i].getBasicPay();
        employees[i].calculateSalary();
        total_salary += employees[i].getTotalSalary(); // add salary of current employee to total salary
    }
    
    cout << "Total salary of " << n << " employees is: " << total_salary << endl;
    
    return 0;
}

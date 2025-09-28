#include<iostream>
#include "Employee.h"
using namespace std;
int main()
{
	Employee* emp;
	ContractEmployee c(800.0, 30.0);
	PermanentEmployee p(40000.0, 5000.0);
	
	emp = &c;
	cout << "\n Contract Employee Salary: " << emp->calculateSalary();
	
	emp = &p;
	cout << "\n Permanent Employee Salary: " << emp->calculateSalary();
	return 0;
}

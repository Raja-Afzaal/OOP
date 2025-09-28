#include<iostream>
using namespace std;
class Employee{
	public:
	virtual double calculateSalary()
	{
		return 0;
	}	
};
class PermanentEmployee : public Employee{
	private:
	double basicSalary, bonus;
	public:
	PermanentEmployee(double bs, double bo)
	{
		basicSalary = bs;
		bonus = bo;
	}
	double calculateSalary() override
	{
		return basicSalary + bonus;
	}	
};
class ContractEmployee : public Employee{
	private:
	double hourlyRate, hoursWorked;
	public:
	ContractEmployee(double r, double w)
	{
		hourlyRate = r;
		hoursWorked = w;
	}
	double calculateSalary() override
	{
		return hourlyRate*hoursWorked;
	}	
};

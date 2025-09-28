#include<iostream>
using namespace std;
class Employee {
	private:
		string name;
		int salary;
	
	public:
		Employee(string n, int s)
		{
			name = n;
			salary = s;
		}
		
		void display_employee()	
		{
			cout << "Name: " << name << endl;
			cout << "Salary: $" << salary << endl;
		}
};
class Developer : public Employee {
	private:
		string programming_language;
		
	public:
		Developer(string n, int s, string language) : Employee( n, s)
		{
			programming_language = language;
		}
		
		void display_developer()
		{
			display_employee();
			cout << "Programming Language: " << programming_language << endl;
		}	
};
class Designer : public Employee {
	private:
		string design_tool;
		
	public:
		Designer(string n, int s, string tool) : Employee( n, s)
		{
			design_tool = tool;
		}
		
		void display_designer()
		{
			display_employee();
			cout << "Design Tool: " << design_tool << endl;
		}
};

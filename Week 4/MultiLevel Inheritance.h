#include<iostream>
using namespace std;
class Person {
	private:
		string name;
		int age;
		
	public:
		Person(string n, int a)
		{
			name = n;
			age = a;
		}
		
		void display_person()
		{
			cout << "Name: " << name << endl;
			cout << "Age: " << age << endl;
		}	
};
class Employee : public Person {
	private:
		int employee_id;
		
	public:
		Employee(string n, int a, int id) : Person( n, a )
		{
			employee_id = id;
		}
		
		void display_employee()
		{
			display_person();
			cout << "Employee ID: " << employee_id << endl;
		}	
};
class Manager : public Employee {
	private:
		string department;
		
	public:
		Manager(string n, int a, int id, string dept) : Employee( n, a, id)
		{
			department = dept;
		}
		
		void display_manager()
		{
			display_employee();
			cout << "Department: " << department << endl;
		}	
};

#include<iostream>
#include "Single Inheritance.h"
#include "MultiLevel Inheritance.h"
#include "Hierarchical Inheritance.h"
#include "Multiple Inheritance.h"
using namespace std;
int main()
{
	//Single Inheritance
	Student s("Afzal", 21, 12534);
	s.display_student_info();
	return 0;
	
	//MultiLevel Inheritance
	string name, dept;
	int age, id;
	
	cout << "Enter the Name: " << endl;
	cin >> name;
	
	cout << "Enter the Age: " << endl;
	cin >> age;
	
	cout << "Enter the Employee Id: " << endl;
	cin >> id;
	
	cout << "Enter the Department: " << endl;
	cin >> dept;
	
	cout << "-----Manager---------- " << endl;
	Manager m(name, age, id, dept);
	m.display_manager();
	
	return 0;
	
	//Hierarchical Inheritance
	Developer dev("Afzal", 25000, "C++");
	Designer des("Ahmed", 15000, "Canva");
	
	dev.display_developer();
	cout << "-----Designer------- " << endl;
	des.display_designer();
	
	return 0;
	
	//Multiple Inheritance
	Photocopier ph;
	ph.print_document();
	ph.scan_document();
	ph.photocopy();
	
	return 0;
}

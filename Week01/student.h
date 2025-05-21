#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int rollNumber;
		float marks;
		
		void getData()
		{
			cout << "\n Enter the name: ";
			cin >> name;
			cout << "\n Enter the Roll Number: ";
			cin >> rollNumber;
			cout << "\n Enter the Marks: ";
			cin >> marks;
		}
		
		void displayData()
		{
			cout << "\n \t\tStudent Information\t\t ";
			cout << "\n Name: " << name;
			cout << "\n Roll Number: " << rollNumber;
			cout << "\n Marks: " << marks; 
		}
};

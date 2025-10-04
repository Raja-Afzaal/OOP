#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outFile("students.txt");
	if(!outFile)
	{
		cerr << "Error! Unable to open for writing ";
		return 1;
	}
	string name;
	int rollNo;
	cout << "Enter Details for 3 Students: " << endl;
	for(int i = 1; i <= 3; i++)
	{
		cout << "\n Student " << i << ": Name: ";
		getline(cin, name);
		
		cout << "Student " << i << ": Roll No.: ";
		cin >> rollNo;
		cin.ignore();
		
		outFile << name << " " << rollNo << endl; 
	}
	outFile.close();
	
	ifstream inFile("students.txt");
	if(!inFile)
	{
		cerr << "Error! Unable to open file for reading ";
		return 1;
	}
	
	cout << "Students Details: " << endl;
	
	while(inFile >> name >> rollNo )
	{
		cout << "Name: " << name << " , " << "Roll No. : " << rollNo << endl;
	}
	inFile.close();
	return 0;
}

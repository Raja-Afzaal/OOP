#include<iostream>
#include<fstream>
using namespace std;

void task3_seekp()
{
	fstream file("Student.txt", ios::in | ios::out | ios::trunc);
	file << "01,Awais,3.5 ";
	file << "02,Kashif,3.8 ";
	file << "03,Zahid,2.5 ";
	file << "04,Ahmed,4.0 ";
	cout << "Position of write pointer after writing: " << file.tellp() << endl;
	
	file.seekp(-13, ios::cur);
	file << "05,Nadir,2.78";
	file.close();
}

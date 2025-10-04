#include<iostream>
#include<fstream>
using namespace std;

void task1_tellp()
{
	fstream out("greet.txt", ios::out);
	cout << "Position of the writer pointer before writing:" << out.tellp() << endl;
	
	out << "A";
	
	cout << "Position of the writer pointer after writing a single character:" << out.tellp() << endl;
	
	out.close();
}

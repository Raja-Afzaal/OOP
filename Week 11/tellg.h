#include<iostream>
#include<fstream>
using namespace std;

void task2_tellg()
{
	fstream in("greet.txt", ios::in);
	cout << "Position of the writer pointer before writing:" << in.tellg() << endl;
	
	char ch;
	in.get(ch);
	
	cout << "Position of the writer pointer after writing a single character:" << in.tellg() << endl;
	
	in.close();
}

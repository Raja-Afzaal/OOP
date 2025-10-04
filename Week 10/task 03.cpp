#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream inFile("notes.txt");
	ofstream outFile("copy.txt");
	
	if(!inFile)
	{
		cerr << "Error! Unable to open file for reading ";
		return 1;
	}
	
	if(!outFile)
	{
		cerr << "Error! Unable to open file for copying ";
		return 1;
	}
	
	string line;
	int count;
	while(getline(inFile, line))
	{
		outFile << line << endl;
		count++;
	}
	inFile.close();
	outFile.close();
	
	cout << "File copied successfully! " << endl;
	cout << "Total number of lines copied: " << count << endl;
	return 0;
}

#include <iostream>
#include <fstream>
using namespace std;

void task4_seekg() 
{
    fstream file("student.txt", ios::in);

    cout << "Position of pointer before reading: " << file.tellg() << endl;

    file.seekg(17); 

    char ch;
    file.get(ch);

    cout << "Character Read: " << ch
         << "Position of pointer after reading: " << file.tellg() << endl;

    file.close();
}

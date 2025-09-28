#include<iostream>
#include "StaticMember.h"
#include "StaticFunc.h"
using namespace std;

// Definition of static members outside the class
int A::count = 0;
int B::count = 0;

int main() 
{
    cout << "------Task 1: Static Data Member --------" << endl;
    A a;
	A b;
	A c;
    cout << "Total objects of class A created so far: " << A::count << endl;

    cout << "\n------- Task 2: Static Member Function --------" << endl;
    B d;
	B e;
	B f;
    B::showCount();

    return 0;
}

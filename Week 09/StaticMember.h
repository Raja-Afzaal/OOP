#include <iostream>
using namespace std;

class A {
	public:
    static int count;

    A() 
	{
        count++; 
    }
};

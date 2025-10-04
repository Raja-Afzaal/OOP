#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double a, double b) 
{
    if (b == 0) 
	{
        throw runtime_error("Error: Cannot Divide by zero!");
    }
    else
    {
    	return a / b;
	}
}

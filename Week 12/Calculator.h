#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Calculator {
	public:
    T add(T a, T b) 
	{ 
		return a + b; 
	}
    
	T subtract(T a, T b) 
	{
		return a - b; 
	}
    
	T multiply(T a, T b) 
	{ 
		return a * b; 
	}

    T divide(T a, T b) 
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
};

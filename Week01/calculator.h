#include<iostream>
using namespace std;
class Calculator
{
	public:
	float num1;
	float num2;
	
	float add();
	float subtract();
	float multiply();
	float divide();	
};
	float Calculator::add()
	{
		return (num1 + num2);
	}
	
	float Calculator::subtract()
	{
		return (num1 - num2);
	}
	
	float Calculator::multiply()
	{
		return (num1 * num2);
	}
	
	float Calculator::divide()
	{
		if(num2 != 0)
		{
		return (num1 / num2);
		}
		else
		{
			cout << "\n Undefined! ";
		}
	}

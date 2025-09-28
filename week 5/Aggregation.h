#include<iostream>
using namespace std;
class SharedCalculator {
	private:
		double lastResult;
	public:
		SharedCalculator()
		{
			lastResult = 0;
		}
		
		void add(double a, double b)
		{
			lastResult = a + b;
			cout << "Result: " << lastResult << endl;
		}
		
		void multiply(double a, double b)
		{
			lastResult = a*b;
			cout << "Result: " << lastResult << endl;
		}
		
		double getLastResult()
		{
			return lastResult;
		}
				
};
class Student {
	private:
		string name;
		SharedCalculator* calculator;
	public:	
		Student(string n, SharedCalculator* calc)
		{
			name = n;
			calculator = calc;
		}
		
		void addition(double a, double b)
		{
			cout << name << "is doing addition: " << endl;
			calculator->add(a, b);
		}
		
		void multiplication(double a, double b)
		{
			cout << name << "is doing multiplication: " << endl;
			calculator->multiply(a, b);
		}
		
		double checkedLastResult()
		{
			cout << name << "Checked last result: " << calculator->getLastResult() << endl;
		} 
};

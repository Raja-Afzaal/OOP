#include<iostream>
using namespace std;
class Display {
	private:
		double lastResult;
	public:
		Display()  
		{
			lastResult = 0;
		}
		void displayResult(double result)
		{
			lastResult = result;
			cout << "result: " << result << endl;
		}
		double getLastResult()
		{
			return lastResult;
		}
	};

class Calculator{
	private:
		Display display;
	public:
		void add(double a, double b)
		{
			double result = a + b;
			display.displayResult(result);
		}
	
		void mul(double a, double b)
		{
			double result = a*b;
			display.displayResult(result);
		}	
		
		double getlastDisplayedResult()
		{
			return display.getLastResult();
		}
};

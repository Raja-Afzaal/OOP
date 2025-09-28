#include<iostream>
#include "Aggregation.h"
#include "Composition.h"
using namespace std;
int main()
{
	// task 1: Aggregation
	cout << "------Aggregation-------- " << endl;
	SharedCalculator sharedCalc;
	Student s1("Afzal", &sharedCalc);
	Student s2("Ahmed", &sharedCalc);
	
	s1.checkedLastResult();
	s2.checkedLastResult();
	
	// task 2: Composition
	cout << "\n------Composition------- " << endl;
	Calculator calc;
	calc.add(4,5);
	calc.mul(3,4);
	cout << "Last Result: " << calc.getlastDisplayedResult() << endl;
	return 0;
}

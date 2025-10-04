#include<iostream>
#include<stdexcept>
#include "Calculator.h"
#include "Logger.h">
using namespace std;
int main()
{
	// Task 3: Calculator
    try {
        cout << "\n-------Task 1: Calculator--------" << endl;
        Calculator<double> calc;	
        cout << "4+ 2 = " << calc.add(4, 2) << endl;
        cout << "6 - 3 = " << calc.subtract(6, 3) << endl;
        cout << "7 * 2 = " << calc.multiply(7, 2) << endl;
        cout << "2 / 0 = ";
        cout << calc.divide(2, 0) << endl; // error
    } 
	catch (exception &e) 
	{
        cout << e.what() << endl;
    }
    
    // Task 4: Logger
    cout << "\n------Task 2: Logger-------" << endl;
    Logger<string> logger;   // Logger for strings
    logger.log("Program executed successfully!");

    Logger<int> intLogger;    // Logger for integers
    intLogger.log(404);

    Logger<double> doubleLogger;   // Logger for doubles
    doubleLogger.log(3.14159);

    return 0;
}

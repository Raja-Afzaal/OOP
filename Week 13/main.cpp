#include<iostream>
#include<stdexcept>
#include "Division.h"
#include "Array.h"
using namespace std;
int main()
{
	// Task 1: Divide by Zero
    try {
        cout << "-----Task 1: Division by zero------" << endl;
        double result = divide(10, 0);
        cout << "Result: " << result << endl;
    } 
	catch (exception &e) 
	{
        cout << e.what() << endl;
    }
    
     // Task 2: Array 
    try {
        cout << "\n-------Task 2: Array--------" << endl;
        Array arr;
        int index, value;
        cout << "Enter index (0-2): ";
        cin >> index;
        cout << "Enter value: ";
        cin >> value;
        arr.setValue(index, value);
        cout << "Stored value at index " << index << " = " << arr.getValue(index) << endl;
    } catch (exception &e) {
        cout << e.what() << endl;
    }
    
    return 0;

}

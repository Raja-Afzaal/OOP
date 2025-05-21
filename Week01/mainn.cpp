#include<iostream>
#include<iomanip>
#include "student.h"
#include "Rectang.h"
#include "voter.h"
#include "temperature.h"
#include "calculator.h"
#include "product.h"
using namespace std;
int main()
{
	//Task 1: Student Record System
	student s1;
	s1.getData();
	s1.displayData();
	
	cout << setw(60) << setfill('_') << endl;
	//Task 2: Rectangle(Functions Outside Class)
	Rectangle r1;
	r1.setDimension();
	r1.area();
	r1.perimeter();
	
	cout << setw(60) << setfill('_') << endl;
	//Task 3: Voting Eligibility
	voter v1;
	v1.isEligible();

	cout << setw(60) << setfill('_') << endl;
	//Task 4: Temperature Convertor
	Temperature t1;
	cout << "\n Enter the Temperature in Celsius: ";
	cin >> t1.celsius;
	t1.displayTempt();
	
	cout << setw(60) << setfill('_') << endl;
	//Task 5: Calculator(Functions Outside Class)
	Calculator calc;
	char choice;
	cout << "\n Enter the two numbers: ";
	cin >> calc.num1 >> calc.num2;
	
	cout << "\n Enter the operator(+, -, *, /): ";
	cin >> choice;
	switch(choice)
	{
		case '+':
		cout << "\n Result = " << calc.add() << endl;
		break;
		
		case '-':
		cout << "\n Result = " << calc.subtract() << endl;
		break;
		
		case '*':
		cout << "\n Result = " << calc.multiply() << endl;
		break;
		
		case '/':
		cout << "\n Result = " << calc.divide() << endl;
		break;
		
		default:
		cout << "\n Invalid Choice! " << endl;
		break;	
	}

	cout << setw(60) << setfill('_') << endl;
	//Task 6: Encapsulation
    Product p;
    p.setName("");         // Should print error
    p.setPrice(-50);       // Should print error
    p.setQuantity(-2);     // Should print error

    p.setName("Laptop");
    p.setPrice(1200.50);
    p.setQuantity(5);

    cout << "Product: " << p.getName() << endl;
    cout << "Price: $" << p.getPrice() << endl;
    cout << "Quantity: " << p.getQuantity() << endl;

    return 0;
}

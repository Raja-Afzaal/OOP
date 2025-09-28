#include<iostream>
#include "Shallowcopy.h"
#include "Deepcopy.h"
#include "Person.h"
#include "Shape.h"
using namespace std;
int main() 
{
	// SHALLOW COPY CONSTRUCTOR
    cout << "Creating account1... \n";
    BankAccount account1(1000.0);

    cout << "Creating account2 as a copy of account1 (shallow copy)... \n";
    BankAccount account2 = account1;

    cout << "Balances before modification: \n";
    account1.showBalance();
    account2.showBalance();

    cout << "Modifying account2's balance... \n";
    account2.setBalance(5000.0);

    cout << "Balances after modification (shared memory): \n";
    account1.showBalance();
    account2.showBalance();

    cout << "Exiting main... (destructors will be called) \n";
    return 0;
	   
//    //DEEP COPY CONSTRUCTOR
//    
//    cout << "Creating account1..." << endl;
//    BankAccount account1(1000.0);
//
//    cout << "Creating account2 as a deep copy of account1..." << endl;
//    BankAccount account2 = account1; 
//
//    cout << "Balances before modification:" << endl;
//    account1.showBalance();
//    account2.showBalance();
//
//    cout << "Modifying account2's balance..." << endl;
//    account2.setBalance(5000.0);
//
//    cout << "Balances after modification (separate memory):" << endl;
//    account1.showBalance(); 
//    account2.showBalance();
//
//    cout << "Exiting main... (destructors will be called safely)" << endl;
//    return 0;

// PERSON INHERITANCE

// 	Student s1;
//
//    cout << "Setting Student info..." << endl;
//    s1.setStudent("Ali", 20, 101);
//
//    cout << "\nDisplaying Student info..." << endl;
//    s1.showStudent();
//
//    return 0;

// SHAPE INHERITANCE

//	cout << "Creating Rectangle object..." << endl;
//    Rectangle r;
//
//    return 0;

}


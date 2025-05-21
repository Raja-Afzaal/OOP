#include<iostream>
#include<string>
#include "Employee.h"
#include "BankAccount.h"
#include "Rectangle.h"
#include "Locker.h"
using namespace std;
int main() 

{
    Employee emply;
    cout << "Employee Details:" << endl;
    emply.displayDetails();

}
//// Bank Account
//
//	BankAccount acc("PK0309800780100", "Muhammad Awais", 10000.0);
//    cout << "Bank Account Details:" << endl;
//    acc.showAccountDetails();
//    return 0;
//
//
//// Rectangle 
//
//    Rectangle rect1;
//    cout << "Rectangle 1:" << endl;
//    rect1.display();
//
//    Rectangle rect2(4.5, 2.0);
//    cout << "\n Rectangle 2:" << endl;
//    rect2.display();
//
//    Rectangle rect3(3.0);
//    cout << "\nRectangle 3:" << endl;
//    rect3.display();
//
//    return 0;
//
//
//// Locker 
//
//    {
//        Locker locker1;  
//    } 
//
//    cout << "Now creating locker on new." << endl;
//    Locker* locker2 = new Locker(); 
//    delete locker2;                 
//	return 0;
//}

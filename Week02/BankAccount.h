#include <iostream>
using namespace std;
class BankAccount {
	private:
    string accountNumber;
    string accountHolder;
    double balance;

	public:
    BankAccount(string accNum, string accHolder, double bal) 
	{
    	accountNumber = accNum;
    	accountHolder = accHolder;
    	balance = bal;
    }

    void showAccountDetails() 
	{
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: $" << balance << endl;
    }
};

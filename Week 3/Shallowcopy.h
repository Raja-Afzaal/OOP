#include <iostream>
using namespace std;

class BankAccount {
	private:
    double* balance;

	public:
    BankAccount(double bal) 
	{
        balance = new double(bal);
        cout << "Constructor called. Balance initialized: " << *balance << endl;
    }

    BankAccount(const BankAccount& obj) 
	{
        balance = obj.balance; 
        cout << "Shallow Copy Constructor called. \n";
    }

    ~BankAccount() 
	{
        cout << "Destructor called. Releasing memory... \n";
        delete balance;
    }
    
    void setBalance(double bal) 
	{
        *balance = bal;
    }

    void showBalance() const 
	{
        cout << "Balance: " << *balance << endl;
    }
};


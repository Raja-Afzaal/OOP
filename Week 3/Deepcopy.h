//#include <iostream>
//using namespace std;
//
//class BankAccount{
//	private:
//    double* balance;
//
//	public:
//    BankAccount(double bal)
//	{
//        balance = new double(bal);
//        cout << "Constructor called. Balance initialized: " << *balance << endl;
//    }
//
//    BankAccount(const BankAccount& obj) 
//	{
//        balance = new double(*obj.balance);
//        cout << "Deep Copy Constructor called." << endl;
//    }
//
//    ~BankAccount() 
//	{
//        cout << "Destructor called. Releasing memory..." << endl;
//        delete balance;
//    }
//
//    void setBalance(double bal) 
//	{
//        *balance = bal;
//    }
//
//    void showBalance() const 
//	{
//        cout << "Balance: " << *balance << endl;
//    }
//};

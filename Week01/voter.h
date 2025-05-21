#include<iostream>
using namespace std;
class voter
{
public:
	string name;
	int age;
	
	void isEligible();
};
	void voter::isEligible()
	{
		cout << "\n Enter your name: ";
		cin >> name;
		cout << "\n Enter your age: ";
		cin >> age;
		if(age > 18)
		{
			cout << "\n Eligible for voting ";
		}
		else
		{
			cout << "\n Not Eligible for voting. You must be over 18 for voting.";
		}
	}

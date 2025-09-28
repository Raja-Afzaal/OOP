#include<iostream>
using namespace std;
class Distance{
	private:
	double feet, inches;
	public:
	Distance()
	{
		
	}
	Distance(double f, double i)
	{
		feet = f;
		inches = i;
	}
	bool operator == (Distance d)
	{
		return (feet == d.feet && inches == d.inches);
	}
	void Display()
	{
		cout << feet << " feet " << inches << " inches " << endl;
	}	
};

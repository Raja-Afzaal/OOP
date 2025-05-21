#include<iostream>
using namespace std;
class Temperature
{
	public:
	float celsius;
	
	float conversion()
	{
		return (celsius * 9.0 / 5.0) + 32;
	}
	void displayTempt()
	{
		float fahrenheit = conversion();
		cout << "\n Fahrenheit: " << fahrenheit << " F";
	}	
};

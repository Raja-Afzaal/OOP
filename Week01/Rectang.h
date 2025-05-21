#include<iostream>
using namespace std;
class Rectangle
{
public:
	int length;
	int width;
	
	void setDimension();
	void area();
	void perimeter();
};

	void Rectangle::setDimension()
	{
		cout << "\n Enter the Length: ";
		cin >> length;
		cout << "\n Enter the Width: ";
		cin >> width;
	}
	void Rectangle::area()
	{
		int a = length*width;
		cout << "\n Area of Rectangle: " << a;
	}
	void Rectangle::perimeter()
	{
		int p = 2*length + 2*width;
		cout << "\n Perimeter of Rectangle: " << p;
	}

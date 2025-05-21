#include <iostream>
using namespace std;

class Product
{	
  	private:
    string name;
    double price;
    int quantity;

public:
    void setName(string n) 
	{
    if (n.empty()) 
	{
        cout << "Error: Name cannot be empty." << endl;
    } else
	 {
        name = n;
        }
    }

    void setPrice(double p) 
	{
        if (p <= 0) 
		{
            cout << "Error: Price must be greater than 0." << endl;
        } else 
		{
            price = p;
        }
    }

    void setQuantity(int q) 
	{
        if (q < 0) 
		{
            cout << "Error: Quantity cannot be negative." << endl;
        } else 
		{
            quantity = q;
        }
    }

    string getName() 
	{
        return name;
    }

    double getPrice() 
	{
        return price;
    }

    int getQuantity() 
	{
        return quantity;
    }
};

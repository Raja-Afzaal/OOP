#include<iostream>
#include "Distance.h"
using namespace std;
int main()
{
	Distance d1(5, 3), d2(5, 3);
	if(d1 == d2)
	{
		cout << "\n Two Distances are equal ";
	}
	else
	{
		cout << "\n Two Distances are not equal ";
	}
	return 0;
}

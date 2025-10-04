#include <iostream>
#include <stdexcept>
using namespace std;

class Array {
private:
    int arr[3];
public:
    Array() 
	{
        for (int i = 0; i < 3; i++) 
		{
			arr[i] = 0;
		}
    }

    void setValue(int index, int value) {
        if (index < 0 || index >= 3) {
            throw out_of_range("Error: Index out of bounds!");
        }
        arr[index] = value;
    }

    int getValue(int index) {
        if (index < 0 || index >= 3) {
            throw out_of_range("Error: Index out of bounds!");
        }
        return arr[index];
    }
};

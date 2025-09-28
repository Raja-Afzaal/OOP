#include <iostream>
using namespace std;

class B {
	public:
    static int count;

    B() 
	{
        count++;
    }

    static void showCount() {
        cout << "Total objects created so far: " << count << endl;
    }
};

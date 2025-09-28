#include "Area.h"
#include "Shape.h"

int main() 
{
    cout << "----- Task 2: Friend Function Example -----" << endl;

    Circle c2(10);
    Rectangle r2(20, 10);

    cout << "Total area = " << totalArea(c2, r2) << endl;

	cout << "----- Task 1: Pure Virtual Function Example -----" << endl;

    CircleShape c1;
    RectangleShape r1;

    c1.draw();
    r1.draw();

    cout << endl;

    return 0;
}

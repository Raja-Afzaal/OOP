#include<iostream>
#include "Shape.h"
using namespace std;
int main() {
    Shape* shapePtr;

    Rectangle rect(5, 3);
    Circle circ(4);

    shapePtr = &rect;
    cout << "Rectangle area: " << shapePtr->area() << endl;

    shapePtr = &circ;
    cout << "Circle area: " << shapePtr->area() << endl;

    return 0;
}

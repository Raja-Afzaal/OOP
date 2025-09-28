#include <iostream>
using namespace std;

class Rectangle;
class Circle {
private:
    int radius;

public:
    Circle(int r) 
	{
        this->radius = r;
    }

    friend double totalArea(Circle c, Rectangle r);
};

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) 
	{
        this->length = l;
        this->width = w;
    }

    friend double totalArea(Circle c, Rectangle r);
};

double totalArea(Circle c, Rectangle r) 
{
    return (3.14 * c.radius * c.radius) + (r.length * r.width);
}

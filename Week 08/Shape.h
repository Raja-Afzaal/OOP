#include <iostream>
using namespace std;
class Shape {
public:
    virtual void draw()=0; 
};

class CircleShape : public Shape {
public:
    void draw() override 
	{
        cout << "Drawing a circle" << endl;
    }
};


class RectangleShape : public Shape {
public:
    void draw() override 
	{
        cout << "Drawing a rectangle" << endl;
    }
};

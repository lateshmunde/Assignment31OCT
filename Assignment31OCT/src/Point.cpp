
#include  "../headers/Point.h"

class Point : public Shape
{
private:
    double x;
    double y;

public:
    Point() {}
    Point(double x = 0, double y = 0) : x(x), y(y) {}

    double getX() 
    {
        return x; 
    }

    double getY() 
    { 
        return y;
    }

    double perimeter()
    {
        return 0;
    }

    double area()
    {
        return 0;
    }

    ~Point() {}
};
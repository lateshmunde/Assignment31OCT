
#include  "../headers/Point.h"


Point::Point() {}

Point::Point(double x = 0, double y = 0) : x(x), y(y) {}

    double Point::getX() 
    {
        return x; 
    }

    double Point::getY() 
    { 
        return y;
    }

    double Point::perimeter()
    {
        return 0;
    }

    double Point::area()
    {
        return 0;
    }

    Point::~Point() {}

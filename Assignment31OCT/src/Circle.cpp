#include <cmath>
#include "../headers/Circle.h"

class Circle : public Point
{
private:
    Point p1;
    Point p2;
    double radius;

public:
    Circle(Point p1, Point p2) : p1(p1), p2(p2)
    {
    }

    double length(Point& p1, Point& p2)
    {
        double sq_X = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX());
        double sq_Y = (p2.getY() - p1.getY()) * (p2.getY() - p1.getY());
        return sqrt(sq_X + sq_Y);
    }
    double radiusFn()
    {
        radius = length(p1, p2);
        return radius;
    }

    double perimeter()
    {
        double p = 2 * 3.14 * length(p1, p2);
        return p;
    }

    double area()
    {

        return 3.14 * length(p1, p2) * length(p1, p2);
    }
    ~Circle() {}
};
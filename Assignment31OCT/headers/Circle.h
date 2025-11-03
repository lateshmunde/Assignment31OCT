#pragma once
#include "Point.h"

class Circle : public Point
{
private:
    Point p1;
    Point p2;
    double radius;

public:
    Circle(Point p1, Point p2);

    double length(Point& p1, Point& p2);
    double radiusFn();
    double perimeter();
    double area();

    ~Circle();
};
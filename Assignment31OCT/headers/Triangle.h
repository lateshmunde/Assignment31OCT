#pragma once
#include    <cmath>
#include    "Point.h"

class Triangle : public Point
{
private:
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle(Point p1, Point p2, Point p3);

    double length(Point& p1, Point& p2);
    double perimeter();

    double area();
    ~Triangle();
};
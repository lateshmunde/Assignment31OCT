#pragma once
#include "Point.h"

class Rectangles : public Point
{
private:
    Point p1;
    Point p2;
    Point p3;
    Point p4;

public:
    Rectangles(Point p1, Point p2, Point p3, Point p4);

    double length(Point& p1, Point& p2);
    double perimeter();
    double area();

    ~Rectangles();
};
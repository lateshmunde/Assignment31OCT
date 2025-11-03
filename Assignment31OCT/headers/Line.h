#pragma once
#include <cmath>
#include "Point.h"


class Line : public Point
{
private:
    Point p1;
    Point p2;

public:
    Line(Point p1, Point p2);

    double perimeter();
        
    double area();

    ~Line();
};
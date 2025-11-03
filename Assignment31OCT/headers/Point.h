#pragma once
#include "Shape.h"

class Point : public Shape
{
private:
    double x;
    double y;

public:
    Point();
    Point(double x, double y);

    double getX();
    double getY();

    double perimeter();
   
    double area();
    ~Point();
};

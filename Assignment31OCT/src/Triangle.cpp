#include <cmath>
#include "../headers/Triangle.h"

class Triangle : public Point
{
private:
    Point p1;
    Point p2;
    Point p3;

public:
    Triangle(Point p1, Point p2, Point p3) : p1(p1), p2(p2), p3(p3) {}

    double length(Point& p1, Point& p2)
    {
        double sq_X = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX());
        double sq_Y = (p2.getY() - p1.getY()) * (p2.getY() - p1.getY());
        return sqrt(sq_X + sq_Y);
    }

    double perimeter()
    {
        double s = length(p1, p2) + length(p3, p2) + length(p1, p3);
        return s;
    }

    double area()
    {
        double s = perimeter();
        return sqrt(s * (s - length(p1, p2)) * (s - length(p3, p2)) * (s - length(p1, p3)));
    }
    ~Triangle() {}
};
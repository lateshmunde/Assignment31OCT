#include    "../headers/Line.h"

class Line : public Point
{
private:
    Point p1;
    Point p2;

public:
    Line(Point p1, Point p2) : p1(p1), p2(p2) {}

    double perimeter()
    {
        double sq_X = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX());
        double sq_Y = (p2.getY() - p1.getY()) * (p2.getY() - p1.getY());

        return sqrt(sq_X + sq_Y);
    }

    double area()
    {
        return perimeter();
    }

    ~Line() {}
};
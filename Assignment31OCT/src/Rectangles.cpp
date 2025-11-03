#include <cmath>
#include "../headers/Rectangles.h"

Rectangles :: Rectangles(Point p1, Point p2, Point p3, Point p4) : p1(p1), p2(p2), p3(p3), p4(p4) {}

    double Rectangles::length(Point& p1, Point& p2)
    {
        double sq_X = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX());
        double sq_Y = (p2.getY() - p1.getY()) * (p2.getY() - p1.getY());
        return sqrt(sq_X + sq_Y);
    }

    double Rectangles:: perimeter()
    {
        double p = 2 * (length(p1, p2) + length(p3, p2));
        return p;
    }

    double Rectangles:: area()
    {

        return (length(p1, p2) * length(p3, p2));
    }
    Rectangles :: ~Rectangles() {}

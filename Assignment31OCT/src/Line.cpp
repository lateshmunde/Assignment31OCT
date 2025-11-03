#include    "../headers/Line.h"




Line::Line(Point p1, Point p2) : p1(p1), p2(p2) {}

    double Line:: perimeter()
    {
        double sq_X = (p2.getX() - p1.getX()) * (p2.getX() - p1.getX());
        double sq_Y = (p2.getY() - p1.getY()) * (p2.getY() - p1.getY());

        return sqrt(sq_X + sq_Y);
    }

    double Line:: area()
    {
        return perimeter();
    }

    Line:: ~Line() {}
#include <iostream>
#include "../headers/Functions.h"

void CircleFn()
{
    double x1, y1;
    double x2, y2;
    std::cout << "Point 1 ( x & y Coordinate Centre)";
    std::cin >> x1 >> y1;
    std::cout << "Point 2 ( x & y Coordinate)";
    std::cin >> x2 >> y2;
    Point p1(x1, y1);
    Point p2(x2, y2);
    Circle(p1, p2);
}
void RectangleFn()
{
    double x1, y1;
    double x2, y2;
    double x3, y3;
    double x4, y4;
    std::cout << "Point 1 ( x & y Coordinate)" << std::endl;
    std::cin >> x1 >> y1;
    std::cout << "Point 2 ( x & y Coordinate)" << std::endl;
    std::cin >> x2 >> y2;
    std::cout << "Point 3 ( x & y Coordinate)" << std::endl;
    std::cin >> x3 >> y3;
    std::cout << "Point 4 ( x & y Coordinate)" << std::endl;
    std::cin >> x4 >> y4;

    Rectangles(Point(x1, y1), Point(x2, y2), Point(x3, y3), Point(x3, y3));
}
void TriangleFn()
{
    double x1, y1;
    double x2, y2;
    double x3, y3;
    std::cout << "Point 1 ( x & y Coordinate)" << std::endl;
    std::cin >> x1 >> y1;
    std::cout << "Point 2 ( x & y Coordinate)" << std::endl;
    std::cin >> x2 >> y2;
    std::cout << "Point 3 ( x & y Coordinate)" << std::endl;
    std::cin >> x3 >> y3;

    Triangle(Point(x1, y1), Point(x2, y2), Point(x3, y3));
}
void LineFn()
{
    double x1, y1;
    double x2, y2;
    std::cout << "Point 1 ( x & y Coordinate Centre)";
    std::cin >> x1 >> y1;
    std::cout << "Point 2 ( x & y Coordinate)";
    std::cin >> x2 >> y2;

    Line(Point(x1, y1), Point(x2, y2));
}



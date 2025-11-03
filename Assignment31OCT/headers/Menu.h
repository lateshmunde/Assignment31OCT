#pragma once
#include <vector>

#include "Shape.h"
#include "Point.h"
#include "Circle.h"
#include "Rectangles.h"
#include "Triangle.h"
#include "Line.h"
#include "../headers/Functions.h"

void addShape();
void displayShape();
// std::vector<Shape*> getShapes();
void sortArea();
void searchPerimeter();
void deleteShape();
void undo();
void menuChoice();
void menu();
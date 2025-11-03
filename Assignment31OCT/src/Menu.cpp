#include <iostream>
#include <vector>
#include "../headers/Menu.h"


void addShape()
{
    std::cout << "Choose Shape Type:" << std::endl;
    std::cout << "1. Circle" << std::endl;
    std::cout << "2. Rectangle" << std::endl;
    std::cout << "3. Triangle" << std::endl;
    std::cout << "4. Line" << std::endl;

    int choice1;
    std::cin >> choice1;
    // std::cout << choice1;
    switch (choice1)
    {
    case 1:
        CircleFn();
        std::cout << "Circle created successfully!" << std::endl;
        break;
    case 2:
        RectangleFn();
        std::cout << "Rectangle created successfully!" << std::endl;
        break;
    case 3:
        TriangleFn();
        std::cout << "Triangle created successfully!" << std::endl;
    case 4:
        LineFn();
        std::cout << "Line created successfully!" << std::endl;
        break;
    default:
        break;
    }
}
void displayShape()
{
	/*std::vector <Shape*> shapes = getShapes();
	shapes.push_back(new Shape());*/

}
void sortArea() {}
void searchPerimeter() {}
void deleteShape() {}
void undo() {}

void menuChoice()
{
    int choice;
    std::cin >> choice;
    // std::cout << choice;
    switch (choice)
    {
    case 1:
        addShape();
        break;
    case 2:
        displayShape();
        break;
    case 3:
        sortArea();
        break;
    case 4:
        searchPerimeter();
        break;
    case 5:
        deleteShape();
        break;
    case 6:
        undo();
        break;
    case 7:
        break;
    default:
        break;
    }
}

void menu()
{
    std::cout << "----- Geometry Shape Analyzer -----" << std::endl;
    std::cout << "1. Add Shape" << std::endl;
    std::cout << "2. Display Shapes" << std::endl;
    std::cout << "3. Sort by Area" << std::endl;
    std::cout << "4. Search by Perimeter" << std::endl;
    std::cout << "5. Delete Shape" << std::endl;
    std::cout << "6. Undo Last Delete" << std::endl;
    std::cout << "7. Exit" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "Enter your choice: ";

    menuChoice();
}
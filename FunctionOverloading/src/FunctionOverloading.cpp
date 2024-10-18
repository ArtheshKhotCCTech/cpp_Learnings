#include <iostream>
#include "../HeaderFiles/Rectangle.h"

int main() {
    Rectangle rect1;
    std::cout << "Default Rectangle Area: " << rect1.area() << std::endl;
    std::cout << "Default Rectangle Perimeter: " << rect1.perimeter() << std::endl;

    Rectangle rect2(4.0, 5.0);
    std::cout << "Rectangle Area (4.0, 5.0): " << rect2.area() << std::endl;
    std::cout << "Rectangle Perimeter (4.0, 5.0): " << rect2.perimeter() << std::endl;

    std::cout << "Overloaded Area (3.0, 4.0): " << rect2.area(3.0, 4.0) << std::endl;
    std::cout << "Overloaded Perimeter (3.0, 4.0): " << rect2.perimeter(3.0, 4.0) << std::endl;

    return 0;
}

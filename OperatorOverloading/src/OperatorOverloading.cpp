#include <iostream>
#include "../HeaderFiles/Point.h"

int main() {
    Point p1(2.0, 3.0);
    Point p2(4.0, 5.0);

    Point p3 = p1 + p2;

    std::cout << "Point 1: " << p1 << std::endl;
    std::cout << "Point 2: " << p2 << std::endl;
    std::cout << "Sum of Point 1 and Point 2: " << p3 << std::endl;

    return 0;
}

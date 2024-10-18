#include <iostream>
#include "../HeaderFiles/MyConstant.h"
#include "../HeaderFiles/MyInline.h"

int main() {
    MyInline inlineCalc;

    int rectLength = 30, rectWidth = 20;
    if (rectLength > MyConstant::MAX_LENGTH || rectWidth > MyConstant::MAX_WIDTH) {
        std::cout << "Rectangle dimensions exceed maximum allowed values." << std::endl;
    }
    else {
        std::cout << "Rectangle Area: " << inlineCalc.calculateRectangleArea(rectLength, rectWidth) << std::endl;
        std::cout << "Rectangle Perimeter: " << inlineCalc.calculateRectanglePerimeter(rectLength, rectWidth) << std::endl;
    }

    int squareSide = 25;
    if (squareSide > MyConstant::MAX_SIDE) {
        std::cout << "Square side exceeds maximum allowed value." << std::endl;
    }
    else {
        std::cout << "Square Area: " << inlineCalc.calculateSquareArea(squareSide) << std::endl;
        std::cout << "Square Perimeter: " << inlineCalc.calculateSquarePerimeter(squareSide) << std::endl;
    }

    int radius = 15;
    if (radius > MyConstant::MAX_RADIUS) {
        std::cout << "Circle radius exceeds maximum allowed value." << std::endl;
    }
    else {
        std::cout << "Circle Area: " << inlineCalc.calculateCircleArea(radius) << std::endl;
        std::cout << "Circle Circumference: " << inlineCalc.calculateCircleCircumference(radius) << std::endl;
    }

    return 0;
}

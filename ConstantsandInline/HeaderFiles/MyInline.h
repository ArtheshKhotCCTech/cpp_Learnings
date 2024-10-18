#pragma once

class MyInline {
public:
    inline int calculateRectangleArea(int length, int width);
    inline int calculateRectanglePerimeter(int length, int width);

    inline int calculateSquareArea(int side);
    inline int calculateSquarePerimeter(int side);

    inline double calculateCircleArea(int radius);
    inline double calculateCircleCircumference(int radius);
};

inline int MyInline::calculateRectangleArea(int length, int width) {
    return length * width;
}

inline int MyInline::calculateRectanglePerimeter(int length, int width) {
    return 2 * (length + width);
}

inline int MyInline::calculateSquareArea(int side) {
    return side * side;
}

inline int MyInline::calculateSquarePerimeter(int side) {
    return 4 * side;
}

inline double MyInline::calculateCircleArea(int radius) {
    return MyConstant::PI * radius * radius;
}

inline double MyInline::calculateCircleCircumference(int radius) {
    return 2 * MyConstant::PI * radius;
}
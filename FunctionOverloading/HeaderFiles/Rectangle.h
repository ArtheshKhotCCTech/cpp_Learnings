#pragma once

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle(double w = 1.0, double h = 1.0);
    //Rectangle(int w = 1.0, double h); Throws error for wrong order of default parameters

    double area();
    double perimeter();
    double area(double w, double h);
    double perimeter(double w, double h);
};
#pragma once
#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point(double xCoord = 0.0, double yCoord = 0.0);

    Point operator+(const Point& other);

    friend std::ostream& operator<<(std::ostream& os, const Point& point);
};
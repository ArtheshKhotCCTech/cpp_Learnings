#include "../HeaderFiles/Point.h"

Point::Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

Point Point::operator+(const Point& other) {
    return Point(x + other.x, y + other.y);
}

std::ostream& operator<<(std::ostream& os, const Point& point) {
    os << "(" << point.x << ", " << point.y << ")";
    return os;
}

#include "../HeaderFiles/Rectangle.h"

Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

double Rectangle::area() {
    return width * height;
}

double Rectangle::perimeter() {
    return 2 * (width + height);
}

double Rectangle::area(double w, double h) {
    return w * h;
}

double Rectangle::perimeter(double w, double h) {
    return 2 * (w + h);
}

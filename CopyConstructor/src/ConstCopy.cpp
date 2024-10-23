#include "../HeaderFiles/ConstCopy.h"

ConstCopy::ConstCopy(int v) : value(v) {}

ConstCopy::ConstCopy(const ConstCopy& other) {
    value = other.value;
}

void ConstCopy::print() const {
    std::cout << "Value: " << value << std::endl;
}
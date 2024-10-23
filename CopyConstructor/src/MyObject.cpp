#include "../HeaderFiles/MyObject.h"
#include <iostream>

MyObject::MyObject(int s) : size(s) {
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = 0;
    }
}

MyObject::MyObject(const MyObject& other) : size(other.size) {
    data = new int[size];
    for (int i = 0; i < size; ++i) {
        data[i] = other.data[i];
    }
}

MyObject::~MyObject() {
    delete[] data;
}

void MyObject::setElement(int index, int value) {
    if (index >= 0 && index < size) {
        data[index] = value;
    }
}

void MyObject::printElements() const {
    for (int i = 0; i < size; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

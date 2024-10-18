#pragma once
#include <iostream>

class Pointer {
public:
    void addNumber(int* numbers, size_t size);
    void removeNumber(int num);
    void displayNumbers() const;

private:
    int* numberList;
    size_t count;
};
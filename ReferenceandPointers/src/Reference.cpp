#include "../HeaderFiles/Reference.h"
#include <iostream>

void Reference::addNumber(int num) {
    numbers.push_back(num);
}

void Reference::displayNumbers() const {
    std::cout << "Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int* Reference::getNumbers() {
    return numbers.empty() ? nullptr : &numbers[0];
}

size_t Reference::getCount() const {
    return numbers.size();
}

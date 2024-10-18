#include "../HeaderFiles/Pointer.h"
#include <vector>
#include <algorithm>

std::vector<int> currentNumbers;

void Pointer::addNumber(int* numbers, size_t size) {
    currentNumbers.assign(numbers, numbers + size);
}

void Pointer::removeNumber(int num) {
    auto it = std::remove(currentNumbers.begin(), currentNumbers.end(), num);
    currentNumbers.erase(it, currentNumbers.end());
}

void Pointer::displayNumbers() const {
    std::cout << "Current Numbers: ";
    for (int num : currentNumbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

#pragma once

#include <vector>

class Reference {
private:
    std::vector<int> numbers;

public:
    void addNumber(int num);
    void displayNumbers() const;
    int* getNumbers();
    size_t getCount() const;
};

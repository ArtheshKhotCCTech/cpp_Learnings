#pragma once
#include <vector>

class MyStack {
private:
    std::vector<int> stack;

public:
    MyStack();

    void push(int value);

    void pop();

    bool isEmpty() const;

    int top() const;

    int size() const;
};
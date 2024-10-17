#include "../HeaderFiles/MyStack.h"
#include <iostream>
#include <stdexcept>

MyStack::MyStack() {}

void MyStack::push(int value) {
    stack.push_back(value);
}

void MyStack::pop() {
    if (stack.empty()) {
        throw std::out_of_range("Stack is empty!");
    }
    stack.pop_back();
}

bool MyStack::isEmpty() const {
    return stack.empty();
}

int MyStack::top() const {
    if (stack.empty()) {
        throw std::out_of_range("Stack is empty!");
    }
    return stack.back();
}

int MyStack::size() const {
    return stack.size();
}

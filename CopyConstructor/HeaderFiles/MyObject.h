#pragma once

class MyObject {
private:
    int* data;
    int size;

public:
    // Constructor
    MyObject(int s);

    // Copy Constructor
    MyObject(const MyObject& other);

    // Destructor
    ~MyObject();

    // Function to set an element
    void setElement(int index, int value);

    // Function to print elements
    void printElements() const;
};

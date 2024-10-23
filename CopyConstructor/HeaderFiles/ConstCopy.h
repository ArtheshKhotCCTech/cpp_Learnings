#pragma once
#include<iostream>

class ConstCopy {
public:
    int value;

    ConstCopy(int v);

    ConstCopy(const ConstCopy& other);

    void print() const;
};
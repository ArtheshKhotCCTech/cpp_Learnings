#pragma once
#include <string>

class MyString {
public:
    std::string str;
    std::string reorder();
    MyString(const std::string& str);
    bool isVowel(char ch);
};
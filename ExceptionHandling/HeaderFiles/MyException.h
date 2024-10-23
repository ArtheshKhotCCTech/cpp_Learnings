#pragma once

#include <exception>
#include <string>

class MyException : public std::exception {
private:
    std::string message;

public:
    MyException(const std::string& msg);
    virtual const char* what() const noexcept;
};

#include "../HeaderFiles/MyException.h"

MyException::MyException(const std::string& msg) : message(msg) {}

const char* MyException::what() const noexcept {
    return message.c_str();
}
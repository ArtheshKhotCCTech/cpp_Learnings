#include <iostream>
#include "../HeaderFiles/TypeConverter.h"

//void modifyConst(int* p) {
//    *p = 50;
//}
//
//void constCastExample() {
//    const int x = 10;
//    const int* ptr = &x;
//
//    int* modifiablePtr = const_cast<int*>(ptr);
//
//    modifyConst(modifiablePtr);
//
//    std::cout << "After modification, x = " << *modifiablePtr << std::endl;
//}

int main() {
    TypeConverter converter;

    int intVal = 10;
    float floatVal = 10.5;
    char charVal = 'A';
    double doubleVal = 20.75;

    std::cout << "Implicit Typecasting (int to float): " << converter.intToFloat(intVal) << std::endl;
    std::cout << "Explicit Typecasting (float to int): " << converter.floatToInt(floatVal) << std::endl;
    std::cout << "Character to ASCII value: " << converter.charToAscii(charVal) << std::endl;
    std::cout << "Explicit Typecasting (double to int): " << converter.doubleToInt(doubleVal) << std::endl;

    //constCastExample();

    return 0;
}

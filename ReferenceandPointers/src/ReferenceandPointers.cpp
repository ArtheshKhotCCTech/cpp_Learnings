#include <iostream>
#include "../HeaderFiles/Reference.h"
#include "../HeaderFiles/Pointer.h"

//void testcases() {
//    int* ptr = nullptr;
//    delete ptr; //Nothing happens
//    //int* p = new int(10);
//    //delete p;
//    //std::cout << *p;//Exception is thrown
//    int* p = new int(5);
//    delete p;
//    delete p;//Exception is thrown
//}

int main() {
    Reference refObj;
    Pointer ptrObj;

    refObj.addNumber(10);
    refObj.addNumber(20);
    refObj.addNumber(30);
    refObj.displayNumbers();

    ptrObj.addNumber(refObj.getNumbers(), refObj.getCount());
    ptrObj.removeNumber(20);
    ptrObj.displayNumbers();

    //testcases();

    return 0;
}

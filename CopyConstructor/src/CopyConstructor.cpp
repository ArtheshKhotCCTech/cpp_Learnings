#include <iostream>
#include "../HeaderFiles/MyObject.h"
#include "../HeaderFiles/ConstCopy.h"

void printObject(const ConstCopy& obj) {
    obj.print();
}

int main() {
    MyObject obj1(5);
    obj1.setElement(0, 10);
    obj1.setElement(1, 20);
    obj1.setElement(2, 30);

    std::cout << "Original object (obj1) elements: ";
    obj1.printElements();

    MyObject obj2 = obj1;

    std::cout << "Copied object (obj2) elements after copying: ";
    obj2.printElements();

    obj2.setElement(1, 100);

    std::cout << "Original object (obj1) elements after modifying obj2: ";
    obj1.printElements();
    std::cout << "Modified copied object (obj2) elements: ";
    obj2.printElements();


    const ConstCopy obj3(100);
    ConstCopy obj4 = obj3;

    obj4.print();
    printObject(obj3);

    return 0;
}

#include <iostream>
#include "../HeaderFiles/MyException.h"

int main() {
    int num1, num2;
    try {
        std::cout << "Enter two integers: ";
        if (!(std::cin >> num1 >> num2)) {
            throw MyException("Invalid input! Please enter integers only.");
        }
        if (num2 == 0) {
            throw MyException("Division by zero is not allowed.");
        }

        std::cout << "Result: " << num1 / num2 << std::endl;
    }
    catch (const MyException& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    //Array out of bounds

    //int arr[5] = { 1,2,3,4,5 };
    //int index;
    //try {
    //    std::cout << "Enter array index 0-4" << std::endl;
    //    std::cin >> index;
    //    if (index < 0 || index >= 5) {
    //        throw MyException("Index out of bounds");
    //    }
    //    std::cout
    //}


    return 0;
}
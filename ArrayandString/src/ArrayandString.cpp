#include <iostream>]
#include "../HeaderFiles/MyArray.h"

int main()
{
    std::vector<std::string> inputStrings = { "hello", "world", "array", "strings", "cpp" };
    MyArray myArray(inputStrings);
    //arr.arrayTestcases();

    std::vector<std::string> reorderedStrings = myArray.reorderStrings();

    for (const auto& str : reorderedStrings) {
        std::cout << str << std::endl;
    }

    return 0;
}

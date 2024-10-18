#include "../HeaderFiles/MyArray.h"
#include "../HeaderFiles/MyString.h"

//void MyArray::arrayTestcases()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 1,2,3,4,5 };
//	if (arr1 == arr2) {
//		std::cout << "True" << std::endl;
//	}
//	else {
//		std::cout << "False" << std::endl;
//	}
//}
//For array == operator does not work

MyArray::MyArray(const std::vector<std::string>& arr) : arr(arr) {}

std::vector<std::string> MyArray::reorderStrings() {
    std::vector<std::string> reorderedArr;
    for (const auto& str : arr) {
        MyString myString(str); // Using MyString class to process each string
        reorderedArr.push_back(myString.reorder());
    }
    return reorderedArr;
}

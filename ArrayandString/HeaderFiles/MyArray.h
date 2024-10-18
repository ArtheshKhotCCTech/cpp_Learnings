#pragma once
#include <vector>
#include <string>

class MyArray
{
public:
	std::vector<std::string> arr;
	//void arrayTestcases();
	MyArray(const std::vector<std::string>& arr);
	std::vector<std::string> reorderStrings();
};


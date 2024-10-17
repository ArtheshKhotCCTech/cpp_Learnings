#include "../HeaderFiles/Cinput.h"

//void Cinput::inputTestcases()
//{
//	//cin.get() returns char value
//	int a;
//	char b;
//
//	a = std::cin.get(); //If stored in int it will return ascii value i.e. if user enters 1 cin.get() will return 1 but compiler will convert it to int implicitly
//	std::cout << a << std::endl;
//
//	b = std::cin.get(); //If stored in char it will return actual character i.e. if user enters 1 cin.get() will return 1*/
//	std::cout << b << std::endl;
//
//	int i;
//	std::cin >> i;
//	if (std::cin.fail()) {
//		std::cout << "Wrong input" << std::endl; // Works fine for checking in input is integer assert works better as this will still build and give you output
//	}
//	else {
//		std::cout << i << std::endl;
//	}
//	
//}

std::vector<int> Cinput::getInput()
{
    std::vector<int> scores;
    int score;

    std::cout << "Enter student scores (-1 to stop):\n";
    while (true) {
        std::cin >> score;
        assert(!std::cin.fail());
        if (score == -1) break;
        if (score >= 0 && score <= 100) {
            scores.push_back(score);
        }
        else {
            std::cout << "Please enter a valid score (0-100).\n";
        }
    }

    return scores;
}

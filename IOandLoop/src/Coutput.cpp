#include "../HeaderFiles/Coutput.h"

//void Coutput::outputTestcases()
//{
//	std::cout << std::cin.get()<<std::endl; //Returns ascii value
//	int a;
//	std::cout << b << std::endl; //Error if a is local variable and prints garbage value if a is data member
//	
//}

void Coutput::displayStatistics(int maxScore, int minScore, float average)
{
    std::cout << "Class Average: " << average << std::endl;
    std::cout << "Highest Score: " << maxScore << std::endl;
    std::cout << "Lowest Score: " << minScore << std::endl;
}

void Coutput::displayHistogram(const std::vector<int>& scores)
{
    int gradeA = 0, gradeB = 0, gradeC = 0, gradeD = 0, gradeF = 0;

    for (int score : scores) {
        if (score >= 90) 
            gradeA++;
        else if (score >= 80) 
            gradeB++;
        else if (score >= 70) 
            gradeC++;
        else if (score >= 60) 
            gradeD++;
        else 
            gradeF++;
    }

    std::cout << "Histogram of Grades:\n";
    std::cout << "A (90-100): " << gradeA << std::endl;
    std::cout << "B (80-89): " << gradeB << std::endl;
    std::cout << "C (70-79): " << gradeC << std::endl;
    std::cout << "D (60-69): " << gradeD << std::endl;
    std::cout << "F (0-59): " << gradeF << std::endl;
}

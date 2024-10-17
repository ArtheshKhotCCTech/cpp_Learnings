#include <iostream>
#include "../HeaderFiles/Cinput.h"
#include "../HeaderFiles/Coutput.h"
#include "../HeaderFiles/Loop.h"

int main()
{
    Cinput ci;
    //ci.inputTestcases();
    Coutput co;
    //co.outputTestcases();
    Loop loop;
    std::vector<int> scores = ci.getInput();

    if (!scores.empty()) {
        int maxScore, minScore;
        float average;

        loop.calculateStatistics(scores, maxScore, minScore, average);
        co.displayStatistics(maxScore, minScore, average);
        co.displayHistogram(scores);
    }

    return 0;
}

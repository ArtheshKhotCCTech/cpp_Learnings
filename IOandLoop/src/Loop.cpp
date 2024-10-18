#include "../HeaderFiles/Loop.h"

void Loop::calculateStatistics(const std::vector<int>& scores, int& maxScore, int& minScore, float& average)
{
    maxScore = scores[0];
    minScore = scores[0];
    int sum = 0;

    for (int score : scores) {
        if (score > maxScore) maxScore = score;
        if (score < minScore) minScore = score;
        sum += score;
    }

    average = static_cast<float>(sum) / scores.size();
}

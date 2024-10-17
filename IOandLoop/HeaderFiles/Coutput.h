#pragma once
#include<iostream>
#include<vector>

class Coutput
{
public:

	//int b;
	//void outputTestcases();
	void displayStatistics(int maxScore, int minScore, float average);
	void displayHistogram(const std::vector<int>& scores);
};

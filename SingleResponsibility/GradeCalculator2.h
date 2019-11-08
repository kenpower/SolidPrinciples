#pragma once
#include <iostream>
#include <string>

class GradeCalculator2
{
public: 
	static void caclulateGrade();

private:
	static int getScore();
	static std::string scoreToString(int);
};


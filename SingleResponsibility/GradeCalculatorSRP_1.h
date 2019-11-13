#pragma once
#include <iostream>
#include <string>

class GradeCalculatorSRP_1
{
public: 
	static void caclulateGrade();

private:
	static int getScore();
	static std::string scoreToString(int);
};


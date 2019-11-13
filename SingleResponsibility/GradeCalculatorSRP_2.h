#pragma once
#include <iostream>
#include <string>
#include "GradeIntegerReader.h"

class GradeCalculatorSRP_2
{
	static const StreamGradeReader gradeIntegerReader;

public: 
	 static void caclulateGrade();

private:
	 static std::string scoreToString(int);
};


#pragma once
#include <iostream>
#include <string>

#include "IIntegerReader.h"

class GradeCalculator3
{
	IIntegerReader& integerReader;
	std::ostream& ostream;

public: 
	GradeCalculator3(IIntegerReader& _integerReader, std::ostream& _ostream):
		integerReader(_integerReader),
		ostream(_ostream){}

	 void caclulateGrade();

private:
	 std::string scoreToString(int);
};


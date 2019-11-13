#pragma once
#include <iostream>
#include <string>

#include "GradeReader.h"

class GradeCalculatorOCP
{
	GradeReader& integerReader;
	std::ostream& ostream;

public:
	GradeCalculatorOCP(GradeReader& _integerReader, std::ostream& _ostream) :
		integerReader(_integerReader),
		ostream(_ostream) {}

	void caclulateGrade();

private:
	std::string scoreToString(int);
};
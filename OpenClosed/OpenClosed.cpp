// OpenClosed.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "GradeCalculatorOCP.h"
#include "StreamGradeReader.h"
#include "StdioGradeReader.h"
#include "RandomGradeReader.h"


int main()
{

	StdioGradeReader stdioReader;
	GradeCalculatorOCP stdioGradeCalculator(stdioReader, std::cout);
	stdioGradeCalculator.caclulateGrade();

	RandomGradeReader randomGradereader;
	GradeCalculatorOCP randomGradeCalculator(randomGradereader, std::cout);
	randomGradeCalculator.caclulateGrade();

	StreamGradeReader streamGradeReader(std::cin, std::cout);
	GradeCalculatorOCP streamGradeCalculator(streamGradeReader, std::cout);
	streamGradeCalculator.caclulateGrade();

}



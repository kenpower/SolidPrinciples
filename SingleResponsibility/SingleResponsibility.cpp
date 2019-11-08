// SingleResponsibility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "GradeCalculator1.h"
#include "GradeCalculator2.h"
#include "GradeCalculator3.h"
#include "GradeIntegerReader.h"

int main()
{
	//GradeCalculator1::caclulateGrade();

	//GradeCalculator2::caclulateGrade();
	
	GradeStreamIntegerReader gradeReader(std::cin, std::cout);
	GradeCalculator3 gradeCalculator(gradeReader, std::cout);
	
	gradeCalculator.caclulateGrade();


	
	return 0;
}

#include "GradeCalculatorOCP.h"

using namespace std;

string GradeCalculatorOCP::scoreToString(int score) {
	string gradeString;

	if (score < 40) {
		gradeString = "Fail";
	}
	else if (score >= 40 && score < 50) {
		gradeString = "Pass";
	}
	else if (score >= 50 && score < 60) {
		gradeString = "II.2";
	}
	else if (score >= 60 && score < 70) {
		gradeString = "II.1";
	}
	else {
		gradeString = "First";
	}

	return gradeString;
}

void GradeCalculatorOCP::caclulateGrade()
{
	int score = integerReader.getInteger();

	string gradeString = scoreToString(score);

	ostream << "Your grade is a " + gradeString << endl;
}
#include "GradeCalculatorSRP_2.h"
using namespace std;

const StreamGradeReader GradeCalculatorSRP_2::gradeIntegerReader = StreamGradeReader();

string GradeCalculatorSRP_2::scoreToString(int score) {
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

void GradeCalculatorSRP_2::caclulateGrade()
{
	int score = gradeIntegerReader.getInteger();

	string gradeString = scoreToString(score);

	cout << "Your grade is a "+ gradeString << endl;
}


//places to change
//input source (cin)
//output cout 
//range of valid values
//range of grades
//language of mesage
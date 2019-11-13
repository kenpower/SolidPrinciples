#include "GradeCalculatorSRP_1.h"
using namespace std;

int GradeCalculatorSRP_1::getScore() {

	int score{ 0 };

	std::cout << "\nPlease enter your exam score\n";

	do {
		do {
			cin >> score;
			if (!cin.fail())
				break;
			cout << "Please enter an integer." << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		} while (true);

		if (score >= 0 && score <= 100)
			break;
		cout << "Please enter a value between 0 and 100." << endl;
	} while (true);

	return score;
}

string GradeCalculatorSRP_1::scoreToString(int score) {
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
 
void GradeCalculatorSRP_1::caclulateGrade()
{
	int score = getScore();
	string gradeString = scoreToString(score);

	cout << "Your grade is a "+ gradeString << endl;
}


//places to change
//input source (cin)
//output cout 
//range of valid values
//range of grades
//language of mesage
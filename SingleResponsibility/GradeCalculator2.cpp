#include "GradeCalculator2.h"
using namespace std;

int GradeCalculator2::getScore() {

	int score{ 0 };

	std::cout << "Please enter your exam score\n";

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

string GradeCalculator2::scoreToString(int score) {
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
 
void GradeCalculator2::caclulateGrade()
{
	int score = getScore();
	string gradeString = scoreToString(score);

	cout << "Your grade is a "+ gradeString;
}


//places to change
//input source (cin)
//output cout 
//range of valid values
//range of grades
//language of mesage
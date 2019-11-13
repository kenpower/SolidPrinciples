#include "GradeCalculator.h"
using namespace std;

void GradeCalculator::caclulateGrade()
{
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

	string message;
	if (score < 40) {
		message = "Your grade is a Fail";
	}
	else if (score >= 40 && score < 50) {
		message = "Your grade is a Pass";
	}
	else if (score >= 50 && score < 60) {
		message = "Your grade is a II.2";
	}
	else if (score >= 60 && score < 70) {
		message = "Your grade is a II.1";
	}
	else {
		message = "Your grade is a First";
	}

	cout << message;
}


//places to change
//input source (cin)
//output cout 
//range of valid values
//range of grades
//language of mesage

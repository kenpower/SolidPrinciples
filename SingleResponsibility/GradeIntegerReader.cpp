#include "GradeIntegerReader.h"

using namespace std;

int StreamGradeReader::getInteger() const 
{
	int score{ 0 };

	cout << "Please enter your exam score\n";

	do {
		do {
			cin >> score;
			if (!cin.fail())
				break;
			cout << "Please enter an integer." << std::endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		} while (true);

		if (score >= 0 && score <= 100)
			break;
		cout << "Please enter a value between 0 and 100." << std::endl;
	} while (true);

	return score;
}

#include "GradeIntegerReader.h"

int GradeStreamIntegerReader::getInteger()
{
	int score{ 0 };

	outStream << "Please enter your exam score\n";

	do {
		do {
			inStream >> score;
			if (!inStream.fail())
				break;
			outStream << "Please enter an integer." << std::endl;
			inStream.clear();
			inStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		} while (true);

		if (score >= 0 && score <= 100)
			break;
		outStream << "Please enter a value between 0 and 100." << std::endl;
	} while (true);

	return score;
}

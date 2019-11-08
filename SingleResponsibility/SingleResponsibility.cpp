// SingleResponsibility.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

string gradeCalculator() {
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

	if (score < 40) {
		return "Your grade is a Fail";
	}
	if (score >= 40 && score < 50) {
		return "Your grade is a Pass";
	}
	if (score >= 50 && score < 60) {
		return "Your grade is a II.2";
	}
	if (score >= 60 && score < 70) {
		return "Your grade is a II.1";
	}

	return "Your grade is a First";
}

//places to change
//input source (cin)
//output cout 
//range of valid values
//range of grades
//language of mesage

int main()
{
	string msg = gradeCalculator();
	cout << msg;

	return 0;
}

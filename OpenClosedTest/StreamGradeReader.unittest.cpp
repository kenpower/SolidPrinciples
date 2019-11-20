#include "pch.h"
#include <sstream>
#include "..//OpenClosed/StreamGradeReader.h"

using namespace std;
TEST(StreamGradeReader, HappyPath) {

	std::ostringstream captureOutput;

	int expectedGrade{ 25 };
	std::istringstream fakeInput{to_string(expectedGrade)};

	StreamGradeReader streamGradeReader{fakeInput, captureOutput};

	int grade = streamGradeReader.getInteger();

	EXPECT_EQ(captureOutput.str(), "Please enter your exam score\n");
	EXPECT_EQ(grade, expectedGrade);

}

TEST(StreamGradeReader, ErrorOnNonIntegerEntered) {

	std::ostringstream captureOutput;

	std::istringstream fakeInput{ "non-integer\n25"};

	StreamGradeReader streamGradeReader{ fakeInput, captureOutput };

	int grade = streamGradeReader.getInteger();

	EXPECT_EQ(captureOutput.str(), "Please enter your exam score\nPlease enter an integer.\n");

}
TEST(StreamGradeReader, ErrorNumberBelowRange) {

	std::ostringstream captureOutput;

	std::istringstream fakeInput{ "-1\n50" };

	StreamGradeReader streamGradeReader{ fakeInput, captureOutput };

	int grade = streamGradeReader.getInteger();

	EXPECT_EQ(captureOutput.str(), "Please enter your exam score\nPlease enter a value between 0 and 100.\n");
	EXPECT_EQ(grade, 50);
}

TEST(StreamGradeReader, ErrorNumberAboveRange) {

	std::ostringstream captureOutput;

	std::istringstream fakeInput{ "101\n50" };

	StreamGradeReader streamGradeReader{ fakeInput, captureOutput };

	int grade = streamGradeReader.getInteger();

	EXPECT_EQ(captureOutput.str(), "Please enter your exam score\nPlease enter a value between 0 and 100.\n");
	EXPECT_EQ(grade, 50);
}

TEST(StreamGradeReader, EventuallyAcceptsValidInteger) {

	std::ostringstream captureOutput;

	std::istringstream fakeInput{ "101\nABC\n-100\n\n\n50" };

	StreamGradeReader streamGradeReader{ fakeInput, captureOutput };

	int grade = streamGradeReader.getInteger();

	EXPECT_EQ(grade, 50);
}

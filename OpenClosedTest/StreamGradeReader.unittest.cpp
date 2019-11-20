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
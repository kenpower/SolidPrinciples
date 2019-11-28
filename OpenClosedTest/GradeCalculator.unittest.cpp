#include "gtest/gtest.h"
#include "gmock/gmock.h"  
#include "../OpenClosed/GradeCalculatorOCP.h"

using namespace std;
using ::testing::Return;


class MockGradeReader : public GradeReader {
public:
		MOCK_METHOD(int, getInteger, (), (override));
};

TEST(GradeCalulator, First_Grade) {

	std::ostringstream captureOutput;
	MockGradeReader gradeReader;
	GradeCalculatorOCP gradeCalculator(gradeReader, captureOutput);

	EXPECT_CALL(gradeReader, getInteger)
		.WillOnce(Return(100))
		.WillOnce(Return(95))
		.WillOnce(Return(70));

	gradeCalculator.caclulateGrade();
	gradeCalculator.caclulateGrade();
	gradeCalculator.caclulateGrade();

	EXPECT_EQ("Your grade is a First\nYour grade is a First\nYour grade is a First\n", captureOutput.str());
}

TEST(GradeCalulator, Second_Grade) {

	std::ostringstream captureOutput;
	MockGradeReader gradeReader;
	GradeCalculatorOCP gradeCalculator(gradeReader, captureOutput);

	EXPECT_CALL(gradeReader, getInteger)
		.WillOnce(Return(69))
		.WillOnce(Return(60));

	gradeCalculator.caclulateGrade();
	gradeCalculator.caclulateGrade();

	EXPECT_EQ("Your grade is a II.1\nYour grade is a II.1\n", captureOutput.str());
}
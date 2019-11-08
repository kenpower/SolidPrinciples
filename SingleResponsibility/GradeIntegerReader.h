#pragma once
#include <iostream>
#include "IIntegerReader.h"


class GradeStreamIntegerReader : public IIntegerReader
{
	std::istream& inStream;
	std::ostream& outStream;

public:
	GradeStreamIntegerReader(std::istream& _istream, std::ostream& _ostream) :inStream(_istream), outStream(_ostream) {}
	int getInteger();
};


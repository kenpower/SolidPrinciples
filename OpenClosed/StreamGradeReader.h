#pragma once
#include <iostream>
#include "GradeReader.h"


class StreamGradeReader: public GradeReader
{
	std::istream& inStream;
	std::ostream& outStream;

public:
	StreamGradeReader(std::istream& _istream, std::ostream& _ostream) :inStream(_istream), outStream(_ostream) {}
	int getInteger();
};


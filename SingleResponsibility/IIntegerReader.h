#pragma once
#include <istream>

class IIntegerStreamReader {
	std::istream& stream;
public:
	
	IIntegerStreamReader(std::istream& _stream) :stream(_stream) {}

	virtual int getInteger() = 0;
};

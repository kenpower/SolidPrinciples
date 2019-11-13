#include <cstdlib>
#include "RandomGradeReader.h"

int RandomGradeReader::getInteger() {
	return std::rand() % 100;
}

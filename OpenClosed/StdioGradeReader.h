#pragma once
#include <iostream>
#include "GradeReader.h"


class StdioGradeReader : public GradeReader
{
public:
	int getInteger();
};


#pragma once
#include <iostream>
#include "Parallelogram.h"

class Rhombus : public Parallelogram {
private:
	Rhombus(int side1, int angle1, int angle2);
	std::string show_name() override;
public:
	Rhombus();
};

#pragma once
#include <iostream>
#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
protected:
	Parallelogram(int side1, int side2, int angle1, int angle2);
	std::string show_name() override;
public:
	Parallelogram();
};

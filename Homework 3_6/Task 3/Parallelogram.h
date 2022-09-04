#pragma once
#include <iostream>
#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
public:
	Parallelogram(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4, std::string name);;
};

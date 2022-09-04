#pragma once
#include <iostream>
#include "Triangle.h"

class Isosceles : public Triangle {
public:
	Isosceles(int side1, int side2, int side3, int angle1, int angle2, int angle3, std::string);
};

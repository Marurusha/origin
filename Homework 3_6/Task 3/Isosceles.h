#pragma once
#include <iostream>
#include "Triangle.h"

class Isosceles : public Triangle {
protected:
	Isosceles(int side1, int side2, int angle1, int angle2);
	std::string show_name() override;
public:
	Isosceles();
};

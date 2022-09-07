#pragma once
#include <iostream>
#include <Windows.h>
#include "Triangle.h"

class Isosceles : public Triangle {
protected:
	Isosceles(int side1, int side2, int side3, int angle1, int angle2, int angle3, std::string);
public:
	Isosceles();
};

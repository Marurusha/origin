#pragma once
#include <iostream>
#include "Triangle.h"

class Right_triangle : public Triangle {
public:
	Right_triangle(int side1, int side2, int side3, int angle1, int angle2, int andle3, std::string);
};
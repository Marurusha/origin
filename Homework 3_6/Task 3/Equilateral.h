#pragma once
#include <iostream>
#include "Isosceles.h"

class Equilateral : public Isosceles {
public:
	Equilateral(int side1, int side2, int side3, int angle1, int angle2, int andle3, std::string);
};
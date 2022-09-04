#pragma once
#include <iostream>
#include "Parallelogram.h"

class Rectangle : public Parallelogram {
protected:
	Rectangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4, std::string name);
public:
	Rectangle();
};

#pragma once
#include <iostream>
#include <Windows.h>
#include <clocale>
#include "Parallelogram.h"

class Rhombus : public Parallelogram {
private:
	Rhombus(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4, std::string name);
public:
	Rhombus();
};

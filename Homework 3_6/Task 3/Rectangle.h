#pragma once
#include <iostream>
#include "Parallelogram.h"

class Rectangle : public Parallelogram {
protected:
	Rectangle(int side1, int side2);
	std::string show_name() override;
public:
	Rectangle();
};

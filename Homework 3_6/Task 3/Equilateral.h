#pragma once
#include <iostream>
#include "Isosceles.h"

class Equilateral : public Isosceles {
private:
	Equilateral(int side1);
	std::string show_name() override;
public:
	Equilateral();
};
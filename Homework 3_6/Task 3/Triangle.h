#pragma once
#include <iostream>
#include <Windows.h>
#include "Figures.h"
#include <string>

class Triangle : public Figures {
private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;

protected:
	Triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3, std::string name);

public:
	Triangle();

	void print_sides() override;

	void print_angles() override;

};

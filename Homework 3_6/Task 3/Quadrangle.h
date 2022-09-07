#pragma once
#include <iostream>
#include <Windows.h>
#include "Figures.h"
#include <string>

class Quadrangle : public Figures {
private:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;

protected:
	Quadrangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4, std::string name);

public:
	Quadrangle();

	void print_sides() override;

	void print_angles() override;

};

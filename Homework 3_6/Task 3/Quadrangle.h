#pragma once
#include <iostream>
#include "Figures.h"

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
	Quadrangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4);
	std::string name_Quadrangle;

public:
	Quadrangle();

	int show_a();
	int show_b();
	int show_c();
	int show_d();
	int show_A();
	int show_B();
	int show_C();
	int show_D();

	void print_sides() override;

	void print_angles() override;

};

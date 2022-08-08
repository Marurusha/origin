#pragma once
#include <iostream>
#include "Figures.h"

class Triangle : public Figures {
private:
	int a;
	int b;
	int c;
	int A;
	int B;
	int C;


protected:
	Triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3);
	std::string name_triangle;

public:
	Triangle();

	int show_a();
	int show_b();
	int show_c();
	int show_A();
	int show_B();
	int show_C();

	void print_sides() override;

	void print_angles() override;

};

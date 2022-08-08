#include "Quadrangle.h"

Quadrangle::Quadrangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4) : Figures(4, "Четырёхугольник") {
	a = side1;
	b = side2;
	c = side3;
	d = side4;
	A = angle1;
	B = angle2;
	C = angle3;
	D = angle4;
}

Quadrangle::Quadrangle() : Quadrangle::Quadrangle(rand() % 100, rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180, rand() % 180, rand() % 180) {
}

int Quadrangle::show_a() {
	return a;
}
int Quadrangle::show_b() {
	return b;
}
int Quadrangle::show_c() {
	return c;
}
int Quadrangle::show_d() {
	return d;
}
int Quadrangle::show_A() {
	return A;
}
int Quadrangle::show_B() {
	return B;
}
int Quadrangle::show_C() {
	return C;
}
int Quadrangle::show_D() {
	return D;
}

void Quadrangle::print_sides() {
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << std::endl;
}

void Quadrangle::print_angles() {
	std::cout << "A = " << A << ", B = " << B << ", C = " << C << ", D = " << D << std::endl;
}
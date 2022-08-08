#include "Triangle.h"

Triangle::Triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3) : Figures(3, "Треугольник") {
	a = side1;
	b = side2;
	c = side3;
	A = angle1;
	B = angle2;
	C = angle3;
}

Triangle::Triangle() : Triangle::Triangle(rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180, rand() % 180) {
}

int Triangle::show_a() {
	return a;
}
int Triangle::show_b() {
	return b;
}
int Triangle::show_c() {
	return c;
}
int Triangle::show_A() {
	return A;
}
int Triangle::show_B() {
	return B;
}
int Triangle::show_C() {
	return C;
}

void Triangle::print_sides() {
	std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
}

void Triangle::print_angles() {
	std::cout << "A = " << A << ", B = " << B << ", C = " << C << std::endl;
}
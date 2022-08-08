#include "Isosceles.h"

Isosceles::Isosceles(int side1, int side2, int angle1, int angle2) : Triangle(side1, side2, side1, angle1, angle2, angle1) {
}
std::string Isosceles::show_name() {
	name_triangle = "Равнобедренный треугольник";
	return name_triangle;
}
Isosceles::Isosceles() : Isosceles::Isosceles(rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
}
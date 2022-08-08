#include "Equilateral.h"

Equilateral::Equilateral(int side1) : Isosceles(side1, side1, 60, 60) {
}
std::string Equilateral::show_name() {
	name_triangle = "Равносторонний треугольник";
	return name_triangle;
}
Equilateral::Equilateral() : Equilateral::Equilateral(rand() % 100) {
}

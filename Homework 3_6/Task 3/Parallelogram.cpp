#include "Parallelogram.h"

Parallelogram::Parallelogram(int side1, int side2, int angle1, int angle2) : Quadrangle(side1, side2, side1, side2, angle1, angle2, angle1, angle2) {
}
std::string Parallelogram::show_name() {
	name_Quadrangle = "ֿאנאככוכמדנאלל";
	return name_Quadrangle;
}

Parallelogram::Parallelogram() : Parallelogram::Parallelogram(rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
}
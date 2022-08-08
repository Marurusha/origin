#include "Rhombus.h"

Rhombus::Rhombus(int side1, int angle1, int angle2) : Parallelogram(side1, side1, angle1, angle2) {
}
std::string Rhombus::show_name() {
	name_Quadrangle = "Ромб";
	return name_Quadrangle;
}

Rhombus::Rhombus() : Rhombus::Rhombus(rand() % 100, rand() % 180, rand() % 180) {
}
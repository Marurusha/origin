#include "Square.h"

Square::Square(int side1) : Rectangle(side1, side1) {
}
std::string Square::show_name() {
	name_Quadrangle = " вадрат";
	return name_Quadrangle;
}

Square::Square() : Square::Square(rand() % 100) {
}
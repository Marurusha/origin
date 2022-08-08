#include "Rectangle.h"

Rectangle::Rectangle(int side1, int side2) : Parallelogram(side1, side2, 90, 90) {
}
std::string Rectangle::show_name() {
	name_Quadrangle = "Прямоугольник";
	return name_Quadrangle;
}

Rectangle::Rectangle() : Rectangle::Rectangle(rand() % 100, rand() % 100) {
}
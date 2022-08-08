#include "Right_triangle.h"


Right_triangle::Right_triangle(int side1, int side2, int side3, int angle1, int angle2) : Triangle(side1, side2, side3, angle1, angle2, 90) {
}
std::string Right_triangle::show_name() {
	name_triangle = "Прямоугольный треугольник";
	return name_triangle;
}

Right_triangle::Right_triangle() : Right_triangle::Right_triangle(rand() % 100, rand() % 100, rand() % 100, rand() % 180, rand() % 180) {
}
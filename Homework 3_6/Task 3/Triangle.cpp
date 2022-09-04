#include "Triangle.h"
#include "wrong_figure.h"


Triangle::Triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3, std::string name) : Figures(3, name) {

	if ((side1 == 0) || (side2 == 0) || (side3 == 0)) {
		std::string message;
		message += std::string("Ошибка при создании фигуры: ") + show_name();
		message += std::string("\nСтороны: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3);
		message += std::string("\nУглы: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3);
		message += std::string("\nПричина: количество сторон менее трёх. Программа будет завершена.");
		throw wrong_figure(message);
	}

	if (!(angle1 + angle2 + angle3 == 180)) {
		std::string message;
		message = std::string("Ошибка при создании фигуры: ") + show_name();
		message += std::string("\nСтороны: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3);
		message += std::string("\nУглы: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3);
		message += std::string("\nПричина: сумма углов не равна 180. Программа будет завершена.");
		throw wrong_figure(message);
	}

	a = side1;
	b = side2;
	c = side3;
	A = angle1;
	B = angle2;
	C = angle3;

}

Triangle::Triangle() : Triangle::Triangle(rand() % 100, rand() % 100, rand() % 100, 50, 30, 100, "Треугольник") {
}

void Triangle::print_sides() {
	std::cout << a << ", " << b << ", " << c << std::endl;
}

void Triangle::print_angles() {
	std::cout << A << ", " << B << ", " << C << std::endl;
}
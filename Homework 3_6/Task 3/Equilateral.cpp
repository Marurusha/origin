#include "Equilateral.h"
#include "wrong_figure.h"

Equilateral::Equilateral(int side1, int side2, int side3, int angle1, int angle2, int angle3, std::string name) : Isosceles(side1, side2, side3, angle1, angle2, angle3, name) {
	if (!(side1 == side2)) {
		std::string message;
		message += std::string("Ошибка при создании фигуры: ") + show_name();
		message += std::string("\nСтороны: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3);
		message += std::string("\nУглы: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3);
		message += std::string("\nПричина: стороны не равны. Программа будет завершена.");
		throw wrong_figure(message);
	}

	if (!((angle1 == 60) && (angle2 == 60))) {
		std::string message;
		message += std::string("Ошибка при создании фигуры: ") + show_name();
		message += std::string("\nСтороны: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3);
		message += std::string("\nУглы: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3);
		message += std::string("\nПричина: углы не равны значению 60. Программа будет завершена.");
		throw wrong_figure(message);
	}
}

Equilateral::Equilateral() : Equilateral::Equilateral(100, 100, 100, 60, 60, 60, "Равносторонний треугольник") {
}

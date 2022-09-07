#include "Parallelogram.h"
#include "wrong_figure.h"

Parallelogram::Parallelogram(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4, std::string name) : Quadrangle(side1, side2, side3, side4, angle1, angle2, angle3, angle4, name) {
	if (!((side1 == side3) || (side2 == side4))) {
		std::string message;
		message += std::string("Ошибка при создании фигуры: ") + show_name();
		message += std::string("\nСтороны: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3) + ", " + std::to_string(side4);
		message += std::string("\nУглы: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3) + ", " + std::to_string(angle4);
		message += std::string("\nПричина: стороны a,c и b,c попарно не равны. Программа будет завершена.");
		throw wrong_figure(message);
	}

	if (!((angle1 == angle3) && (angle2 == angle4))) {
		std::string message;
		message = std::string("Ошибка при создании фигуры: ") + show_name();
		message += std::string("\nСтороны: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3) + ", " + std::to_string(side4);
		message += std::string("\nУглы: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3) + ", " + std::to_string(angle4);
		message += std::string("\nПричина: углы A,C и B,D попарно не равны. Программа будет завершена.");
		throw wrong_figure(message);
	}
}

Parallelogram::Parallelogram() : Parallelogram::Parallelogram(5, 5, 5, 5, 40, 140, 40, 140, "Параллелограмм") {
}
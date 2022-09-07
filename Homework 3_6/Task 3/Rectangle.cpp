#include "Rectangle.h"
#include "wrong_figure.h"

MyRectangle::MyRectangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4, std::string name) : Parallelogram(side1, side2, side3, side4, angle1, angle2, angle3, angle4, name) {

	if (!((angle1==90) && (angle1 == angle2))) {
		std::string message;
		message = std::string("Ошибка при создании фигуры: ") + show_name();
		message += std::string("\nСтороны: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3) + ", " + std::to_string(side4);
		message += std::string("\nУглы: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3) + ", " + std::to_string(angle4);
		message += std::string("\nПричина: все углы не равны значению 90. Программа будет завершена.");
		throw wrong_figure(message);
	}
}

MyRectangle::MyRectangle() : MyRectangle::MyRectangle(60, 30, 60, 30, 90, 90, 90, 90, "Прямоугольник") {
}
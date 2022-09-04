#include "Rhombus.h"
#include "wrong_figure.h"

Rhombus::Rhombus(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4, std::string name) : Parallelogram(side1, side2, side3, side4, angle1, angle2, angle3, angle4, name) {
	if (!(side2 == side3)) {
		std::string message;
		message += std::string("������ ��� �������� ������: ") + show_name();
		message += std::string("\n�������: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3) + ", " + std::to_string(side4);
		message += std::string("\n����: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3) + ", " + std::to_string(angle4);
		message += std::string("\n�������: ������� �� �����. ��������� ����� ���������.");
		throw wrong_figure(message);
	}
}

Rhombus::Rhombus() : Rhombus::Rhombus(5, 5, 5, 5, 40, 140, 40, 140, "����") {
}
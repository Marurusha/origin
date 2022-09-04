#include "Right_triangle.h"
#include "wrong_figure.h"


Right_triangle::Right_triangle(int side1, int side2, int side3, int angle1, int angle2, int angle3, std::string name) : Triangle(side1, side2, side3, angle1, angle2, angle3, name) {
	if (!(angle3 == 90)) {
		std::string message;
		message += std::string("������ ��� �������� ������: ") + show_name();
		message += std::string("\n�������: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3);
		message += std::string("\n����: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3);
		message += std::string("\n�������: ���� � �� ����� �������� 90.��������� ����� ���������.");
		throw wrong_figure(message);
	}
}

Right_triangle::Right_triangle() : Right_triangle::Right_triangle(rand() % 100, rand() % 100, rand() % 100, 40, 50, 90, "������������� �����������") {
}
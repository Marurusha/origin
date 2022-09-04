#include "Quadrangle.h"
#include "wrong_figure.h"

Quadrangle::Quadrangle(int side1, int side2, int side3, int side4, int angle1, int angle2, int angle3, int angle4, std::string name) : Figures(4, name) {

	if ((side1 == 0) || (side2 == 0) || (side3 == 0) || (side4 == 0)) {
		std::string message;
		message += std::string("������ ��� �������� ������: ") + show_name();
		message += std::string("\n�������: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3) + ", " + std::to_string(side4);
		message += std::string("\n����: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3) + ", " + std::to_string(angle4);
		message += std::string("\n�������: ���������� ������ ����� ������. ��������� ����� ���������.");
		throw wrong_figure(message);
	}

	if (!(angle1 + angle2 + angle3 + angle4 == 360)) {
		std::string message;
		message = std::string("������ ��� �������� ������: ") + show_name();
		message += std::string("\n�������: ") + std::to_string(side1) + ", " + std::to_string(side2) + ", " + std::to_string(side3) + ", " + std::to_string(side4);
		message += std::string("\n����: ") + std::to_string(angle1) + ", " + std::to_string(angle2) + ", " + std::to_string(angle3) + ", " + std::to_string(angle4);
		message += std::string("\n�������: ����� ����� �� ����� 360. ��������� ����� ���������.");
		throw wrong_figure(message);
	}

	a = side1;
	b = side2;
	c = side3;
	d = side4;
	A = angle1;
	B = angle2;
	C = angle3;
	D = angle4;
}

void Quadrangle::print_sides() {
	std::cout << a << ", " << b << ", " << c << ", " << d << std::endl;
}

void Quadrangle::print_angles() {
	std::cout << A << ", " << B << ", " << C << ", " << D << std::endl;
}
#include "Figures.h"
#include "wrong_figure.h"

Figures::Figures(int sides, std::string name) {
	if ((name == "������") && (!(sides == 0))) {
		std::string message;
		message += std::string("������ ��� �������� ������: ") + name;
		message += std::string("\n�������: ���������� ������ ������ ����. ��������� ����� ���������.");
		throw wrong_figure(message);

	}
	Number_of_sides = sides;
	Figure = name;
}

int Figures::show_sides() {
	return Number_of_sides;
}

std::string Figures::show_name() {
	return Figure;
}

void Figures::print_sides() {
	std::cout << "0" << std::endl;
}

void Figures::print_angles() {
	std::cout << "0" << std::endl;
}
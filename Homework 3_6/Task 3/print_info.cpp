#include "print_info.h"
#include "wrong_figure.h"

void print_info(Figures* demo_figure) {
	std::cout << "�������� �������� ������: " << (*demo_figure).show_name() << "." << std::endl;
	std::cout << "�������: ";
	(*demo_figure).print_sides();
	std::cout << "����: ";
	(*demo_figure).print_angles();
	std::cout << std::endl;
}
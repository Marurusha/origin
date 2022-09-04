#include "print_info.h"
#include "wrong_figure.h"

void print_info(Figures* demo_figure) {
	std::cout << "Успешное создание фигуры: " << (*demo_figure).show_name() << "." << std::endl;
	std::cout << "Стороны: ";
	(*demo_figure).print_sides();
	std::cout << "Углы: ";
	(*demo_figure).print_angles();
	std::cout << std::endl;
}
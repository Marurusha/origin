#include "Figures.h"

Figures::Figures(int sides, std::string name) {
	Number_of_sides = sides;
	Figure = name;
}

Figures::Figures() : Figures::Figures(0, "Фигура") {
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
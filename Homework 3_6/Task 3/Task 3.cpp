#include <iostream>
#include <ctime>
#include "Figures.h"
#include "Triangle.h"
#include "Right_triangle.h"
#include "Isosceles.h"
#include "Equilateral.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rhombus.h"
#include "Rectangle.h"
#include "Square.h"

void print_info(Figures* demo_figure) {

	std::cout << (*demo_figure).show_name() << ":" << std::endl;
	std::cout << "Стороны: ";
	(*demo_figure).print_sides();
	std::cout << "Углы: ";
	(*demo_figure).print_angles();
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	Triangle triangle;
	print_info(&triangle);

	Right_triangle right_triangle;
	print_info(&right_triangle);

	Isosceles isosceles;
	print_info(&isosceles);

	Equilateral equilateral;
	print_info(&equilateral);

	Quadrangle quadrangle;
	print_info(&quadrangle);

	Rectangle rectangle;
	print_info(&rectangle);

	Square square;
	print_info(&square);

	Parallelogram parallelogram;
	print_info(&parallelogram);

	Rhombus rhombus;
	print_info(&rhombus);

	system("pause");
	return 0;
}
﻿#include <iostream>
#include <ctime>
#include <clocale>
#include <Windows.h>
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
#include "wrong_figure.h"
#include "print_info.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	try {
	Figures figure;
	print_info(&figure);

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

	MyRectangle rectangle;
	print_info(&rectangle);

	Square square;
	print_info(&square);

	Parallelogram parallelogram;
	print_info(&parallelogram);

	Rhombus rhombus;	
	print_info(&rhombus);

	}
	catch (const wrong_figure& stop_programm) {
		std::cout << stop_programm.what() << std::endl;
		return 1;
	}
	return 0;
}
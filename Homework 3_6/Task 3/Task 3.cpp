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
#include "wrong_figure.h"
#include "print_info.h"

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	int userchoiсe;
	int a, b, c, d, A, B, C, D;

	std::cout << "Доступные фигуры: \n 1 - Фигура\n 2 - Треугольник\n 3 - Прямоугольный треугольник\n 4 - Равнобедренный треугольник\n 5 - Равносторонний треугольник\n 6 - Четырехугольник\n 7 - Прямоугольник\n 8 - Квадртат\n 9 - Параллелограмм\n 10 - Ромб\n\n";
	do {
		std::cout << "Выберите фигуру из списка: ";
		std::cin >> userchoiсe;
		if ((userchoiсe < 1) || (userchoiсe > 10)) {
			continue;
		}
		break;
	} while (true);

	if (userchoiсe == 1) {
		std::cout << "Введите количество сторон: ";
		std::cin >> a;
	}

	else {

		std::cout << "Введите сторону a: ";
		std::cin >> a;

		std::cout << "Введите сторону b: ";
		std::cin >> b;

		std::cout << "Введите сторону c: ";
		std::cin >> c;

		if ((userchoiсe == 6) || (userchoiсe == 7) || (userchoiсe == 8) || (userchoiсe == 9) || (userchoiсe == 10)) {
			std::cout << "Введите сторону d: ";
			std::cin >> d;
		}

		std::cout << "Введите угол А: ";
		std::cin >> A;

		std::cout << "Введите угол B: ";
		std::cin >> B;

		std::cout << "Введите угол C: ";
		std::cin >> C;

		if ((userchoiсe == 6) || (userchoiсe == 7) || (userchoiсe == 8) || (userchoiсe == 9) || (userchoiсe == 10)) {
			std::cout << "Введите угол D: ";
			std::cin >> D;
		}
	}

	try {
		switch (userchoiсe)
		{
		case 1:
		{Figures figure(a, "Фигура");
			print_info(&figure);}
		break;

		case 2:
		{Triangle triangle(a, b, c, A, B, C, "Треугольник");
		print_info(&triangle); }
		break;

		case 3:
		{Right_triangle right_triangle(a, b, c, A, B, C, "Прямоугольный треугольник");
		print_info(&right_triangle); }
		break;

		case 4:
		{Isosceles isosceles(a, b, c, A, B, C, "Равнобедренный треугольник");
		print_info(&isosceles); }
		break;

		case 5:
		{Equilateral equilateral(a, b, c, A, B, C, "Равносторонний треугольник");
		print_info(&equilateral); }
		break;

		case 6:
		{Quadrangle quadrangle(a, b, c, d, A, B, C, D, "Четырёхугольник");
		print_info(&quadrangle); }
		break;

		case 7:
		{Rectangle rectangle(a, b, c, d, A, B, C, D, "Прямоугольник");
		print_info(&rectangle); }
		break;

		case 8:
		{Square square(a, b, c, d, A, B, C, D, "Квадрат");
		print_info(&square); }
		break;

		case 9:
		{Parallelogram parallelogram(a, b, c, d, A, B, C, D, "Параллелограмм");
		print_info(&parallelogram); }
		break;

		case 10:
		{Rhombus rhombus(a, b, c, d, A, B, C, D, "Ромб");
		print_info(&rhombus); }
		break;

		}

	}
	catch (const wrong_figure& stop_programm) {
		std::cout << stop_programm.what() << std::endl;
		system("pause");
		return 1;
	}

	system("pause");
	return 0;
}
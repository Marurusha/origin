﻿#include <iostream>
#include <Windows.h>
#include "C:\Users\Марина Герасимова\Desktop\Программирование\Плюсы\netologia homeworks\Homework 3_6\Task 2\Header.h"

void Demo(Counter example) {
	char command;
	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> command;

		if (command == '+') {
			example.mult();
		}

		else if (command == '-') {
			example.sub();
		}

		else if (command == '=') {
			std::cout << example.print_number() << std::endl;
		}

		else if ((command == 'x') || (command == 'х')) {
			std::cout << "До свидания!" << std::endl;
			break;
		}

		else {
			std::cout << "Не удалось распознать ответ." << std::endl;
		}
	} while (true);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string answer;

	do {
		std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: " << std::endl;
		std::cin >> answer;

		if (answer == "нет") {
			Counter counter;
			Demo(counter);
			break;
		}

		else if (answer == "да") {
			int user_num;
			std::cout << "Введите начальное значение счётчика: ";
			std::cin >> user_num;
			Counter counter(user_num);
			Demo(counter);
			break;
		}

		else {
			std::cout << "Не удалось распознать ответ." << std::endl;
		}
	} while (true);

	system("pause");
	return 0;
}

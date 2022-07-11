#include <iostream>

class Calculator {
private:
	double num1;
	double num2;

public:
	double add() {
		return (num1 + num2);
	}

	double multiply() {
		return (num1 * num2);
	}

	double subtract_1_2() {
		return (num1 - num2);
	}

	double subtract_2_1() {
		return (num2 - num1);
	}

	double divide_1_2() {
		return (num1 / num2);
	}

	double divide_2_1() {
		return (num2 / num1);
	}
	bool set_num1(double num1) {
		if (num1 == 0) {
			return false;
		}
		else {
			this->num1 = num1;
			return true;
		}
	}

	bool set_num2(double num2) {
		if (num2 == 0) {
			return false;
		}
		else {
			this->num2 = num2;
			return true;
		}
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	Calculator calc;
	double number1, number2;

	do {
		do {
			std::cout << "Введите первое число: ";
			std::cin >> number1;
			if (!calc.set_num1(number1)) {
				std::cout << "Неверный ввод!" << std::endl;
				continue;
			}
			break;
		} while (true);

		do {
			std::cout << "Введите второе число: ";
			std::cin >> number2;
			if (!calc.set_num2(number2)) {
				std::cout << "Неверный ввод!" << std::endl;
				continue;
			}
			break;
		} while (true);

		std::cout << number1 << " + " << number2 << " = " << calc.add() << std::endl;
		std::cout << number1 << " * " << number2 << " = " << calc.multiply() << std::endl;
		std::cout << number1 << " - " << number2 << " = " << calc.subtract_1_2() << std::endl;
		std::cout << number2 << " - " << number1 << " = " << calc.subtract_2_1() << std::endl;
		std::cout << number1 << " / " << number2 << " = " << calc.divide_1_2() << std::endl;
		std::cout << number2 << " / " << number1 << " = " << calc.divide_2_1() << std::endl << std::endl;
	} while (true);

	return 0;
}

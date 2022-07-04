#include <iostream>

enum class months
{
	Январь = 1,
	Февраль = 2,
	Март = 3,
	Апрель = 4,
	Май = 5,
	Июнь = 6,
	Июль = 7,
	Август = 8,
	Сентябрь = 9,
	Октябрь = 10,
	Ноябрь = 11,
	Декабрь = 12
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	unsigned int number;
	bool repeat = true;

	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> number;
		months month = static_cast<months>(number);

		switch (number)
		{
		case 0: std::cout << "До свидания!" << std::endl;
			repeat = false;
			break;
		case 1: std::cout << "Январь" << std::endl << std::endl;
			break;
		case 2: std::cout << "Февраль" << std::endl << std::endl;
			break;
		case 3: std::cout << "Март" << std::endl << std::endl;
			break;
		case 4: std::cout << "Апрель" << std::endl << std::endl;
			break;
		case 5: std::cout << "Май" << std::endl << std::endl;
			break;
		case 6: std::cout << "Июнь" << std::endl << std::endl;
			break;
		case 7: std::cout << "Июль" << std::endl << std::endl;
			break;
		case 8: std::cout << "Август" << std::endl << std::endl;
			break;
		case 9: std::cout << "Сентябрь" << std::endl << std::endl;
			break;
		case 10: std::cout << "Октябрь" << std::endl << std::endl;
			break;
		case 11: std::cout << "Ноябрь" << std::endl << std::endl;
			break;
		case 12: std::cout << "Декабрь" << std::endl << std::endl;
			break;
		default: std::cout << "Неправильный номер! Введите номер месяца от 1 до 12. Если хотите закончить, введите 0" << std::endl << std::endl;
		}
	} while (repeat);
	return(0);
}
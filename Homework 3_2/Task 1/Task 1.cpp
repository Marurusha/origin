#include <iostream>

enum class months
{
	January = 1,
	February = 2,
	March = 3,
	April = 4,
	May = 5,
	June = 6,
	July = 7,
	August = 8,
	September = 9,
	October = 10,
	November = 11,
	December = 12
};

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	unsigned int number;

	do {
		std::cout << "Введите номер месяца: ";
		std::cin >> number;

		if (number == 0) {
			std::cout << "До свидания!" << std::endl;
			break;
		}

		if ((number < 0) || (number > 12)) {
			std::cout << "Неправильный номер! Введите номер месяца от 1 до 12. Если хотите закончить, введите 0" << std::endl << std::endl;
			continue;
		}

		months month = static_cast<months>(number);

		switch (month)
		{
		case months::January: std::cout << "Январь" << std::endl << std::endl;
			break;
		case months::February: std::cout << "Февраль" << std::endl << std::endl;
			break;
		case months::March: std::cout << "Март" << std::endl << std::endl;
			break;
		case months::April: std::cout << "Апрель" << std::endl << std::endl;
			break;
		case months::May: std::cout << "Май" << std::endl << std::endl;
			break;
		case months::June: std::cout << "Июнь" << std::endl << std::endl;
			break;
		case months::July: std::cout << "Июль" << std::endl << std::endl;
			break;
		case months::August: std::cout << "Август" << std::endl << std::endl;
			break;
		case months::September: std::cout << "Сентябрь" << std::endl << std::endl;
			break;
		case months::October: std::cout << "Октябрь" << std::endl << std::endl;
			break;
		case months::November: std::cout << "Ноябрь" << std::endl << std::endl;
			break;
		case months::December: std::cout << "Декабрь" << std::endl << std::endl;
			break;
		}
	} while (true);
	return(0);
}
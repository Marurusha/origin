#include <iostream>
#include <string>

class bad_length : public std::exception {
public:
	const char* what() const override { return "Вы ввели слово запретной длины!"; }
};

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) throw bad_length();
	return str.length();
}

int main()
{
	setlocale(LC_ALL, "rus");
	int stop;
	std::string word;
	try {
		do {
			std::cout << "Введите запретную длину: ";
			std::cin >> stop;
			std::cout << "Введите слово: ";
			std::cin >> word;
			std::cout << "Длина слова " << word << " равна " << function(word, stop) << std::endl;
		} while (true);
	}
	catch (const bad_length& stop_programm) {
		std::cout << stop_programm.what() << " До свидания" << std::endl;
		return 1;
	}

	system("pause");
	return 0;
}


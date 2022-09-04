#include <iostream>
#include <string>
#include <Windows.h>

class bad_length : public std::runtime_error {
public:
	bad_length(std::string msg) : runtime_error(msg) {
	}
};

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) {
		std::string message;
		message = "Слово '" + str + "' запрещенной длины " + std::to_string(forbidden_length) + ". До свидания!";
		throw bad_length(message);
	}
	return str.length();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int stop, length;
	std::string word;
	try {
		do {
			std::cout << "Введите запретную длину: ";
			std::cin >> stop;
			std::cout << "Введите слово: ";
			std::cin >> word;
			length = function(word, stop);
			std::cout << "Длина слова '" << word << "' равна " << length << std::endl;
		} while (true);
	}
	catch (const bad_length& stop_programm) {
		std::cout << stop_programm.what() << std::endl;
		system("pause");
		return 1;
	}

	system("pause");

	return 0;
}


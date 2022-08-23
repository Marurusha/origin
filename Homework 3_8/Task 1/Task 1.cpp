#include <iostream>
#include <string>

class bad_length : public std::runtime_error {
public:
	bad_length(const char* msg) : runtime_error(msg) {
	}
};

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) {
		throw bad_length("Введено слово запрещенной длины!");
	}
	return str.length();
}

int main()
{
	setlocale(LC_ALL, "rus");
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
		std::cout << stop_programm.what() << " (слово '" << word << "', длина " << word.length() << "). " << std::endl << "До свидания." << std::endl;
		return 1;
	}

	return 0;
}


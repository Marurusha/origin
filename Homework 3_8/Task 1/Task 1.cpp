#include <iostream>
#include <string>

class bad_length : public std::runtime_error {
public:
	bad_length(const char* msg, std::string word, int length) : runtime_error(msg) {
		fword = word;
		this -> length = length;
	}
	//В текущей реализации гет-методы не используются, добавила на перспективу
	std::string get_fword() {
		return fword;
	}
	int get_length() {
		return length;
	}
private:
	std::string fword;
	int length;
};

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length) {
		throw bad_length("Введено слово запрещенной длины!", str, str.length());
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
		std::cout << stop_programm.what() << std::endl << "До свидания" << std::endl;
		system("pause");
		return 1;
	}

	system("pause");
	return 0;
}


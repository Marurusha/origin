#define MODE 0
#ifndef MODE
#error Can't find the nessesery const
#endif
#include<iostream>

#if MODE 1
int add(int num1, int num2) {
	return num1 + num2;
}
#endif

int main()
{
	setlocale(LC_ALL, "rus");
	if (MODE == 0) {
		std::cout << "Работаю в режиме тренировки" << std::endl;
	}
#if MODE 1
	else if (MODE == 1) {
		std::cout << "Работаю в боевом режиме" << std::endl;
		int a, b;
		std::cout << "Введите первое число: ";
		std::cin >> a;
		std::cout << "Введите второе число: ";
		std::cin >> b;
		std::cout << "Результат сложения: " << add(a, b) << std::endl;
	}
#endif
	else {
		std::cout << "Неизвестный режим. Завершение работы" << std::endl;
		return 1;
	}
	system("pause");
	return 0;
}


#include <iostream>
#include "C:\Users\Марина Герасимова\Desktop\Программирование\Плюсы\netologia homeworks\Homework 3_6\Task 1\Header.h"

int main()
{
    setlocale(LC_ALL, "rus");
    int num1, num2, operation;
    bool userchoice;
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    do {
    userchoice = true;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> operation;

    if ((num2 == 0) && (operation == 4)) {
        std::cout << "Нельзя делить на 0! ";
        userchoice = false;
        continue;
    }

    switch (operation) {
    case 1:
        std::cout << "Сумма чисел " << num1 << " и " << num2 << " равна " << sum(num1, num2) << std::endl;
        break;
    case 2:
        std::cout << "Разница чисел " << num1 << " и " << num2 << " равна " << sub(num1, num2) << std::endl;
        break;
    case 3:
        std::cout << "Произведение чисел " << num1 << " и " << num2 << " равно " << mult(num1, num2) << std::endl;
        break;
    case 4:
        std::cout << "Результат деления чисел " << num1 << " на " << num2 << " равен " << divis(num1, num2) << std::endl;
        break;
    case 5:
        std::cout << "Возведение числа " << num1 << " в степень " << num2 << " равно " << deg(num1, num2) << std::endl;
        break;
    default:
        std::cout << "Некорректное значение. ";
        userchoice = false;
        break;
    }
    } while (!userchoice);
    
    system("pause");
    return 0;
}

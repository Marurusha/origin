#include <iostream>
#include <Windows.h>
#include "Greeter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string username;
    std::cout << "Введите имя: ";
    std::cin >> username;

    Greeter greeter(username);
    std::cout << greeter.greet();

    return 0;
}
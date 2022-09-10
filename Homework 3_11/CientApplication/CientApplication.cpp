#include <iostream>
#include <Windows.h>
#include "Leaver.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string username;
    std::cout << "Введите имя: ";
    std::cin >> username;
    DynamicLeaver::Leaver leaver(username);
    std::cout << leaver.leave();

    system("pause");
    return 0;
}

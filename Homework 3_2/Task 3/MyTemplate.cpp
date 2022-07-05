#include <iostream>

struct address {
    std::string city;
    std::string street;
    int house = 0; //Компилятор рекомендует инициализировать такие переменные
    int flat = 0;
    int index = 0;
};

void show_adress(address& add_for_show)
{
    std::cout << "Город: " << add_for_show.city << std::endl;
    std::cout << "Улица: " << add_for_show.street << std::endl;
    std::cout << "Дом: " << add_for_show.house << std::endl;
    std::cout << "Квартира: " << add_for_show.flat << std::endl;
    std::cout << "Индекс: " << add_for_show.index << std::endl << std::endl;
}

int main()
{
    setlocale(LC_ALL, "rus");

    address address1;
    address1.city = "Москва";
    address1.street = "Ленина";
    address1.house = 10;
    address1.flat = 245;
    address1.index = 355933;

    show_adress(address1);

    address address2;
    address2.city = "Санкт-Петербург";
    address2.street = "Московская";
    address2.house = 22;
    address2.flat = 3;
    address2.index = 132578;

    show_adress(address2);

    return(0);
}
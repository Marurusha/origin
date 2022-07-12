#include <iostream>
#include <fstream>
#include <string>

class Address {
private:
	std::string city;
	std::string street;
	int house;
	int flat;

public:

	Address() {
		city = "not found";
		street = "not found";
		house = 0;
		flat = 0;
	}

	Address(std::string city, std::string street, int house, int flat) {

		this->city = city;
		this->street = street;
		this->house = house;
		this->flat = flat;
	}

	std::string fill_address() {
		return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat); 
	}
};

void sort(Address* address_for_sort, int count) {

	for (int i = 0; i < count - 1; i++) {
		for (int j = 0; j < count - 1; j++)
			if (static_cast<int>(address_for_sort[j].fill_address()[0]) > static_cast<int>(address_for_sort[j + 1].fill_address()[0])) {
				Address temp;
				temp = address_for_sort[j];
				address_for_sort[j] = address_for_sort[j + 1];
				address_for_sort[j + 1] = temp;
			}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	std::ifstream add_from_file("in.txt");
	std::ofstream fill_file("out.txt");

	if ((!(add_from_file.is_open())) || (!(fill_file.is_open()))) {
		std::cout << "Файл не найден. Проверьте файл и перезапустите программу" << std::endl;
		return(3);
	}
	else {
		int count, userhouse, userflat;
		std::string usercity, userstreet;
		add_from_file >> count;
		Address* address = new Address[count];
		fill_file << count << std::endl;
		for (int i = 0; i < count; i++) {
			add_from_file >> usercity;
			add_from_file >> userstreet;
			add_from_file >> userhouse;
			add_from_file >> userflat;

			address[i] = Address(usercity, userstreet, userhouse, userflat);
		}

		sort(address, count);

		for (int i = 0; i < count; i++) {
			fill_file << address[i].fill_address() << std::endl;
		}

		add_from_file.close();
		fill_file.close();
		delete[] address;

		std::cout << "Данные успешно записаны" << std::endl;
		system("pause");
	}

	return 0;
}
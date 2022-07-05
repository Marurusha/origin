#include <iostream>

struct bank_account
{
	int id_account;
	std::string owner_name;
	double balance;
};

void update_balance(bank_account* old_acc, double new_balance) {
	old_acc -> balance = new_balance;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "rus");
	bank_account acc;
	double new_balance;
	int temp_id_account;
	std::cout << "Введите номер счета: ";

	do {
		std::cin >> temp_id_account;
		if (temp_id_account <= 0) {
			std::cout << "Ошибка ввода. Введите корректный номер счета: ";
			continue;
		}
		break;
	} while (true); 
	acc.id_account = temp_id_account;

	std::cout << "Введите имя владельца: ";
	std::cin >> acc.owner_name;

	std::cout << "Введите баланс: ";
	std::cin >> acc.balance;

	std::cout << "Введите новый баланс: ";
	std::cin >> new_balance;
	update_balance(&acc, new_balance);

	std::cout << "Ваш счет: " << acc.owner_name << ", " << acc.id_account << ", " << acc.balance << std::endl;
	return(0);
}
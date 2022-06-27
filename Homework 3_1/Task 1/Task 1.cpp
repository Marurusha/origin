#include <iostream>
#include <fstream>

bool readfile(const std::string& filename, int*& arr_1, int*& arr_2, unsigned int& size_1, unsigned int& size_2)
{
	std::ifstream source(filename);

	if (!source.is_open()) {
		std::cout << "Исходный файл не найден." << std::endl;
		return(false);
	}

	source >> size_1;

	arr_1 = new int[size_1];
	for (int i = 0; i < size_1; i++) {
		source >> arr_1[i];
	}

	source >> size_2;

	arr_2 = new int[size_2];
	for (int i = 0; i < size_2; i++) {
		source >> arr_2[i];
	}
	source.close();
	return(true);
}

int main()
{
	setlocale(LC_ALL, "Russian");

	int* arr_1 = nullptr;
	int* arr_2 = nullptr;
	unsigned int size_1;
	unsigned int size_2;

	if (readfile("in.txt", arr_1, arr_2, size_1, size_2)) {


		std::ofstream exitfile("out.txt");
		if (!exitfile.is_open()) {
			std::cout << "Файл для сохранения не найден." << std::endl;
		}

		exitfile << size_2 << std::endl;

		exitfile << arr_2[(size_2 - 1)];

		for (int i = 0; i < size_2 - 1; i++) {
			exitfile << " " << arr_2[i];
		}
		exitfile << std::endl;

		exitfile << size_1 << std::endl;
		for (int i = 1; i < size_1; i++) {
			exitfile << arr_1[i] << " ";
		}

		exitfile << arr_1[0] << std::endl;
		exitfile.close();

	}

	delete[] arr_1;
	delete[] arr_2;

	return(0);
}



﻿#include <iostream>

#define SUB(num1, num2) ((num1) - (num2))

int main(int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;

	system("pause");
	return 0;
}

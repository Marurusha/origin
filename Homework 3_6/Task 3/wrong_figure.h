#pragma once
#include <iostream>
#include <Windows.h>
#include <clocale>

class wrong_figure : public std::domain_error {
public:
	wrong_figure(std::string msg);
};

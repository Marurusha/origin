#pragma once
#include <iostream>

class wrong_figure : public std::domain_error {
public:
	wrong_figure(std::string msg);
};

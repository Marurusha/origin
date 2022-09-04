#pragma once
#include <iostream>

class Figures {
private:
	int Number_of_sides;
	std::string Figure;

public:
	Figures(int sides, std::string name);

public:
	int show_sides();
	std::string show_name();
	virtual void print_sides();
	virtual void print_angles();
};

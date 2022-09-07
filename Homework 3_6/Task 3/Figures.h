#pragma once
#include <iostream>
#include <Windows.h>

class Figures {
private:
	int Number_of_sides;
	std::string Figure;

protected:
	Figures(int sides, std::string name);

public:
	Figures();
	int show_sides();
	std::string show_name();
	virtual void print_sides();
	virtual void print_angles();
};

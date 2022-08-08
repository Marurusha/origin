#pragma once
#include <iostream>

class Figures {
private:
	int Number_of_sides;
	std::string Figure;

protected:
	Figures(int sides, std::string name);

public:
	Figures();
	int show_sides();
	virtual std::string show_name();
	virtual void print_sides();
	virtual void print_angles();
};

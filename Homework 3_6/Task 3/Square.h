#pragma once
#include <iostream>
#include "Rectangle.h"

class Square : public Rectangle {
private:
	Square(int side1);
	std::string show_name() override;
public:
	Square();
};

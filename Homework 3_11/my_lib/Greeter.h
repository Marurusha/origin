#pragma once
#include <iostream>
#include <Windows.h>

class Greeter {
private:
	std::string name;

public:
	Greeter(std::string username);
	std::string greet();
};

#include "Greeter.h"

Greeter::Greeter(std::string username) {
	name = username;
}

std::string Greeter::greet() {
	std::string hello;
	hello = "������������, " + name + "!\n";
	return hello;
}
#include "Leaver.h"

namespace DynamicLeaver {
	Leaver::Leaver(std::string username) {
		name = username;
	}

	std::string Leaver::leave() {
		std::string bye;
		bye = "�� ��������, " + name + "!\n";
		return bye;
	}
}
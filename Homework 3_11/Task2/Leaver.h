#pragma once
#include <iostream>

#ifdef LEAVERLIBLIBRARYDYNAMIC_EXPORTS
#define LEAVERLIBLIBRARY_API __declspec(dllexport)
#else
#define LEAVERLIBLIBRARY_API __declspec(dllimport)
#endif

namespace DynamicLeaver {
	class Leaver {
	private:
		std::string name;

	public:
		LEAVERLIBLIBRARY_API Leaver(std::string username);
		LEAVERLIBLIBRARY_API std::string leave();
	};
}
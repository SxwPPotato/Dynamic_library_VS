#pragma once
#include <string>
#ifdef Leaver_DLL_EXPORTS
#define LEAVER_API __declspec(dllexport)
#else
#define LEAVER_API __declspec(dllimport)
#endif


	class Leaver {
	private:
		std::string name;
	public:
		LEAVER_API Leaver(std::string name);
		LEAVER_API void leave();

	};

#include "harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::complain( std::string level )
{
	typedef void (Harl::*HarlMemFn)(void);
	HarlMemFn functions[] = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };
	std::string levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };

	for (int i = 0; i < 4; ++i) {
		if (levels[i] == level) {
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "Unknown level: " << level << std::endl;
}

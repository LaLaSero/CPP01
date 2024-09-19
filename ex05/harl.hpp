#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
	void debug( void ) {
		std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"<< std::endl;
	}
	void info( void ) {
		std::cout << "[INFO]: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
	}
	void warning( void ) {
		std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
	}
	void error( void ) {
		std::cout << "[ERROR]: This is unacceptable! I want to speak to the manager now." << std::endl;
	}
public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif


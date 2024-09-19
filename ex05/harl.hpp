#ifndef HARL_H
#define HARL_H

#include <iostream>

class Harl
{
	void debug( void ) {
		std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
	}
	void info( void ) {
		std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger!" << std::endl;
	}
	void warning( void ) {
		std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years!" << std::endl;
	}
	void error( void ) {
		std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	}
public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif
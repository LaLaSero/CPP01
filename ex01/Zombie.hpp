#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		Zombie();
		~Zombie();
		void announce();
};

Zombie *zombieHorde(int N, std::string name);


#endif
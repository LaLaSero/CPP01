#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	
	zombie = newZombie("New Zombie");
	zombie->announce();
	randomChump("Random Zombie");
	delete zombie;
	return (0);
}
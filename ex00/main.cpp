#include "Zombie.hpp"

int main()
{
	Zombie *zombie;
	
	zombie = newZombie("New Zombie");
	if (!zombie)
	{
		std::cout << "Memory allocation failed" << std::endl;
		return (1);
	}
	zombie->announce();
	randomChump("Random Zombie");
	delete zombie;
	return (0);
}
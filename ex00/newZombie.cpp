#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *NewZombie = new Zombie(name);
	if (!NewZombie)
		return (NULL);
	return (NewZombie);
}

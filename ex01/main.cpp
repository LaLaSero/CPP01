#include "Zombie.hpp"

int main()
{
	Zombie *horde;
	int N = 5;
	
	horde = zombieHorde(N, "Horde");
	if (!horde)
	{
		std::cout << "Memory allocation failed" << std::endl;
		return (1);
	}
 	for (int i = 0; i < N; i++)
	{
		std::cout << "Index " << i << ": ";
		horde[i].announce();
	}

	delete[] horde;
	return (0);
}
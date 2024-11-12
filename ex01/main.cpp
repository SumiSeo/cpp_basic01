#include "Zombie.hpp"

int	main(void)
{
	Zombie *horde = zombieHorde(5, "Patate");
	if (horde == NULL)
		std::cout << "There is no zombie" << std::endl;

	for (int i = 0; i < 5; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
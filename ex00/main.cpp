#include "Zombie.hpp"
#include <cstring>
#include <iostream>

int	main(void)
{
	Zombie zombie1("Zombie one");
	zombie1.announce();
	Zombie *zombie2 = newZombie("Zombie two");
	zombie2->announce();
	randomChump("Zombie chump");
	delete zombie2;
	return (0);
}
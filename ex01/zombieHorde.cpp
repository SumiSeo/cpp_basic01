#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
		return (NULL);
	Zombie *zombies;
	std::stringstream ss;

	zombies = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ss.str(std::string());
		ss << i;
		zombies[i].setName(name + ss.str());
	};
	return (zombies);
}
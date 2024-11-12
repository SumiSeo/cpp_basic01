
#include "Zombie.hpp"

// constructor
Zombie::Zombie(std::string name)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...";
}

// destructor
Zombie::~Zombie(void)
{
}

// normal func
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...";
}

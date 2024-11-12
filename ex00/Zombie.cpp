
#include "Zombie.hpp"

// constructor
Zombie::Zombie(std::string name) : name(name){};

// destructor
Zombie::~Zombie(void)
{
	std::cout << name << ": died..." << std::endl;
}

// normal func
void Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

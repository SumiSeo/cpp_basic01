#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon *weapon) : name(name), weapon(weapon){};
HumanB::HumanB(std::string name) : name(name){};
void HumanB::attack(void) const
{
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
};
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
};
HumanB::~HumanB(void){};

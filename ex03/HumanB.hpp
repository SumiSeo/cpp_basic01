#ifndef __HUMAN__B__HPP
# define __HUMAN__B__HPP

# include "Weapon.hpp"
class HumanB
{
  private:
	std::string name;
	Weapon *weapon;

  public:
	HumanB(std::string name, Weapon *weapon);
	HumanB(std::string name);
	void attack(void);
	void setWeapon(Weapon &weapon);
	~HumanB(void);
};

#endif /*__HUMAN__B__HPP*/
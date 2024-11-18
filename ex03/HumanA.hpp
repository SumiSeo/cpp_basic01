#ifndef __HUMAN__A__HPP
# define __HUMAN__A__HPP

# include "Weapon.hpp"

class HumanA
{
  private:
	std::string name;
	Weapon &weapon;

  public:
	HumanA(std::string name, Weapon &weapon);
	void attack();
	~HumanA(void);
};
#endif /*__HUMAN__A__HPP*/
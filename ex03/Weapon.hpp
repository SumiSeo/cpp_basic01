#pragma once
#ifndef __WEAPON__HPP
# define __WEAPON__HPP

# include <cstring>
# include <iostream>
# include <optional>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon(std::string type);
	Weapon();
	std::string const &getType(void);
	void setType(std::string type);
	~Weapon(void);
};
#endif /*__WEAPON__HPP*/
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
	~Weapon(void);
	const std::string &getType(void) const;
	void setType(const std::string type);
};
#endif /*__WEAPON__HPP*/
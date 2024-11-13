#pragma once
#ifndef __ZOMBIE__HPP
# define __ZOMBIE__HPP

# include <cstring>
# include <iostream>

class Zombie
{
  private:
	std::string name;
	static int size;

  public:
	Zombie(std::string name);
	Zombie();
	void announce(void);
	void setName(std::string name);
	~Zombie(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif //*__ZOMBIE_HPP * //
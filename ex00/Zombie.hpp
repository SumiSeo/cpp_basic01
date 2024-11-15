#pragma once
#ifndef __ZOMBIE__HPP
# define __ZOMBIE__HPP

# include <cstring>
# include <iostream>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie(std::string name);
	void announce(void);
	~Zombie(void);
};
Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif //* __ZOMBIE__HPP *//
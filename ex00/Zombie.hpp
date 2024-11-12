#pragma once
#ifndef __ZOMBIE__H
# define __ZOMBIE__H

# include <cstring>
# include <iostream>

class Zombie
{
  public:
	Zombie(std::string name);
	~Zombie(void);

	void announce(void);

  private:
	std::string name;
};

#endif //* __ZOMBIE__H *//
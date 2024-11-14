#pragma once
#ifndef __HARL__HPP
# define __HARL_HPP

# include <cstring>
# include <iostream>

class Harl
{
  private:
	std::string level;
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

  public:
	void complain(std::string level);
	Harl(void);
	~Harl(void);
};

#endif /*__HARL__HPP*/
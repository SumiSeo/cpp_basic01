#pragma once
#ifndef __HARL__HPP
# define __HARL_HPP

# include <cstring>
# include <iostream>

class Harl
{
  public:
	Harl();
	~Harl();

	void complain(std::string level);

  private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
};

#endif /*__HARL__HPP*/
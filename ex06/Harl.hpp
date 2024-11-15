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

	void complain_all(std::string level);

  private:
	void debug();
	void info();
	void warning();
	void error();
};

#endif /*__HARL__HPP*/
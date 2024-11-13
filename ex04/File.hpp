#pragma once
#ifndef __FILE__HPP
# define __ FILE__HPP

# include <cstring>
# include <iostream>

class File
{
  private:
	std::string name;
	std::string strCur;
	std::string strRepl;

  public:
	File(std::string name, std::string strCur, std::string strRepl);
	void copyFile(std::string name);
	void replaceString(std::string name, std::string strCur,
		std::string strRepl);
	~File(void);
};

#endif /*__FILE__HPP*/
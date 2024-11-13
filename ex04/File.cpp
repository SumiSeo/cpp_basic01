#include "File.hpp"

File::File(std::string name, std::string strCur,
	std::string strRepl) : name(name), strCur(strCur), strRepl(strRepl){};
void File::copyFile(std::string name){};
void File::replaceString(std::string name, std::string strCur,
	std::string strRepl){};
File::~File(void){};
